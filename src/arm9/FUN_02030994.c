// FUN_02030994 @ 0x02030994 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch19-manifest.json; original draft retained for referenced provenance.
// FUN_02030994 @ 0x02030994 (inventory code 0x24, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 15.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b15/02030994.txt.
 */
extern void *FUN_020ba894(unsigned int); extern void *FUN_020309e0(void *);
void FUN_02030994(void) { char *base=(char *)0x02108c50; if(!*(void **)(base+4)) { void *p=FUN_020ba894(8); if(p) p=FUN_020309e0(p); *(void **)(base+4)=p; } *base=0; }
