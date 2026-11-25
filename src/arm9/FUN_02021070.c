// FUN_02021070 @ 0x02021070 (0x28, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch23-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern int D_02107054[];
extern void FUN_02066b00(int);
extern void FUN_02066c68(int);
void FUN_02021070(void){int v=D_02107054[9];if(!v)FUN_02066b00(v);else FUN_02066c68(v);}
