// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x58, exact bytes and relocation targets.
// flags: -O4,p -noThumb
typedef struct {
    char pad[0x54];
    void * volatile f54;
} State;
extern State D_02107054;
extern void FUN_020216b8(int, int, int, int, int, int);
extern int FUN_020669c8(void *);
extern void FUN_02066a94(void *);
void FUN_020218ac(int a, int b, int c, int d) {
    FUN_020216b8(a, b, c, d, 0, 0);
    if (D_02107054.f54 == 0) {
        return;
    }
    if (FUN_020669c8(D_02107054.f54) != 0) {
        return;
    }
    FUN_02066a94(D_02107054.f54);
}
