// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x4c, exact bytes and relocation targets.
// Verified canonical full extent 0x4c, exact bytes and relocation targets.
// Actual ROM semantic correction: notes/sessions/continue-low-import-corrections-20261112.md
// flags: -noThumb

typedef struct {
    char pad[0x24];
    int b0 : 1;
    int b1 : 1;
    char pad2[0x18];
    int shift;
    int val;
} S_0200e51c;
extern void FUN_02069678(int, int, int, int);
extern int FUN_02069e58(void);
extern void FUN_02069c30(int);
extern void FUN_02069dec(int);

void FUN_0200e51c(S_0200e51c *a0) {
    if (!a0->b1) {
        return;
    }
    FUN_02069678(a0->val, 0, 1 << a0->shift, 0);
    int v = FUN_02069e58();
    FUN_02069c30(1);
    FUN_02069dec(v);
}
