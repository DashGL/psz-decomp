// FUN_0205e8f4 @ 0x0205e8f4 (0x30, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch31-manifest.json; original draft retained for referenced provenance.
// FUN_0205e8f4 @ 0x0205e8f4 (inventory code 0x2c, arm)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 185.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b185/0205e8f4.txt.
 */
extern void FUN_0206564c(const volatile void *,void *);int FUN_0205e8f4(void *out){volatile unsigned int *p=(volatile unsigned int *)0x04000600;if(*p&0x08000000)return -1;FUN_0206564c(p+32,out);return 0;}
