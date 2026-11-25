// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0xda, exact bytes and relocation targets.
// FUN_020a360c @ 0x020a360c (inventory code 0xda, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Update timed object state transitions and associated sounds.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a360c.txt.
 */
typedef struct{int x,y,z;} Vec;extern void FUN_02033658(int,int,void *),FUN_02099f50(void *),FUN_0203041c(void *);extern int FUN_02033704(void);void FUN_020a360c(char *s){Vec b,a;if(*(unsigned char *)(s+46)==2){if(!*(signed char *)(*(char **)(s+72)+33)){(*(int *)(s+328))++;if(*(int *)(s+328)>30*(4-*(signed char *)(*(char **)(s+72)+34))&&!(*(int *)(s+324)&1)){b=*(Vec *)(s+28);FUN_02033658(4,11,&b);*(int *)(s+324)|=1;}}if(!FUN_02033704())FUN_02099f50(s+76);}else if(*(unsigned char *)(s+46)==3){if(!*(signed char *)(*(char **)(s+72)+33)){(*(int *)(s+328))++;if(*(int *)(s+328)>30*(4-*(signed char *)(*(char **)(s+72)+34))&&(*(int *)(s+324)&1)){a=*(Vec *)(s+28);FUN_02033658(4,11,&a);*(int *)(s+324)&=~1;}}}FUN_0203041c(s);}
