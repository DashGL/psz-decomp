// FUN_overlay_12__02125e18 @ 0x02125e18 (0x74, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch26.json; original draft retained for referenced provenance.
// FUN_overlay_12__02125e18 @ 0x02125e18 (thumb)
// check: 2.0/sp2p3 target=0x74 candidate=0x74 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete menu initialization/reset and concrete helper ABI. */
extern void *FUN_overlay_12__02131d80(void *,void *,int);extern void FUN_overlay_12__02131c80(void *,int);extern int FUN_overlay_12__02131ad0(int);
#pragma thumb off
extern void *FUN_02001540(void *,int,unsigned);
#pragma thumb on
void *FUN_overlay_12__02125e18(char *s,int value){int i;FUN_overlay_12__02131d80(s,*(void **)0x0213f2dc,0);*(unsigned *)s=0x0213dd78;*(int *)(s+64)=0;*(int *)(s+84)=-1;*(int *)(s+88)=0;*(int *)(s+92)=value;*(int *)(s+96)=0;*(int *)(s+356)=-1;*(short *)(s+360)=12;*(short *)(s+362)=11;for(i=0;i<4;i++)((int *)(s+68))[i]=-1;FUN_02001540(s+100,0,256);FUN_overlay_12__02131c80((void *)0x02138134,13);*(int *)(s+356)=FUN_overlay_12__02131ad0(5);return s;}
