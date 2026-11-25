// FUN_0209297c @ 0x0209297c (0x94, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch02.json; original draft retained for referenced provenance.
// FUN_0209297c @ 0x0209297c (inventory code 0x94, thumb)
// check: 2.0/sp2p3 target=0x94 candidate=0x94 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Advance object position and age-dependent collision state.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209297c.txt.
 */
typedef struct {int x,y,z;} V;extern void FUN_02030658(void *,void *),FUN_020304c8(void *,void *,unsigned short),FUN_02044c34(void *,void *,unsigned short),FUN_02099f50(void *),FUN_0203041c(void *);void FUN_0209297c(char *s){V v;if((unsigned char)s[46]==1){v=*(V *)(s+28);v.x+=*(int *)(s+292);v.y+=*(int *)(s+296);v.z+=*(int *)(s+300);FUN_02030658(s,&v);FUN_020304c8(s,&v,*(unsigned short *)(s+44));++*(unsigned int *)(s+308);if(*(unsigned int *)(s+308)>60)*(int *)(s+304)|=2;FUN_02044c34(s+72,&v,*(unsigned short *)(s+44));if(*(unsigned int *)(s+308)>2)FUN_02099f50(s+72);}FUN_0203041c(s);}
