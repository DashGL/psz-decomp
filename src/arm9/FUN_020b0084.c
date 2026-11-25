// FUN_020b0084 @ 0x020b0084 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_020b0084 @ 0x020b0084 (inventory code 0x24, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize live signed-count records and global fallback.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b0084.txt.
 */
extern void FUN_0203955c(void *); void FUN_020b0084(char *self) { int i; for(i=0;i<*(short *)(self+10);i++) FUN_0203955c(*(char **)(self+4)+16*i); FUN_0203955c((void *)0x0211aa34); }
