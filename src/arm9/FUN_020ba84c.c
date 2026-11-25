// FUN_020ba84c @ 0x020ba84c (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch13.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern int FUN_020683d4(void);
extern void FUN_020683e8(int);
extern unsigned int D_0211b28c[];
extern unsigned int FUN_020121dc(unsigned int,void *);
void FUN_020ba84c(void *a0){int s=FUN_020683d4();if(a0)FUN_020121dc(D_0211b28c[3],a0);FUN_020683e8(s);}
