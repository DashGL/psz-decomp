// FUN_0204d6c4 @ 0x0204d6c4 (0x44, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch08-manifest.json; original draft retained for referenced provenance.
// FUN_0204d6c4 @ 0x0204d6c4 (inventory code 0x3c, thumb)
// check: 2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 32.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b32/0204d6c4.txt.
 */
extern void FUN_0200c938(void *,int); extern void FUN_0204b050(void *,void *); extern void FUN_02041510(void *);
void *FUN_0204d6c4(char *s) { int i; *(unsigned int *)s=0x020f91b8; *(int *)(s+4)=0; FUN_0200c938(s+8,8); FUN_0204b050(s+16,(void *)0x020f8e5c); FUN_02041510(s+16); for(i=0;i<2;i++) ((int *)(s+8))[i]=0; return s; }
