// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x80, exact bytes and relocation targets.
// FUN_020b0e34 @ 0x020b0e34 (inventory code 0x80, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Apply collision action and construct fallback effect descriptor.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b0e34.txt.
 */
typedef struct {int x,y,z;} Vec;extern int FUN_020b0c84(void *,int),FUN_02078198(int);extern void FUN_020bf73c(void *,void *),FUN_020437d8(int,int,int,int,void *),FUN_0203666c(void *),FUN_02046d94(void *,int,int);void FUN_020b0e34(char *s,char *entry,int action){int position[3];Vec v;int d[25],id,value;if(entry && FUN_020b0c84(s,*(int *)(entry+64))==1){id=*(int *)(entry+64);value=*(int *)(entry+48);FUN_020bf73c(entry+12,position);FUN_020437d8(*(int *)(s+44),action,id,value,0);if(!FUN_02078198(id)){FUN_0203666c(d);v.x=position[0];v.y=4096;v.z=position[1];*(Vec *)(d+8)=v;d[17]=1;d[18]=16;d[19]=-1;d[21]=36;d[22]=*(int *)(s+44);FUN_02046d94(d,0,0);}}}
