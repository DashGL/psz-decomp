// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x90, exact bytes and relocation targets.
struct S0213e784 {
    void *task;
    unsigned int *obj;
    unsigned char idx;
};

extern void *FUN_overlay_15__021366c4(int, int);
extern unsigned int *FUN_overlay_15__02135af8(int, int);
extern void *FUN_overlay_15__021373d8(int, void (*)(void), int, int);
extern void FUN_overlay_15__02124d68(void);

extern struct S0213e784 *data_0213e784;
extern unsigned char data_02139d74[];

void FUN_overlay_15__02124cb0(int idx) {
    unsigned int *obj;

    data_0213e784 = (struct S0213e784 *)FUN_overlay_15__021366c4(0xc, 4);
    data_0213e784->idx = idx;
    data_0213e784->obj = FUN_overlay_15__02135af8(0, 0x47);
    *((unsigned short *)data_0213e784->obj + 2) = (*((unsigned short *)data_0213e784->obj + 2) & ~0xc00) | 0x400;
    obj = data_0213e784->obj;
    obj[0] &= ~0xc00;
    *((unsigned short *)obj + 2) = (*((unsigned short *)obj + 2) & ~0xf000) | (data_02139d74[idx] << 12);
    data_0213e784->obj[0] = (data_0213e784->obj[0] & 0xfe00ff00) | 0x00e6008b;
    data_0213e784->task = FUN_overlay_15__021373d8(1, FUN_overlay_15__02124d68, 0, 0x78);
}
