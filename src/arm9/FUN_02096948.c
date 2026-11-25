// FUN_02096948 @ 0x02096948 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_02096948 @ 0x02096948 (inventory code 0xc, thumb)
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear masks and reset embedded bytes.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02096948.txt.
 */
extern void FUN_02096598(void *); void FUN_02096948(char *self) { *(unsigned short *)(self+36)=0; *(unsigned short *)(self+38)=0; FUN_02096598(self+40); }
