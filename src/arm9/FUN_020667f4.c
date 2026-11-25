// FUN_020667f4 @ 0x020667f4 (0x20, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch32-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern int FUN_020683d4(void);
extern void FUN_02066814(int,int);
extern int D_0211817c[];
void FUN_020667f4(void){FUN_020683d4();FUN_02066814(D_0211817c[10],0);}
