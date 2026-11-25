// FUN_020b00ac @ 0x020b00ac (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_020b00ac @ 0x020b00ac (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve sixteen-byte indexed record or initialize and return fallback.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b00ac.txt.
 */
extern void FUN_0203955c(void *); void *FUN_020b00ac(char *self,int index) { if(index>=0 && index<*(short *)(self+8)) return *(char **)(self+4)+16*index; FUN_0203955c((void *)0x0211aa34); return (void *)0x0211aa34; }
