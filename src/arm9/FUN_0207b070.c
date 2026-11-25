// FUN_0207b070 @ 0x0207b070 (0xf6, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch24-manifest.json; original draft retained for referenced provenance.
// FUN_0207b070 @ 0x0207b070 (inventory code 0xf6, thumb)
// check: 2.0/sp2p3 target=0xf6 candidate=0xf6 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Update projectile collision and emit a periodic secondary effect.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207b070.txt.
 */
typedef struct{int x,y,z;} Vec;extern int FUN_0207a5dc(void *),FUN_0204771c(void *),FUN_0204770c(void *),FUN_02034b8c(void *,int);extern void *FUN_020be450(void);extern void FUN_020bf680(void *,void *,int),FUN_020be5d4(void *,int,int,void *),FUN_02047ae8(void *),FUN_0204a9cc(void *),FUN_0203666c(void *),FUN_02046d94(void *,int,int),FUN_02035408(void *,int,int,int),FUN_0206e728(void *,void (*)(void *)),FUN_0206e738(void *,void *),FUN_0207e42c(void *);int FUN_0207b070(char *s){int result,point[2],desc[13],effect[25];result=FUN_0207a5dc(s);if(!result&&FUN_0204771c(s)){if(*(int *)(s+376)!=-1){point[0]=*(int *)(s+92);point[1]=*(int *)(s+100);FUN_020bf680(s+288,point,*(int *)(s+300));FUN_020be5d4(FUN_020be450(),*(int *)(s+376),0,s+288);FUN_02047ae8(desc);desc[0]=*(int *)(s+232);desc[1]=*(int *)(s+376);desc[2]=*(int *)(s+96);desc[3]=*(int *)(s+256);desc[4]=*(int *)(s+228);desc[5]=3;desc[6]=6;FUN_0204a9cc(desc);if((*(int *)(s+228)&4096)&&!FUN_02034b8c(s+92,256))return 1;}++*(int *)(s+380);if(*(int *)(s+380)>*(int *)(s+384)){FUN_0203666c(effect);*(Vec *)((char *)effect+32)=*(Vec *)(s+92);effect[21]=32;effect[22]=*(int *)(s+232);FUN_02046d94(effect,*(int *)(s+280),0);*(int *)(s+380)=0;}}return result;}
