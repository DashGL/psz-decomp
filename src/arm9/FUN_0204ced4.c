// FUN_0204ced4 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_0204ced4 @ 0x0204ced4 (inventory code 0x92, thumb)
// check: 2.0/sp2p3 target=0x92 candidate=0x92 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 123.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b123/0204ced4.txt.
 */
extern void FUN_020c0488(void *),FUN_0204d204(void *,unsigned int),FUN_0204d5cc(void *);extern char *FUN_0204daa8(unsigned int);extern int FUN_0204260c(void *,int,void *,void *);void FUN_0204ced4(char *s,unsigned int id,void *obj,unsigned char *key,unsigned int fifth,unsigned int sixth,unsigned int seventh){unsigned int a[12],b[9];char *owner;*(unsigned int *)(s+4)=id;*(void **)(s+8)=obj;s[12]=key[0];s[13]=key[1];s[14]=key[2];s[15]=key[3];*(unsigned int *)(s+204)=seventh;if(*(void **)(s+8))*(unsigned int *)(*(char **)(s+8)+24)|=16;*(unsigned int *)(s+100)=0;*(unsigned int *)(s+104)=3;FUN_020c0488(s+140);*(unsigned int *)(s+192)=~0u;*(unsigned int *)(s+200)=fifth;owner=FUN_0204daa8(*(unsigned int *)(s+4));if(owner){if(*(void **)(owner+140)){FUN_0204260c(*(void **)(owner+140),8,a,b);*(unsigned int *)(s+24)=a[9];*(unsigned int *)(s+28)=a[10];*(unsigned int *)(s+32)=a[11];}*(unsigned short *)(s+60)=*(unsigned short *)(owner+192);}FUN_0204d204(s,sixth);FUN_0204d5cc(s);}
