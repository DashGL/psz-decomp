// FUN_02082ed0 @ 0x02082ed0 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_02082ed0 @ 0x02082ed0 (inventory code 0x28, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy valid indexed record or initialize destination to defaults.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02082ed0.txt.
 */
extern void FUN_02041a08(void *,void *),FUN_0206d178(void *); void FUN_02082ed0(void *dest,char *self,int index) { char *p=*(char **)(self+1260); if(p && index>=0 && index<*(int *)(self+1264)) FUN_02041a08(dest,p+52*index); else FUN_0206d178(dest); }
