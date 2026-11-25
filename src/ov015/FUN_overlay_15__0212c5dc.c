// flags: -O4,s
struct Obj {
    unsigned int f0;
    unsigned int *reg;
    unsigned char pad[0xc];
    unsigned char idx;
};
extern struct Obj *DAT_0213e864;
extern unsigned char DAT_0213a384[];
void FUN_overlay_15__0212c5dc(void) {
    struct Obj *o = DAT_0213e864;
    int idx = o->idx;
    unsigned int v;
    unsigned int *dst;
    if (idx > 3) {
        idx = 3;
    }
    v = ((unsigned int)DAT_0213a384[idx * 3 + 2] << 23) >> 7;
    dst = o->reg;
    *dst = v | ((*dst & 0xfe00ff00u) | 0x28u);
}
