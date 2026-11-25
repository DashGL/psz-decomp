// FUN_020bd3a0 @ 0x020bd3a0 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch08.json; original draft retained for referenced provenance.
// FUN_020bd3a0 @ 0x020bd3a0 (inventory code 0x38, thumb)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Count record bytes and send to enabled remote peers.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bd3a0.txt.
 */
extern int FUN_020e98e0(unsigned int,void *,int);void FUN_020bd3a0(char *self,unsigned char *record){int bytes=record[0]*4,i;*(int *)(self+20)+=bytes;for(i=0;i<4;i++)if(i!=((signed char *)self)[3865] && ((signed char *)self)[12+i]==1)FUN_020e98e0((unsigned char)i,record,bytes);}
