// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x108, exact bytes and relocation targets.
// flags: -O4,p
extern char *FUN_02003f6c(const char *, int);
extern void FUN_02000edc(const char *, const char *, const char *, int);
extern void FUN_020014d4(void *, const void *, int);
extern int FUN_02005898(const char *);
extern unsigned int FUN_020c7590(const char *);
extern void *FUN_0202820c(const char *);
extern unsigned short DAT_020eba58[];

extern const char DAT_020feaf4[], DAT_020feb14[], DAT_020fead0[];

static inline int isdigit_020d51c0(int c) {
    return (c < 0 || c >= 0x80) ? 0 : (DAT_020eba58[c] & 8);
}

int FUN_020d51c0(const char *arg0, unsigned int *arg1, unsigned short *arg2) {
    char buf[257];
    unsigned int ip = 0;
    unsigned short port;

    if (arg0 == 0 || arg0[0] == 0) {
        port = 0;
        ip = 0;
    } else {
        char *colon = FUN_02003f6c(arg0, ':');
        if (colon == 0) {
            port = 0;
        } else {
            const char *p;
            int val;
            if (colon == arg0) {
                arg0 = 0;
                ip = 0;
            } else {
                int len = colon - arg0;
                if (len >= 256) {
                    FUN_02000edc(DAT_020feaf4, DAT_020feb14, DAT_020fead0, 0x81);
                }
                FUN_020014d4(buf, arg0, len);
                buf[len] = 0;
                arg0 = buf;
            }
            for (p = colon + 1; *p != 0; p++) {
                if (!isdigit_020d51c0(*p)) {
                    return 0;
                }
            }
            val = FUN_02005898(colon + 1);
            if (val < 0 || val > 0xffff) {
                return 0;
            }
            port = (unsigned short)val;
        }
        if (arg0 != 0) {
            ip = FUN_020c7590(arg0);
            if (ip == 0xffffffffu) {
                void *he = FUN_0202820c(arg0);
                if (he == 0) {
                    return 0;
                }
                ip = ***(unsigned int ***)((char *)he + 0xc);
            }
        }
    }
    if (arg1 != 0) {
        *arg1 = ip;
    }
    if (arg2 != 0) {
        *arg2 = port;
    }
    return 1;
}
