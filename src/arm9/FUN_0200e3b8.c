// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x74, exact bytes and relocation targets.
// Verified canonical full extent 0x74, exact bytes and relocation targets.
// Actual ROM semantic correction: notes/sessions/continue-low-import-corrections-20261112.md
// flags: -noThumb

typedef unsigned int u32;
extern void FUN_02069678(u32, int, int, int);
extern void FUN_0206bee8(void *);
extern void FUN_0206bf00(void *);
extern u32 FUN_02069e58(void);
extern void FUN_02069c30(int);
extern void FUN_02069dec(u32);
extern void FUN_0200e42c(void *);

struct S_0200e3b8 {
    char pad[0x24];
    int b0 : 1;
    int b1 : 1;
    char pad2[0x18];
    int f40;
    u32 f44;
};

void FUN_0200e3b8(struct S_0200e3b8 *a0) {
    if (a0->b1) {
        FUN_02069678(a0->f44, 0, 1 << a0->f40, 0);
        FUN_0206bee8((char *)a0 + 8);
        FUN_0206bf00((char *)a0 + 0x14);
        a0->b1 = 0;
        u32 v = FUN_02069e58();
        FUN_02069c30(1);
        FUN_02069dec(v);
    }
    FUN_0200e42c(a0);
}
