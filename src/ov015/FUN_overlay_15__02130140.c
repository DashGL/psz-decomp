// flags: -O4,p
struct B4 {
    unsigned char b[4];
};
struct State {
    signed char f0;
    signed char idx;
    unsigned short pad;
    void *ptr;
};
extern const struct B4 DAT_0213a578;
extern struct State DAT_0213e894;
extern void FUN_overlay_15__02131064(void *, int, int);
void FUN_overlay_15__02130140(void) {
    struct B4 table = DAT_0213a578;
    int v = table.b[DAT_0213e894.idx];
    FUN_overlay_15__02131064(DAT_0213e894.ptr, v, v);
}
