"""GhidraMCP client for the plugin's HTTP server.

GhidraMCP 6.0.0 (extension in Ghidra 12.1.2, per-user Extensions dir) serves
its REST API on a LOOPBACK TCP PORT - 127.0.0.1:8089 by default, shown live in
the plugin's GhidraMCP panel ("Server Port"). The port is probed, not assumed.

Two transports, in probe order:
  1. plain HTTP over loopback TCP via urllib (current plugin default);
  2. the older per-user AF_UNIX socket, %LOCALAPPDATA%\\Temp\\ghidra-mcp-Admin\\
     ghidra-<pid>.sock, spoken through raw Winsock because Python's socket
     module on Windows does not expose AF_UNIX.

DIAGNOSIS LESSON: an empty socket directory does NOT mean GhidraMCP is down -
the TCP server can be running perfectly while the AF_UNIX path is unused. Probe
/server/status over TCP before concluding the bridge is unavailable.

Used by the decomp tooling until a native Hermes MCP entry is wired up.
"""
import ctypes
import time
import os
import json
import glob
import urllib.request
import urllib.error

# Candidate ports, newest plugin default first. GhidraMCP's own panel prints
# the live value; override with GHIDRA_MCP_PORT if it differs.
_PORT_CANDIDATES = [os.environ.get("GHIDRA_MCP_PORT"), "8089", "8080", "18080"]
_host = os.environ.get("GHIDRA_MCP_HOST", "127.0.0.1")

_ws2 = ctypes.windll.ws2_32 if os.name == "nt" else None


class _WSADATA(ctypes.Structure):
    _fields_ = [("wVersion", ctypes.c_ushort), ("wHighVersion", ctypes.c_ushort),
                ("iMaxSockets", ctypes.c_ushort), ("iMaxUdpDg", ctypes.c_ushort),
                ("lpVendorInfo", ctypes.c_void_p), ("szDescription", ctypes.c_char * 257),
                ("szSystemStatus", ctypes.c_char * 129)]


class _sockaddr_un(ctypes.Structure):
    _fields_ = [("sun_family", ctypes.c_ushort), ("sun_path", ctypes.c_char * 108)]


_started = False
SOCK_DIR = os.path.expandvars(r"%LOCALAPPDATA%\Temp\ghidra-mcp-Admin")


def _startup():
    global _started
    if not _started:
        _ws2.WSAStartup(0x0202, ctypes.byref(_WSADATA()))
        _started = True


def find_socket():
    """Return the path of the newest GhidraMCP AF_UNIX socket, or None.

    GhidraMCP 6.0.0 serves over TCP and creates no socket at all, so None is
    the NORMAL result on a current install - do not read it as "Ghidra down".
    """
    if not os.path.isdir(SOCK_DIR):
        return None
    socks = [os.path.join(SOCK_DIR, f) for f in os.listdir(SOCK_DIR) if f.endswith(".sock")]
    if not socks:
        return None
    socks.sort(key=os.path.getmtime)
    return socks[-1]


_base_url = None


def base_url(force=False):
    """Probe candidate loopback ports for a live GhidraMCP; cache the winner.

    Returns "http://HOST:PORT" or None when no port answers /server/status.
    """
    global _base_url
    if _base_url and not force:
        return _base_url
    for port in [p for p in _PORT_CANDIDATES if p]:
        url = "http://%s:%s" % (_host, port)
        try:
            with urllib.request.urlopen(url + "/server/status", timeout=3) as r:
                if r.status == 200:
                    _base_url = url
                    return url
        except Exception:
            continue
    return None


def _http_request(method, path, body=None, wait=15.0):
    """Returns response BYTES, matching the AF_UNIX path's contract."""
    base = base_url()
    if base is None:
        return None
    data = None
    headers = {}
    if body is not None:
        if isinstance(body, (dict, list)):
            body = json.dumps(body)
        if isinstance(body, str):
            body = body.encode()
        data = body
        headers["Content-Type"] = "application/json"
    req = urllib.request.Request(base + path, data=data, headers=headers, method=method)
    with urllib.request.urlopen(req, timeout=wait) as r:
        return r.read().decode("utf-8", errors="replace").encode()


def request(method, path, body=None, wait=15.0, sock_path=None):
    """HTTP request to GhidraMCP; returns the response body bytes.

    AF_UNIX SOCKET FIRST - that is the plugin's primary local transport and the
    path this client has always used. The loopback-TCP probe is a FALLBACK for
    one observed environment failure: the plugin's socket file can be deleted
    underneath the running server (it lives under %LOCALAPPDATA%\\Temp), leaving
    the server up and advertising a socket that no longer exists on disk. When
    the socket is present this function is byte-for-byte the old code path.

    The failure message names both transports so it never implies "Ghidra is
    not running" - during that failure Ghidra was up the whole time.
    """
    sock_path = sock_path or find_socket()
    if sock_path is not None:
        out = _uds_request(method, path, body, wait, sock_path)
        if out is not None:
            return out
    out = _http_request(method, path, body, wait)
    if out is not None:
        return out
    raise FileNotFoundError(
        "GhidraMCP unreachable: no AF_UNIX socket in %s and no loopback port "
        "answered /server/status (tried %s). Ghidra may well still be running - "
        "restart the GhidraMCP server, or check its panel for the live Server Port."
        % (SOCK_DIR, ",".join(str(p) for p in _PORT_CANDIDATES if p)))


