// FUN_0204c7ac @ 0x0204c7ac (0x36, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch09-manifest.json; original draft retained for referenced provenance.
// FUN_0204c7ac @ 0x0204c7ac (inventory code 0x36, thumb)
// check: 2.0/sp2p3 target=0x36 candidate=0x36 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 28.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b28/0204c7ac.txt.
 */
extern void *FUN_0204225c(void *,int); extern unsigned int FUN_02046bc8(void *); extern void FUN_02046b94(void *,unsigned int); extern void FUN_02046bec(void *);
void FUN_0204c7ac(char *s) { void *p=*(void **)(s+0x30); if(p) { p=FUN_0204225c(p,0); if(p) { FUN_02046b94(p,FUN_02046bc8(p)-1); FUN_02046bec(p); *(unsigned int *)(s+0x100)&=~2u; } } }
