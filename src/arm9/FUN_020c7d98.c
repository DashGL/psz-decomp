// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0xbc, exact bytes and relocation targets; argument/return contract corrected.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xbc, exact bytes and relocation targets.
// flags: -O4,p

struct StateC7D98 {
    int f0;
    int f4;
    unsigned char pad[0x4c];
    unsigned int f54;
    int f58;
};

extern struct StateC7D98 DAT_0211cf6c;
extern int FUN_020c7694(int);
extern int FUN_020c750c(int, void *, int, int, void *, int *);
extern int FUN_020c7d1c(void *, int, void *, unsigned int *);
extern void FUN_020c7478(int);
extern unsigned int FUN_020c7824(void);
extern void FUN_020c7c48(void);

int FUN_020c7d98(void) {
    unsigned char buf[0x40];
    unsigned char sp10[8];
    int sp0c = 8;
    unsigned int sp08;

    if (DAT_0211cf6c.f4 == -1) {
        DAT_0211cf6c.f0 = 1;
        return 1;
    }
    if (FUN_020c7694(DAT_0211cf6c.f4) != 0) {
        int n = FUN_020c750c(DAT_0211cf6c.f4, buf, 0x40, 0, sp10, &sp0c);
        if (FUN_020c7d1c(buf, n, sp10, &sp08) == 0) {
            FUN_020c7478(DAT_0211cf6c.f4);
            if (sp08 & 1) {
                DAT_0211cf6c.f0 = 2;
            } else if (sp08 & 2) {
                DAT_0211cf6c.f0 = 3;
            } else {
                DAT_0211cf6c.f0 = 1;
            }
            return DAT_0211cf6c.f0;
        }
    }
    if (FUN_020c7824() > DAT_0211cf6c.f54 + 0x7d0) {
        if (DAT_0211cf6c.f58 == 1) {
            FUN_020c7478(DAT_0211cf6c.f4);
            DAT_0211cf6c.f0 = 1;
            return 1;
        }
        FUN_020c7c48();
        DAT_0211cf6c.f58++;
    }
    return 0;
}
