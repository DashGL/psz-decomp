// FUN_0203522c @ 0x0203522c (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch16-manifest.json; original draft retained for referenced provenance.
// FUN_0203522c @ 0x0203522c (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 9.
 * Allocate a14-byte zeroed manager, install global pointer and return one even on failure.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b9/0203522c.txt.
 */
extern void *FUN_020ba894(unsigned int);
extern void FUN_020656b8(void *,int,unsigned int);
int FUN_0203522c(void) { void *object=FUN_020ba894(0xa14); if(object) FUN_020656b8(object,0,0xa14); *(void **)0x02108cf4=object; return 1; }
