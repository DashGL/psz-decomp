// FUN_02051420 @ 0x02051420 (0x2e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch31-manifest.json; original draft retained for referenced provenance.
// FUN_02051420 @ 0x02051420 (inventory code 0x2e, thumb)
// check: 2.0/sp2p3 target=0x2e candidate=0x2e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 23.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b23/02051420.txt.
 */
extern char *FUN_020511f4(void *,int);
unsigned int FUN_02051420(char *s,int index) { char *p=FUN_020511f4(s,index); if(p) { int group=*(short *)(p+4); char *record=*(char **)(s+8)+12*group; int offset=*(short *)(record+2); unsigned int base=(unsigned int)*(void **)(s+0x10)+((unsigned int)offset<<3); return ((unsigned int)p-base)>>3; } return ~0u; }
