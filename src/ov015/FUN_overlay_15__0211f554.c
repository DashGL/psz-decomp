// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0xa0, exact bytes and relocation targets; argument/return contract corrected.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa0, exact bytes and relocation targets.
extern unsigned short FUN_overlay_15__021207dc(unsigned short);
extern int FUN_overlay_15__0211f84c(void *);
extern int FUN_overlay_15__0211f5f4(int, void *, int *, void *);
extern int FUN_overlay_15__0211f6d0(int, void *, int *, void *);
extern int FUN_overlay_15__0211f7a8(int, void *, int *, void *);

int FUN_overlay_15__0211f554(int state, unsigned char *pkt, int *err_cnt, void *ctx, int unused_socket) {
    unsigned char *hdr = pkt + 0xc;

    if (FUN_overlay_15__021207dc(*(unsigned short *)(pkt + 0xc)) < 1) {
        (*err_cnt)++;
        return state;
    }
    if (hdr[0xf] != 0x11) {
        (*err_cnt)++;
        return state;
    }
    if (FUN_overlay_15__0211f84c(pkt + 0xc) > 0) {
        (*err_cnt)++;
        return state;
    }
    switch (FUN_overlay_15__021207dc(*(unsigned short *)(hdr + 6))) {
    case 0x1010:
        state = FUN_overlay_15__0211f5f4(state, pkt, err_cnt, ctx);
        break;
    case 0x2010:
        state = FUN_overlay_15__0211f6d0(state, pkt, err_cnt, ctx);
        break;
    case 0x3010:
        state = FUN_overlay_15__0211f7a8(state, pkt, err_cnt, ctx);
        break;
    }
    return state;
}
