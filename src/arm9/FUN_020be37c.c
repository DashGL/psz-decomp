// FUN_020be37c @ 0x020be37c (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_020be37c @ 0x020be37c (inventory code 0x26, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Disconnect other slots and return to state four.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020be37c.txt.
 */
extern void FUN_020bdd60(void *,int),FUN_020e34fc(void); void FUN_020be37c(char *self) { int i; for(i=0;i<4;i++) if(i!=((signed char *)self)[3865]) FUN_020bdd60(self,i); FUN_020e34fc(); self[28]=4; }
