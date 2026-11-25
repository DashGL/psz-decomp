// FUN_020beccc @ 0x020beccc (0x50, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch05.json; original draft retained for referenced provenance.
// FUN_020beccc @ 0x020beccc (inventory code 0x4c, thumb)
// check: 2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Allocate pooled operation, configure arguments and register handle.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020beccc.txt.
 */
extern void *FUN_020bf12c(void),*FUN_020bf244(void *);extern void FUN_020bf3ac(void *,int,int,int,int);extern int FUN_020bef44(void *,void *);int FUN_020beccc(char *s,int a,int b,int c,int d){int handle=-1;void *p=FUN_020bf244(FUN_020bf12c());if(p){FUN_020bf3ac(p,a,b,c,d);handle=FUN_020bef44(s,p);if(handle!=-1)(*(int *)(s+2404))++;}return handle;}
