// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa2, exact bytes and relocation targets.
struct Hdr {
    unsigned char pad[0x10];
    unsigned char data[8];
};

extern int FUN_overlay_15__0211f984(void *, void *);
extern unsigned short FUN_overlay_15__021207dc(unsigned short);
extern unsigned int FUN_overlay_15__021207b4(unsigned int);
extern void FUN_overlay_15__0211f204(int);

int FUN_overlay_15__0211f7a8(int state, unsigned char *pkt, int *err_cnt, unsigned char *ctx) {
    unsigned char *sub;

    if (state != 2) {
        (*err_cnt)++;
        return state;
    }
    sub = pkt + 0x24;
    if (FUN_overlay_15__0211f984(ctx + 0x10, ((struct Hdr *)(pkt + 0xc))->data) < 0) {
        (*err_cnt)++;
        return state;
    }
    if (sub[0] != 7) {
        (*err_cnt)++;
        return state;
    }
    if (FUN_overlay_15__021207dc(*(unsigned short *)(sub + 2)) == 0) {
        (*err_cnt)++;
        return state;
    }
    if (FUN_overlay_15__021207b4(*(unsigned int *)(sub + 4)) == 0) {
        return 100;
    }
    if (FUN_overlay_15__021207b4(*(unsigned int *)(sub + 4)) == -2) {
        FUN_overlay_15__0211f204(0x14);
        return -1;
    }
    if (FUN_overlay_15__021207b4(*(unsigned int *)(sub + 4)) == -3) {
        FUN_overlay_15__0211f204(0x15);
        return -1;
    }
    FUN_overlay_15__0211f204(0x18);
    return -1;
}
