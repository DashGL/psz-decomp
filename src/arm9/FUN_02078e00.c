#pragma thumb off
extern void FUN_0200c938(void *,unsigned int);
#pragma thumb on
// FUN_02078e00 @ 0x02078e00 (inventory code 0x90, thumb)
// check: 2.0/sp2p3 target=0x9c candidate=0x98 words=999 exact_bytes=999 bad_relocs=0
// near: ndiff=999/39 size=0x9c vers=2.0/sp2p3 next="inspect register coloring, boolean materialization and instruction scheduling; semantics reconstructed"
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Construct participant object with initialized position and registration.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02078e00.txt.
 */
extern char UNK_020fa294[],UNK_020fa2b0[];extern void FUN_020387bc(void *,void *,int,int,int,int,int),FUN_02038000(void *,int,int,int),FUN_02034680(void *,void *),FUN_02038084(void *,int),FUN_02078d74(void *,int);void *FUN_02078e00(char *s,void *source,int index,int mode){int i;char *p;FUN_020387bc(s,source,index,index,0,0,mode);*(void **)s=UNK_020fa294;*(void **)(s+32)=UNK_020fa2b0;*(int *)(s+240)=1;*(int *)(s+244)=0;*(int *)(s+248)=0;FUN_0200c938(s+252,4);for(i=0;i<2;i++)*(unsigned short *)(s+252+2*i)=0xffff;FUN_02038000(s,0,0,0);FUN_02034680(s+180,s+156);FUN_02038084(s,0);p=*(char **)(s+140);if(p)*(unsigned int *)(p+24)&=~1u;FUN_02078d74(s,index);return s;}
