// FUN_0207f960 @ 0x0207f960 (0x6e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch24-manifest.json; original draft retained for referenced provenance.
// FUN_0207f960 @ 0x0207f960 (inventory code 0x6e, thumb)
// check: 2.0/sp2p3 target=0x6e candidate=0x6e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Apply valid primary descriptor and two signed secondary parameters.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207f960.txt.
 */
extern void FUN_0207f4d4(void *);extern int FUN_0207f7a4(void *,int,int);void FUN_0207f960(char *s,signed char *d){int type=d[0],level=d[1],i;if(type>=0 && type<6 && level>0 && level<=5){FUN_0207f4d4(s+4);*(int *)(s+4)=type;*(int *)(s+16)=d[1];*(int *)(s+12)=*(int *)(d+4);*(int *)(s+8)=FUN_0207f7a4(s,*(int *)(s+4),*(int *)(s+16));}for(i=0;i<2;i++){int *out=(int *)(s+20+8*i);signed char *in=d+8+8*i;int value=in[0];if((value>0 && value<=5)||(value<0 && value>=-5)){out[0]=0;out[1]=value;out[0]=*(int *)(in+4);}}}
