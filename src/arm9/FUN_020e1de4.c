// FUN_020e1de4 @ 0x020e1de4 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch41-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern void FUN_020e204c(void);
extern void FUN_020e20c8(void (*)(void),int);
extern int **D_0211de44;
void FUN_020e1de4(void){FUN_020e20c8(FUN_020e204c,0);(&D_0211de44)[1][1]=1;(&D_0211de44)[1][12]=0;}
