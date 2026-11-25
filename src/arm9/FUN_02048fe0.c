// FUN_02048fe0 @ 0x02048fe0 (0x58, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch10-manifest.json; original draft retained for referenced provenance.
// FUN_02048fe0 @ 0x02048fe0 (inventory code 0x54, thumb)
// check: 2.0/sp2p3 target=0x58 candidate=0x58 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 38.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b38/02048fe0.txt.
 */
extern void FUN_0204adbc(void *);extern void FUN_0204b130(void *);
void *FUN_02048fe0(char *s){*(unsigned int *)s=0x020f9074;if(*(void **)(s+0x114)){FUN_0204adbc(*(void **)(s+0x114));*(void **)(s+0x114)=0;}if(*(void **)(s+0x110)){FUN_0204adbc(*(void **)(s+0x110));*(void **)(s+0x110)=0;}if(*(void **)(s+0x10c)){FUN_0204adbc(*(void **)(s+0x10c));*(void **)(s+0x10c)=0;}FUN_0204b130(s);return s;}
