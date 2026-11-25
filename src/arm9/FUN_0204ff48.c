// FUN_0204ff48 @ 0x0204ff48 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch08-manifest.json; original draft retained for referenced provenance.
// FUN_0204ff48 @ 0x0204ff48 (inventory code 0x2c, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 22.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b22/0204ff48.txt.
 */
extern void *FUN_020352a4(void *,unsigned int); extern void *FUN_020352c0(void *);
void FUN_0204ff48(char *s,unsigned int id) { if(s) { if(s) { void *p=FUN_020352a4(*(void **)0x02108cf4,id); if(p) { p=FUN_020352c0(p); if(p) { unsigned int address=(unsigned int)p+0x34; if(address) *(unsigned int *)(s+0x188)=*(unsigned int *)address; } } } } }