def _uds_request(method, path, body=None, wait=15.0, sock_path=None):
    """Original AF_UNIX transport, unchanged in behavior.

    Returns None (instead of raising) when the socket file exists but the
    connection fails - the observed state where the plugin's socket was
    deleted under the running server - so request() can fall through to TCP.
    Any OTHER transport error still propagates, exactly as before.
    """
    if _ws2 is None:
        return None  # The legacy socket transport uses Windows Winsock.
    _startup()
    s = _ws2.socket(1, 1, 0)  # AF_UNIX, SOCK_STREAM
    addr = _sockaddr_un()
    addr.sun_family = 1
    addr.sun_path = sock_path.encode()
    r = _ws2.connect(s, ctypes.byref(addr), 2 + len(addr.sun_path) + 1)
    if r != 0:
        _ws2.closesocket(s)
        return None
    payload = f"{method} {path} HTTP/1.0\r\n".encode()
    if body is not None:
        if isinstance(body, (dict, list)):
            body = json_dumps(body)
        payload += f"Content-Type: application/json\r\nContent-Length: {len(body)}\r\n".encode() + b"\r\n" + body
    else:
        payload += b"\r\n"
    _ws2.send(s, payload, len(payload), 0)
    timeout = ctypes.c_uint(int(wait * 1000))
    _ws2.setsockopt(s, 0xFFFF, 0x1006, ctypes.byref(timeout), 4)  # SO_RCVTIMEO
    buf = ctypes.create_string_buffer(16 << 20)
    total = b""
    t0 = time.time()
    while time.time() - t0 < wait:
        n = _ws2.recv(s, buf, 16 << 20, 0)
        if n <= 0:
            break
        total += buf.raw[:n]
    _ws2.closesocket(s)
    if b"\r\n\r\n" in total:
        return total.partition(b"\r\n\r\n")[2]
    return total


def get(path, wait=15.0):
    return request("GET", path, wait=wait)


def post(path, body, wait=30.0):
    return request("POST", path, body=body, wait=wait)


def json_dumps(obj):
    import json
    return json.dumps(obj).encode()


# ---- convenience wrappers over the standard GhidraMCP endpoints ----

def _addr_str(addr):
    """Normalize an address (int or hex string) to the bare hex GhidraMCP wants.

    An int must become hex, NOT decimal: str(0x02041a70) == '41991856' and the
    server silently answers an empty body for that, which used to look like a
    dead bridge rather than a formatting bug. A SYMBOL name must keep its case
    (only hex gets lower-cased) - names are matched case-sensitively.
    """
    if isinstance(addr, int):
        return "%08x" % addr
    s = str(addr).strip()
    if s.lower().startswith("0x") or all(c in "0123456789abcdefABCDEF:" for c in s):
        return s.lower().replace("0x", "").replace(":", "")
    return s


def metadata():
    return get("/get_metadata").decode()


def functions():
    """[(name, addr_str)] for every function Ghidra knows."""
    out = []
    for line in get("/list_functions", wait=30).decode().strip().splitlines():
        if " at " in line:
            name, addr = line.rsplit(" at ", 1)
            out.append((name.strip(), addr.strip()))
    return out


def decompile(name_or_addr):
    from urllib.parse import quote
    r = get("/decompile_function?address=" + quote(_addr_str(name_or_addr)), wait=60)
    return r.decode(errors="replace")


def decompile_at(addr):
    """Decompile by hex address (02000800 or 0x02000800)."""
    return decompile(_addr_str(addr))


def disassemble(addr, wait=30):
    from urllib.parse import quote
    r = get("/disassemble_function?address=" + quote(_addr_str(addr)), wait=wait)
    return r.decode(errors="replace")


def segments():
    return get("/list_segments").decode()


def strings():
    return get("/list_strings", wait=60).decode()


def read_memory(addr, length):
    from urllib.parse import quote
    r = get(f"/read_memory?address={quote(_addr_str(addr))}&length={length}", wait=60)
    text = r.decode(errors="replace").strip()
    if not text:
        raise ValueError("read_memory(%r, %d) returned an empty body - bad address "
                         "format? (send hex, not decimal)" % (addr, length))
    # GhidraMCP 6.0.0 replies with a JSON object {"address":..,"length":..,"data":[..],"hex":".."}
    if text.startswith("{"):
        try:
            import json
            obj = json.loads(text)
            hex_field = obj.get("hex")
            if hex_field is not None:
                return bytes.fromhex(hex_field)
            return bytes(obj.get("data", []))
        except (ValueError, KeyError):
            pass
    # fallback: bare hex text
    try:
        return bytes.fromhex(text)
    except ValueError:
        return r
