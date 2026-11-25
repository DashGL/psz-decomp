// FUN_02088174 @ 0x02088174 (0xf0, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch01.json; original draft retained for referenced provenance.
// FUN_02088174 @ 0x02088174 (inventory code 0xda, thumb)
// check: 2.0/sp2p3 target=0xf0 candidate=0xf0 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Render a configured triangle with actor transform and material.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02088174.txt.
 */
typedef struct{int x,y,z;} Vec;extern int UNK_0211a534[];extern int FUN_02088264(void *,void *,void *,void *),FUN_02087f48(void *,int);extern void FUN_0205e6b0(void),FUN_0205aaa4(void *,void *),FUN_0205e550(void *),FUN_020880f4(int,int,int),FUN_02088114(int,int,int),FUN_02088134(int,int,int,int,int,int),FUN_02088158(int,int,int);void FUN_02088174(char *s){Vec a,b,c;int matrix[12],color;if(!FUN_02088264(s,&a,&b,&c))return;FUN_0205e6b0();*(volatile int *)0x04000444=0;FUN_0205aaa4(s+112,matrix);matrix[9]=*(int *)(s+92);matrix[10]=*(int *)(s+96);matrix[11]=*(int *)(s+100);FUN_0205e550(matrix);*(volatile int *)0x04000470=*(int *)(s+352);*(volatile int *)0x04000470=0;*(volatile int *)0x04000470=0;*(volatile int *)0x04000440=2;color=FUN_02087f48(s,*(int *)(s+232));FUN_020880f4(color,color,1);FUN_02088114(color,color,0);FUN_02088134(1,0,3,UNK_0211a534[1],31,0);*(volatile int *)0x04000500=0;FUN_02088158((short)a.x,(short)a.y,(short)a.z);FUN_02088158((short)b.x,(short)b.y,(short)b.z);FUN_02088158((short)c.x,(short)c.y,(short)c.z);*(volatile int *)0x04000504=0;*(volatile int *)0x04000448=1;}
