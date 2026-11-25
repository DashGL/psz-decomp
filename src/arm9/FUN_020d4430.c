// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x108, exact bytes and relocation targets.
// flags: -O4,p
extern int FUN_020c7694(int);
extern int FUN_020c750c(int, char *, int, int, void *, int *);
extern int FUN_020c75a8(int);
extern int FUN_020d4340(int *, unsigned int, unsigned short);
extern int FUN_020d43d0(int *, unsigned int, unsigned short, int);
extern void FUN_020d5128(int *);
extern int FUN_020d4174(int *, char *, int, unsigned int, unsigned short);

int FUN_020d4430(int *arg0) {
    char buf[1500];
    unsigned char addr[8];
    int addr_len;

    if (FUN_020c7694(arg0[0])) {
        do {
            int n;
            addr_len = 8;
            n = FUN_020c750c(arg0[0], buf, 1500, 0, addr, &addr_len);
            if (n == -1) {
                int err = FUN_020c75a8(arg0[0]);
                if (err == -15) {
                    unsigned short p = *(unsigned short *)(addr + 2);
                    if (!FUN_020d4340(arg0, *(unsigned int *)(addr + 4), (unsigned short)((unsigned char)((int)p >> 8) | ((p << 8) & 0xff00)))) {
                        return 0;
                    }
                } else if (err == -23) {
                    unsigned short p = *(unsigned short *)(addr + 2);
                    if (!FUN_020d43d0(arg0, *(unsigned int *)(addr + 4), (unsigned short)((unsigned char)((int)p >> 8) | ((p << 8) & 0xff00)), 0)) {
                        return 0;
                    }
                } else if (err != -35) {
                    FUN_020d5128(arg0);
                    return 0;
                }
            } else {
                unsigned short p = *(unsigned short *)(addr + 2);
                if (!FUN_020d4174(arg0, buf, n, *(unsigned int *)(addr + 4), (unsigned short)((unsigned char)((int)p >> 8) | ((p << 8) & 0xff00)))) {
                    return 0;
                }
            }
        } while (FUN_020c7694(arg0[0]));
    }
    return 1;
}
