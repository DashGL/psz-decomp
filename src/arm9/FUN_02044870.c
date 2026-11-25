// FUN_02044870 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_02044870 @ 0x02044870 (inventory code 0x5e, thumb)
// check: 2.0/sp2p3 target=0x64 candidate=0x64 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 116.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b116/02044870.txt.
 */
typedef struct{unsigned int w[3];} V;extern void FUN_020c0488(void *),FUN_020c0484(void *,int),FUN_0200c938(void *,int),FUN_020be4f8(void *,unsigned int,int);extern int FUN_02044c84(void *,void *,void *,unsigned int),FUN_02044bd4(void *,void *,void *,void *);extern void *FUN_020be450(void);void FUN_02044870(char *s,unsigned int arg){unsigned int buffer[13],data[2];V v;FUN_020c0488(buffer);if(FUN_02044c84(buffer+3,s+4,s+16,*(unsigned short *)(s+28))){FUN_020c0484(buffer,16);v=*(V *)0x020ed564;FUN_0200c938(data,8);data[1]=arg;if(FUN_02044bd4(s,buffer,&v,data))FUN_020be4f8(FUN_020be450(),*(unsigned int *)s,1);}}
