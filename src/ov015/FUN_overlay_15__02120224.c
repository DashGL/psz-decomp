// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x68, exact bytes and relocation targets.
void FUN_overlay_15__021206d0(void *, int, int);
unsigned short FUN_overlay_15__0212079c(unsigned short);
unsigned int FUN_overlay_15__02120774(int);
int FUN_overlay_15__02120744(int, void *, int, int, void *, int);

extern int data_0213c2c0[];
extern signed char data_0213c2e0[];

struct SockAddrIn8 {
    unsigned char len;
    unsigned char family;
    unsigned short port;
    unsigned int addr;
};

void FUN_overlay_15__02120224(void *buf, int len, int bcast, int sock) {
    struct SockAddrIn8 sin;

    FUN_overlay_15__021206d0(&sin, 0, 8);
    sin.family = 2;
    sin.port = FUN_overlay_15__0212079c(0x5790);
    sin.addr = FUN_overlay_15__02120774(data_0213c2c0[13]);
    if (bcast == 0xff || data_0213c2e0[0x1c] == 0) {
        sin.addr = 0xffffffffu;
    }
    FUN_overlay_15__02120744(sock, buf, len, 0, &sin, 8);
}
