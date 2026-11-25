// FUN_02097820 @ 0x02097820 (0x3a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch08.json; original draft retained for referenced provenance.
// FUN_02097820 @ 0x02097820 (inventory code 0x3a, thumb)
// check: 2.0/sp2p3 target=0x3a candidate=0x3a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Draw weighted signed-halfword result from table.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02097820.txt.
 */
extern void *FUN_02099444(void);extern char *FUN_02099dac(void *,int,int,int);extern int FUN_02035b60(int);int FUN_02097820(char *self){char *table=FUN_02099dac(FUN_02099444(),*(int *)self,*(short *)(self+16),*(int *)(self+76));int value=FUN_02035b60(100),i=6;while(i>0 && value>=((signed char *)table)[4*i+2]){value-=((signed char *)table)[4*i+2];--i;}return *(short *)(table+4*i);}
