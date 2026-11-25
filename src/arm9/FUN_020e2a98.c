// FUN_020e2a98 @ 0x020e2a98 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch41-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern int *D_0211de50[];
extern long long FUN_02067e0c(void);
void FUN_020e2a98(void){int *p=D_0211de50[3];if(p){p[2]=0;*(long long *)&D_0211de50[3][3]=FUN_02067e0c();}}
