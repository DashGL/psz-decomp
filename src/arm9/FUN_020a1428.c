// FUN_020a1428 @ 0x020a1428 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch16.json; original draft retained for referenced provenance.
// FUN_020a1428 @ 0x020a1428 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Increment selected signed halfword counter while below 9999.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a1428.txt.
 */
void FUN_020a1428(char *self,unsigned int index) { if(index<1) { short *p=(short *)(self+142); if(p[index]<9999) p[index]++; } }
