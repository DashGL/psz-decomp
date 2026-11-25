// FUN_02045fd8 @ 0x02045fd8 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch11-manifest.json; original draft retained for referenced provenance.
// FUN_02045fd8 @ 0x02045fd8 (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 13.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b13/02045fd8.txt.
 */
extern void *DAT_02108c84;
extern void FUN_02033f30(void *,unsigned int,unsigned int);
void FUN_02045fd8(unsigned short *s,unsigned int value) { void *p=DAT_02108c84; if(p && *s!=0xffff && value!=0xffff) FUN_02033f30(p,*s,value); }
