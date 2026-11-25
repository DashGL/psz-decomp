// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x8c, exact bytes and relocation targets.
// flags: -O4,s -noThumb
struct SNDStream {
    char pad0[0x110];
    int b0 : 1;
    int b1 : 1;
    int b2 : 1;
    int b3 : 1;
    int brest : 28;
    char pad114[0x18];
    void *mem;
    char pad130[0x1c];
    struct SNDStream **handle;
    int priority;
    int f154;
    int f158;
    int f15c;
    char pad160[0x14];
};
extern struct SNDStream DAT_0210316c[];
extern void FUN_020103dc(struct SNDStream **);
extern void FUN_02010884(struct SNDStream *);
struct SNDStream *FUN_02010504(struct SNDStream **h, int idx, int prio) {
    struct SNDStream *s;
    if (*h) FUN_020103dc(h);
    s = &DAT_0210316c[idx];
    if (!s->mem) return 0;
    if (s->b0) {
        if (prio < s->priority) return 0;
        FUN_02010884(s);
    }
    s->priority = prio;
    s->b0 = 1;
    s->handle = h;
    *h = s;
    return s;
}
