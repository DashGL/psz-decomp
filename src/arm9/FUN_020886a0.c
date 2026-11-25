// FUN_020886a0 @ 0x020886a0 (inventory code 0xea, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Construct predicate-driven object and resolve its spatial index.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020886a0.txt.
 */
typedef struct{int x,y,z;} Vec;extern char UNK_020fa9c4[];extern void FUN_0203020c(void *,void *,int),FUN_020306e4(void *,void *,int,int),FUN_020308b0(void *,int),FUN_02035128(void *,int);extern char *FUN_02030540(void *);extern void *FUN_02034b78(void);extern int FUN_02044c84(void *,void *,void *,int),FUN_020350d0(void *,void *);char *FUN_020886a0(char *s,void *input){char *component;void *manager;int query[9];Vec position;int angle;FUN_0203020c(s,input,11);*(void **)s=UNK_020fa9c4;*(void **)(s+48)=**(void ***)(s+4);FUN_020306e4(s+52,*(char **)(s+48)+16,1,1);FUN_020306e4(s+60,*(char **)(s+48)+24,1,0);FUN_020306e4(s+68,*(char **)(s+48),0,0);FUN_020306e4(s+76,*(char **)(s+48)+8,0,0);s[84]=0;*(int *)(s+88)=-1;s[84]=*(signed char *)(*(char **)(s+48)+32);if(*(signed char *)(s+84)==0){FUN_020308b0(s+68,0);FUN_020308b0(s+76,0);}else if(*(signed char *)(s+84)==1){FUN_020308b0(s+68,1);FUN_020308b0(s+76,1);}component=FUN_02030540(s);if(component){angle=*(unsigned short *)(s+44);position=*(Vec *)(s+28);if(FUN_02044c84(query,component+12,&position,angle)){manager=FUN_02034b78();if(manager){*(int *)(s+88)=FUN_020350d0(manager,query);FUN_02035128(manager,*(int *)(s+88));}}}return s;}
