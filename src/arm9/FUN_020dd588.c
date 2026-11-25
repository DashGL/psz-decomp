// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x58, exact bytes and relocation targets.
// flags: -O4,s
typedef struct {
    int f0;
    int f4[3];
    int f10[3];
    int f1c;
    int f20;
    int f24;
    int f28[5];
    int f3c;
} Obj;
extern void FUN_020656b8(Obj *, int, int);
extern void FUN_020dd5e0(int *);
extern void FUN_020dd2e0(int *, int);
extern void FUN_0205fdd8(void *, unsigned int);
extern int FUN_0205fea4(void *, Obj *, int);
void FUN_020dd588(Obj *a, int b) {
    char ctx[0x400];
    FUN_020656b8(a, 0, 0x40);
    a->f0 = 0x40;
    a->f1c = 0;
    a->f24 = b;
    FUN_020dd5e0(a->f4);
    FUN_020dd2e0(a->f10, 0);
    FUN_0205fdd8(ctx, 0xedb88320u);
    a->f3c = FUN_0205fea4(ctx, a, 0x3c);
    a->f20 |= 1;
}
