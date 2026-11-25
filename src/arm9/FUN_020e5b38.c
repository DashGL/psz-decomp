// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0xa8, exact bytes and relocation targets; argument/return contract corrected.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa8, exact bytes and relocation targets.
// flags: -O4,p
struct S18_hdr {
    unsigned char b[5];
};
extern struct S18_hdr DAT_0210183c;
extern void FUN_0206552c(const void *, void *, unsigned int);
extern char *FUN_020e961c(void);
extern int FUN_020d514c(int, int, int);
extern int FUN_020d8a48(int, int, int, void *, int);

int FUN_020e5b38(unsigned char param_1, int param_2, int param_3, const void *param_4, unsigned int param_5) {
    unsigned char pkt[0x94];
    int i;
    int res;
    if (param_5 > 0x20) {
        param_5 = 0x20;
    }
    if (param_4 != 0 && param_5 != 0) {
        FUN_0206552c(param_4, pkt + 0x14, param_5 << 2);
    } else {
        param_5 = 0;
    }
    {
        struct S18_hdr *dst = (struct S18_hdr *)(volatile unsigned int)pkt;
        const struct S18_hdr *src = (const struct S18_hdr *)(volatile unsigned int)&DAT_0210183c;
        *dst = *src;
    }
    *(int *)(pkt + 4) = 3;
    pkt[8] = param_1;
    pkt[9] = (unsigned char)(param_5 << 2);
    *(unsigned short *)(pkt + 0xa) = *(unsigned short *)(FUN_020e961c() + 0x1a);
    *(int *)(pkt + 0xc) = *(int *)(FUN_020e961c() + 0x1c);
    *(int *)(pkt + 0x10) = *(int *)(FUN_020e961c() + 0x200);
    for (i = 0; i < 5; i++) {
        char *ctx = FUN_020e961c();
        int r1 = FUN_020d514c(param_2, 0, 0);
        res = FUN_020d8a48(*(int *)(ctx + 0xe4), r1, param_3, pkt, pkt[9] + 0x14);
        if (res == 0 || res != 2) {
            break;
        }
    }
    return res;
}
