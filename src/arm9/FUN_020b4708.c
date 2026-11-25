// FUN_020b4708 @ 0x020b4708 (0xc0, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch01.json; original draft retained for referenced provenance.
// FUN_020b4708 @ 0x020b4708 (inventory code 0xb8, thumb)
// check: 2.0/sp2p3 target=0xc0 candidate=0xc0 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Toggle a nearby world indicator according to player distance.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b4708.txt.
 */
typedef struct{int x,y,z;} Vec;extern char UNK_0211aa74[];extern char *UNK_02108d04;extern int FUN_020485b0(void *);extern void FUN_02048578(void *,int),FUN_02048458(void *);extern unsigned char *FUN_020b3d04(void);void FUN_020b4708(void){char *target=*(char **)(UNK_0211aa74+20);Vec a,b;int x,z,u,v;unsigned distance;if(target){if(!UNK_02108d04)return;a=*(Vec *)(target+92);b=*(Vec *)(UNK_02108d04+156);x=a.x-b.x;z=a.z-b.z;if(x<0)x*=-1;if(z<0)z*=-1;u=x>>8;v=z>>8;distance=u*u+v*v;if(x<2048&&z<2048&&distance<64){if(*(void **)(UNK_0211aa74+8)&&!FUN_020485b0(*(void **)(UNK_0211aa74+8))&&FUN_020b3d04()[12]==255){FUN_02048578(*(void **)(UNK_0211aa74+8),1);FUN_02048458(*(void **)(UNK_0211aa74+8));}}else if(*(void **)(UNK_0211aa74+8))FUN_02048578(*(void **)(UNK_0211aa74+8),0);}else if(*(void **)(UNK_0211aa74+8))FUN_02048578(*(void **)(UNK_0211aa74+8),0);}
