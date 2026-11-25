// FUN_020de2d0 @ 0x020de2d0 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch37-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern char * volatile D_0211dbd8[];
extern void FUN_0206719c(void *);
extern void FUN_02067220(void *);
void FUN_020de2d0(int a0){FUN_0206719c(D_0211dbd8[2]+0x13d8);*(int *)(D_0211dbd8[2]+0x1004)=a0;FUN_02067220(D_0211dbd8[2]+0x13d8);}
