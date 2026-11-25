// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x2c, exact bytes and relocation targets.
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
void FUN_02010590(struct SNDStream *s) {
    if (s->handle) {
        *s->handle = 0;
        s->handle = 0;
    }
    s->b0 = 0;
    s->b2 = 0;
    s->b1 = 0;
}
