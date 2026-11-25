// FUN_0202fefc @ 0x0202fefc (0x20, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch21-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern int FUN_020683d4(void);
extern void FUN_020683e8(int);
extern int D_02108c10[];
void FUN_0202fefc(int a0){int s=FUN_020683d4();D_02108c10[10]=a0;FUN_020683e8(s);}
