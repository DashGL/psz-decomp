// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x80, exact bytes and relocation targets.
struct S0213e8d8 {
    int f0;
    int f4;
    void *arr[5];
    unsigned char idx;
};

struct Pair {
    unsigned short x;
    unsigned short y;
};

extern int FUN_overlay_15__0213587c(void *, int);
extern void FUN_overlay_15__02135aac(int, int, int);
extern void FUN_overlay_15__0213596c(void *, int, int, int);
extern void FUN_overlay_15__02135a10(void *, int, int);

extern struct S0213e8d8 *data_0213e8d8;
extern unsigned char data_0213a762[][2];
extern unsigned char data_0213a74e[][2];
extern struct Pair data_0213a7c8[][2];

void FUN_overlay_15__0213338c(int slot) {
    int k;
    int v = FUN_overlay_15__0213587c(data_0213e8d8->arr[slot], 0);
    FUN_overlay_15__02135aac(0, data_0213a762[data_0213e8d8->idx][slot] + 1, v);
    k = data_0213a74e[data_0213e8d8->idx][slot];
    FUN_overlay_15__0213596c(
        data_0213e8d8->arr[slot],
        -1,
        data_0213a7c8[data_0213e8d8->idx][k].x,
        data_0213a7c8[data_0213e8d8->idx][k].y
    );
    FUN_overlay_15__02135a10(data_0213e8d8->arr[slot], -1, 0);
}
