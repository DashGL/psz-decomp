// FUN_0203ae04 @ 0x0203ae04 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch14-manifest.json; original draft retained for referenced provenance.
// FUN_0203ae04 @ 0x0203ae04 (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 13.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b13/0203ae04.txt.
 */
extern unsigned short FUN_02041bb8(void *); extern void FUN_0203ad60(void *,unsigned int);
void FUN_0203ae04(char *s) { void *p=*(void **)0x02108d64; if(p) { *(unsigned short *)(s+0x14c)=FUN_02041bb8(p); FUN_0203ad60(s,*(unsigned short *)(s+0x14c)); } }
