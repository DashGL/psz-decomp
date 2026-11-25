// FUN_020be2f4 @ 0x020be2f4 (0xe, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_020be2f4 @ 0x020be2f4 (inventory code 0xe, thumb)
// check: 2.0/sp2p3 target=0xe candidate=0xe words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Move current signed byte to previous when incoming state differs.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020be2f4.txt.
 */
void FUN_020be2f4(signed char *self,int state) { int old=self[0]; if(old!=state) { self[1]=old; self[0]=state; } }
