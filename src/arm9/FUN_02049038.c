// FUN_02049038 @ 0x02049038 (0x60, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch10-manifest.json; original draft retained for referenced provenance.
// FUN_02049038 @ 0x02049038 (inventory code 0x5a, thumb)
// check: 2.0/sp2p3 target=0x60 candidate=0x60 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 40.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b40/02049038.txt.
 */
extern void FUN_0204adbc(void *);extern void FUN_0204b130(void *);extern void FUN_020ba8ac(void *);
void *FUN_02049038(char *s){*(unsigned int *)s=0x020f9074;if(*(void **)(s+276)){FUN_0204adbc(*(void **)(s+276));*(void **)(s+276)=0;}if(*(void **)(s+272)){FUN_0204adbc(*(void **)(s+272));*(void **)(s+272)=0;}if(*(void **)(s+268)){FUN_0204adbc(*(void **)(s+268));*(void **)(s+268)=0;}FUN_0204b130(s);FUN_020ba8ac(s);return s;}
