// FUN_02092700 @ 0x02092700 (0x42, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_02092700 @ 0x02092700 (inventory code 0x42, thumb)
// check: 2.0/sp2p3 target=0x42 candidate=0x42 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy value-passed vector and scalar parameters into state.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02092700.txt.
 */
typedef struct {int x,y,z;} V;typedef struct {V v;unsigned short a;int b,c,d,e,f,g,h;unsigned short i;} Params;void FUN_02092700(char *s,Params p){*(V *)(s+32)=p.v;*(unsigned short *)(s+44)=p.a;*(int *)(s+48)=p.b;*(int *)(s+52)=p.c;*(int *)(s+56)=p.d;*(int *)(s+60)=p.e;*(int *)(s+64)=p.f;*(int *)(s+68)=p.g;*(int *)(s+72)=p.h;*(unsigned short *)(s+76)=p.i;}
