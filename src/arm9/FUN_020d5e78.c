// FUN_020d5e78 @ 0x020d5e78 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch41-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern int *FUN_020d5774(int);
extern int FUN_020c7478(int);
void FUN_020d5e78(int a0){int *p=FUN_020d5774(a0);if(p){if(p[0]!=-1)FUN_020c7478(p[0]);p[0]=-1;p[4]=4;}}
