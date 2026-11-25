// FUN_02091d98 @ 0x02091d98 (0xe4, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch01.json; original draft retained for referenced provenance.
// FUN_02091d98 @ 0x02091d98 (inventory code 0xe0, thumb)
// check: 2.0/sp2p3 target=0xe4 candidate=0xe4 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize an extended animation object and its per-element arrays.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02091d98.txt.
 */
extern char UNK_020faf48[];extern void FUN_020918b4(void *,int,int,int,int,int);extern void *FUN_0200c2dc(int,int,int,int,int);char *FUN_02091d98(char *s,int a,int b,int c,int d,int e){FUN_020918b4(s,a,b,c,d,e);*(void **)s=UNK_020faf48;*(int *)(s+56)=0;*(int *)(s+60)=0;*(int *)(s+64)=0;*(int *)(s+68)=0;*(int *)(s+72)=0;*(int *)(s+76)=0;*(int *)(s+80)=0;*(int *)(s+84)=0;*(int *)(s+88)=0;*(int *)(s+92)=0;if(!*(int *)(s+4))*(int *)(s+52)=2;if(*(int *)(s+16)>0){*(void **)(s+56)=FUN_0200c2dc(*(int *)(s+16),12,0,0,0);*(void **)(s+72)=FUN_0200c2dc(*(int *)(s+16),4,0,0,0);*(void **)(s+76)=FUN_0200c2dc(*(int *)(s+16),4,0,0,0);*(void **)(s+80)=FUN_0200c2dc(*(int *)(s+16),4,0,0,0);*(void **)(s+84)=FUN_0200c2dc(*(int *)(s+16),4,0,0,0);*(void **)(s+88)=FUN_0200c2dc(*(int *)(s+16),4,0,0,0);*(void **)(s+92)=FUN_0200c2dc(*(int *)(s+16),4,0,0,0);*(void **)(s+60)=FUN_0200c2dc(*(int *)(s+16),12,0,0,0);*(void **)(s+64)=FUN_0200c2dc(*(int *)(s+16),12,0,0,0);*(void **)(s+68)=FUN_0200c2dc(*(int *)(s+16),12,0,0,0);}return s;}
