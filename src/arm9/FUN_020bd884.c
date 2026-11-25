// FUN_020bd884 @ 0x020bd884 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch12.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern void FUN_020bd834(void);
extern int FUN_020e354c(void (*)(void),int);
extern void FUN_020bddd8(void *,int);
int FUN_020bd884(signed char *self){int r=0;if(self[0x1c]==6){r=FUN_020e354c(FUN_020bd834,r);FUN_020bddd8(self,1);}return r;}
