// FUN_020bb2d0 @ 0x020bb2d0 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch08.json; original draft retained for referenced provenance.
// FUN_020bb2d0 @ 0x020bb2d0 (0x3c, thumb)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
extern void FUN_020bbb18(void);
extern int D_0211b2c0[];

void FUN_020bb2d0(void) {
    switch (D_0211b2c0[0x14]) {
    case 0:
    case 1:
        break;
    case 2:
        D_0211b2c0[0x13] = 0;
        FUN_020bbb18();
        break;
    case 3:
    case 4:
        D_0211b2c0[0x14] = 2;
        D_0211b2c0[0x13] = 0;
        FUN_020bbb18();
        break;
    }
}
