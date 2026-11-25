// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x7e, exact bytes and relocation targets.
// FUN_020b737c @ 0x020b737c (inventory code 0x7e, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Sum or maximize matching equipment effects across five slots.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b737c.txt.
 */
typedef struct {unsigned char a,b,c,d;} Key;extern int FUN_020b745c(void *,int),FUN_020b68bc(void *,int),FUN_020b68d8(void *,int);extern void *FUN_020845fc(void *);int FUN_020b737c(void *s,char *slots,int effect){int sumMode=!FUN_020b745c(s,effect),total=0,j,value;unsigned int i;Key key;void *data;for(i=0;i<5;i++){key=*(Key *)(slots+16*i);data=FUN_020845fc(&key);if(data)for(j=0;j<3;j++){int cur=FUN_020b68bc(data,j);if(cur==effect){if(sumMode)total+=FUN_020b68d8(data,j);else{value=FUN_020b68d8(data,j);if(total<value)total=value;}}}}return total;}
