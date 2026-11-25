# GhidraMCP integration (working 2026-08-28)

## Linux headless setup (verified 2026-10-14)

The Linux workstation uses Ghidra 12.1 and the installed bethington
GhidraMCP 5.13.1 headless server. The saved analysis in
`assets/Phantasy Star Zero Mini (Japan).nds.gzf` imports successfully with
the GZF loader and no re-analysis: 7,241 functions, ARM:LE:32:v5t.

Two extensions named GhidraMCP prevented Ghidra startup. The older
LaurieWired user extension was moved to an external backup under
`~/.cache/pszm-decomp/ghidra-extension-backups/`; the bethington system
extension remains installed. NTRGhidra remains installed as well.

Local analysis project: `~/ghidra-projects/pszm-mini.gpr`. Ghidra rejects
project paths containing dot-prefixed directory components, so projects
must not be placed beneath `.cache`. The original GZF is unchanged.

Start the installed server (external Ghidra installation path shown):

```sh
/opt/ghidra/support/launch.sh fg jdk GhidraMCP 4G \
  '-Djava.awt.headless=true' com.xebyte.headless.GhidraMCPHeadlessServer \
  --bind 127.0.0.1 --port 8089
```

POST JSON to `/open_project` with `path` set to the absolute `.gpr` path,
then to `/load_program_from_project` with
`{"path":"/Phantasy Star Zero Mini (Japan).nds"}`. These endpoint names
are verified against the installed 5.13.1 server, not the newer upstream
API. `/get_metadata`, `/decompile_function?address=0208b334` and
`/disassemble_function?address=0208b334` work. The Python client now
imports on Linux and uses loopback HTTP; its older Winsock transport is
Windows-only. No graphical desktop is needed for these analysis queries.

The Windows setup below records the original analysis environment.

Ghidra 12.1.2 + GhidraMCP 6.0.0 extension (LaurieWired) is loaded with
"Phantasy Star Zero Mini (Japan).nds" fully analyzed.

## How Hermes talks to it

The extension serves its REST API on a **Windows AF_UNIX socket** (no TCP port):

    %LOCALAPPDATA%\Temp\ghidra-mcp-Admin\ghidra-<pid>.sock

Python's `socket` module doesn't expose AF_UNIX on Windows, so
`tools/ghidra_client.py` speaks raw Winsock via ctypes (WSAStartup + socket(AF_UNIX=1)
+ connect to the path). The protocol is plain HTTP/1.0 over the socket.

Socket files change when Ghidra restarts; the client picks the newest `.sock`.

## Verified endpoints

| Endpoint | Notes |
|---|---|
| `/get_metadata` | program info (7241 functions, ARM:LE:32:v5t) |
| `/list_functions` | `NAME at ADDR` lines; overlays appear as `overlay_N::ADDR` |
| `/list_segments` | ARM9 0x02004000-0x020EBFDF + 6 overlays at 0x0219D1C0 + IO/WRAM/VRAM |
| `/list_strings`, `/list_data_items`, `/list_classes` | analysis data |
| `/decompile_function?address=ADDR` | hex address WITHOUT 0x (name param didn't work) |
| `/disassemble_function?address=ADDR` | text disassembly |
| `/read_memory?address=ADDR&length=N` | JSON {address,length,data[],hex} (len<=16 needs explicit length) |

## What Ghidra shows for this ROM

- 7,241 functions: 6,542 ARM9 + 699 in overlays (ov001: 307, ov005: 218, ov004: 167)
- Language ARM:LE:32:v5t, entry `_entry_arm9` at 0x02004800 (properly named!)
- Shared_WRAM block at 0x03000000 exists (the ctor area that broke dsd init)
- Full inventory exported to `config/arm9/symbols.txt` (main module) and
  `config/arm9/overlay_symbols.txt` (overlays, addresses overlap between overlays)

## First matched function

`FUN_02004eb0` @ 0x02004eb0 - reads a flag byte via pointer 0x04004000 (IO regs),
returns `(val & 3) == 1`. Byte-identical under **all four** candidate compilers
(dsi/1.1, 2.0/sp2, 2.0/sp2p3, 1.2/sp2p3) - so this function doesn't discriminate
the build (like pictochat's first matches). See src/arm9/FUN_02004eb0.c.

## Second function status (FUN_02004d50, DTCM list-append)

Pool words decoded: 0x02FE0000 (DTCM base - cross-confirms our extraction finding!)
and 0x00080000. The function appends a NUL-terminated u32 array to a list in DTCM.
Matching in progress; the shape needs `dst = DAT_02004d98 + ...` where the .data
variable's VALUE is loaded once (mwccarm re-loads externs per statement - the
original source shape is likely `u32* dst = (u32*)(DAT_02004d98 + 0x1000 - ...)` with
pointer arithmetic in u32 units; still 1 word over - needs more iteration).
