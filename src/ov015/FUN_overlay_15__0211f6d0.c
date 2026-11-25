// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xd8, exact bytes and relocation targets.
struct S0213c2c0 {
    unsigned char pad[0x2c];
    unsigned int f2c;
    unsigned int f30;
};

extern int FUN_overlay_15__0211f984(void *, void *);
extern unsigned short FUN_overlay_15__021207dc(unsigned short);
extern unsigned int FUN_overlay_15__021207b4(unsigned int);
extern void FUN_overlay_15__0211f204(int);
extern void FUN_overlay_15__021206d0(void *, int, int);
extern int FUN_overlay_15__0211fcec(int, void *, int, void *, void *);

extern unsigned char data_0213c980[];
extern unsigned char data_0213c300[];
extern struct S0213c2c0 data_0213c2c0;

int FUN_overlay_15__0211f6d0(int state, unsigned char *pkt, int *err_cnt, unsigned char *ctx) {
    unsigned char *hdr;
    unsigned char *sub;

    if (state != 1) {
        (*err_cnt)++;
        return state;
    }
    hdr = pkt + 0xc;
    sub = pkt + 0x24;
    if (FUN_overlay_15__0211f984(ctx + 8, hdr + 0x10) < 0) {
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
    FUN_overlay_15__021206d0(data_0213c980, 0, 0x6a0);
    if (FUN_overlay_15__0211fcec(0, sub, FUN_overlay_15__021207dc(*(unsigned short *)(hdr + 0xa)), data_0213c980, data_0213c300) < 0) {
        (*err_cnt)++;
        return state;
    }
    if ((data_0213c2c0.f30 & data_0213c2c0.f2c) == 0) {
        return state;
    }
    *err_cnt = 0;
    return 2;
}
