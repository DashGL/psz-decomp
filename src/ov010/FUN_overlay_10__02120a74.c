// flags: -O4,s
struct Input {
    unsigned char pad1[0x4c];
    int count;
    unsigned char pad2[0x8];
    signed char buf[16];
};
extern void FUN_overlay_10__02120bd0(void *);
extern void FUN_overlay_10__02120f68(int);
int FUN_overlay_10__02120a74(struct Input *p, short *out) {
    if (p->count > 0) {
        p->buf[--p->count] = -1;
        FUN_overlay_10__02120bd0(p);
    } else {
        out[0] = 5;
        out[1] = 0;
        FUN_overlay_10__02120f68(0);
    }
    return 1;
}
