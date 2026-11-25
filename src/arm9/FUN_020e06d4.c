// FUN_020e06d4 @ 0x020e06d4 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch37-manifest.json; original draft retained for referenced provenance.
// FUN_020e06d4 @ 0x020e06d4 (0x34, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
extern void FUN_020dd9b8(void *);
extern int D_02101694;
extern int D_021016bc;
extern int D_021016e0;

void FUN_020e06d4(int a) {
    switch (a) {
    case 0:
        FUN_020dd9b8(&D_02101694);
        break;
    case 1:
        FUN_020dd9b8(&D_021016bc);
        break;
    case 2:
        FUN_020dd9b8(&D_021016e0);
        break;
    }
}
