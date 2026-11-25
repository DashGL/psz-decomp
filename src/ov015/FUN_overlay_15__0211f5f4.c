// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xdc, exact bytes and relocation targets.
extern int FUN_overlay_15__0211f984(void *, void *);
extern unsigned short FUN_overlay_15__021207dc(unsigned short);
extern unsigned int FUN_overlay_15__021207b4(unsigned int);
extern void FUN_overlay_15__0211f204(int);
extern int FUN_overlay_15__0211f9d0(void *, void *);
extern unsigned int FUN_overlay_15__0211fdfc(unsigned short);

extern unsigned char data_0213c300[];
extern unsigned int data_0213c2c0;

int FUN_overlay_15__0211f5f4(int state, unsigned char *pkt, int *err_cnt, unsigned char *ctx) {
    unsigned char *hdr;
    unsigned char *sub;
    int res;

    if (state != 0) {
        (*err_cnt)++;
        return state;
    }
    hdr = pkt + 0xc;
    sub = pkt + 0x24;
    if (FUN_overlay_15__0211f984(ctx, hdr + 0x10) < 0) {
        (*err_cnt)++;
        return state;
    }
    if (FUN_overlay_15__021207dc(*(unsigned short *)(sub + 2)) == 0) {
        (*err_cnt)++;
        return state;
    }
    if (sub[0] == 7) {
        if (FUN_overlay_15__021207b4(*(unsigned int *)(sub + 4)) == -2) {
            FUN_overlay_15__0211f204(0x14);
        } else if (FUN_overlay_15__021207b4(*(unsigned int *)(sub + 4)) == -3) {
            FUN_overlay_15__0211f204(0x15);
        } else {
            FUN_overlay_15__0211f204(0x18);
        }
        return -1;
    }
    if (sub[0] != 1) {
        (*err_cnt)++;
        return state;
    }
    res = FUN_overlay_15__0211f9d0(sub + 4, data_0213c300);
    if (res < 0) {
        if (res == -2) {
            FUN_overlay_15__0211f204(0x16);
            return -1;
        }
        (*err_cnt)++;
        return state;
    }
    data_0213c2c0 = FUN_overlay_15__0211fdfc(FUN_overlay_15__021207dc(*(unsigned short *)(hdr + 0xc)));
    *err_cnt = 0;
    return 1;
}
