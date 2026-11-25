// FUN_02072b08 @ 0x02072b08 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch06-manifest.json; original draft retained for referenced provenance.
// FUN_02072b08 @ 0x02072b08 (inventory code 0x22, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize receiver words and two globals in target order.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02072b08.txt.
 */
void *FUN_02072b08(int *self) { self[0]=0; self[1]=-1; self[2]=-1; self[3]=-1; self[4]=1; self[5]=0; self[6]=-1; self[7]=0; self[8]=0; *(int *)0x020f9aa8=-1; *(int *)0x0211a200=0; return self; }
