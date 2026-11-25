// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x8c, exact bytes and relocation targets.
// flags: -O4,p
typedef struct {
    char pad[0x7c];
    unsigned int f7c;
} G_b7b04;
extern void FUN_0205c318(int, int, int, int, int, int, int, void *);
extern void FUN_02034680(void *, void *);
extern void FUN_0205ba00(void *, void *, void *, void *);
extern char DAT_02105724[];
extern int DAT_020fc794[4];
extern G_b7b04 DAT_0210579c;
extern char DAT_0210595c[];
extern char DAT_02105968[];
extern char DAT_02105974[];
extern char DAT_02105768[];
void FUN_020b7b04(char *a) {
    FUN_0205c318(DAT_020fc794[3], DAT_020fc794[2], DAT_020fc794[1], DAT_020fc794[0], 0x1000, 0x4b << 14, 0x1000, DAT_02105724);
    DAT_0210579c.f7c &= ~0x50u;
    FUN_02034680(DAT_0210595c, a + 0x18);
    FUN_02034680(DAT_02105968, a + 0x30);
    FUN_02034680(DAT_02105974, a + 0x24);
    FUN_0205ba00(a + 0x18, a + 0x30, a + 0x24, DAT_02105768);
    DAT_0210579c.f7c &= ~0xe8u;
}
