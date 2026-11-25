// FUN_02085f8c @ 0x02085f8c (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch08.json; original draft retained for referenced provenance.
// FUN_02085f8c @ 0x02085f8c (inventory code 0x38, thumb)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Register player fields then publish auxiliary word.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02085f8c.txt.
 */
extern void FUN_02084dac(void *,void *,void *,int,unsigned int),FUN_02078a24(int,void *);void FUN_02085f8c(char *self){if(*(void **)0x0211a52c)FUN_02084dac(self+4,self+104,self+120,*(short *)(self+140),(unsigned char)self[142]);FUN_02078a24(*(short *)(self+140),self+136);}
