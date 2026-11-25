// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa0, exact bytes and relocation targets.
struct S0213e788 {
    void *arr[2];
    void *sub;
    void *task;
    int f10;
    short f14;
    signed char f16;
    signed char f17;
};

extern void *FUN_overlay_15__021366c4(int, int);
extern void *FUN_overlay_15__02135b14(int, int, int);
extern void FUN_overlay_15__02135a10(void *, int, int);
extern void FUN_overlay_15__02124f28(int);
extern void *FUN_overlay_15__021373d8(int, void (*)(void), int, int);
extern void FUN_overlay_15__02124f88(void);

extern struct S0213e788 *data_0213e788;
extern unsigned char data_02139da4[];
extern unsigned char data_02139d88[];

void FUN_overlay_15__02124df4(int idx) {
    int count = data_02139da4[idx];
    int i;

    data_0213e788 = (struct S0213e788 *)FUN_overlay_15__021366c4(0x1c, 4);
    data_0213e788->f16 = -2;
    data_0213e788->f17 = idx;
    for (i = 0; i < count; i++) {
        data_0213e788->arr[i] = FUN_overlay_15__02135b14(0, data_02139d88[idx * 2 + i], 1);
        FUN_overlay_15__02135a10(data_0213e788->arr[i], -1, 1);
    }
    data_0213e788->sub = FUN_overlay_15__02135b14(0, 1, 1);
    FUN_overlay_15__02135a10(data_0213e788->sub, -1, 1);
    FUN_overlay_15__02124f28(0xc0);
    data_0213e788->task = FUN_overlay_15__021373d8(0, FUN_overlay_15__02124f88, 0, 0x78);
}
