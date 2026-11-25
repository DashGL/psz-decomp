// FUN_02085750 @ 0x02085750 (0x50, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch06.json; original draft retained for referenced provenance.
// FUN_02085750 @ 0x02085750 (inventory code 0x4c, thumb)
// check: 2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Count matching or fallback records that are not excluded.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02085750.txt.
 */
extern int FUN_0207f45c(void *,void *);int FUN_02085750(void *desc){int count=0,i;char *p=*(char **)0x0211a52c;if(p)for(i=0;i<4;i++){int off=148*i;if(FUN_0207f45c(p+144+off,desc) || (p=*(char **)0x0211a52c,(unsigned char)p[148+off]==3)){p=*(char **)0x0211a52c;if((unsigned char)p[149+off]!=1)count++;}}return count;}
