// FUN_020cae6c @ 0x020cae6c (Thumb)
// flags: -O4,p
/* USA ROM reconstruction, 2026-11-06.
 * Remove two kinds of peer state, optionally enqueue removal text, release
 * nested resources, update the count, and notify dependent records.
 * Preserves the ROM's unusual reload after clearing peer+0x0c: at 020cafe0
 * it reads [0+0x38]. Integer-address accesses retain this without fabricating
 * a null guard or retaining a freed pointer instead.
 */
typedef unsigned int u32;
extern char UNK_020fd244[],UNK_020fd284[],UNK_020fd0d4[],UNK_020fd290[],UNK_020fd0f8[],UNK_020fd2a0[],UNK_020fd2ac[],UNK_020fd0b8[],UNK_020fd2b8[];
extern int FUN_020cf7a8(void *,int,u32 *),FUN_020cfa00(u32);
extern void FUN_020d1b74(void *,void *),FUN_020cb184(void *,void *,void *),FUN_020cb1a0(void *,void *,int),FUN_02000edc(void *,void *,void *,int),FUN_020c7bec(u32),FUN_020cf8a0(void *,u32),FUN_020cf928(void *,void (*)(void),int),FUN_020c6de0(u32),FUN_020cae44(void);
#define W(a,o) (*(u32 *)((u32)(a)+(o)))
int FUN_020cae6c(void *owner,int id,int send){
 u32 peer,manager=*(u32 *)owner;int index;
 if(!FUN_020cf7a8(owner,id,&peer)){FUN_020d1b74(owner,UNK_020fd244);return 2;}
 if(send==1){
  FUN_020cb184(owner,(void *)(manager+0x210),UNK_020fd284);FUN_020cb184(owner,(void *)(manager+0x210),UNK_020fd0d4);
  FUN_020cb1a0(owner,(void *)(manager+0x210),W(manager,0x198));FUN_020cb184(owner,(void *)(manager+0x210),UNK_020fd290);
  FUN_020cb1a0(owner,(void *)(manager+0x210),W(peer,0));FUN_020cb184(owner,(void *)(manager+0x210),UNK_020fd0f8);
 }
 if(W(peer,8)){
  index=W(W(peer,8),0);if(index<0)FUN_02000edc(UNK_020fd2a0,UNK_020fd2ac,UNK_020fd0b8,0x399);
  FUN_020c7bec(W(W(peer,8),8));W(W(peer,8),8)=0;FUN_020c7bec(W(W(peer,8),12));W(W(peer,8),12)=0;
  FUN_020c7bec(W(peer,8));W(peer,8)=0;
  if(FUN_020cfa00(peer))FUN_020cf8a0(owner,peer);
  --W(manager,0x5d0);if((int)W(manager,0x5d0)<0)FUN_02000edc(UNK_020fd2b8,UNK_020fd2ac,UNK_020fd0b8,0x3a0);
  FUN_020cf928(owner,FUN_020cae44,index);
 }
 if(W(peer,12)){
  index=W(W(peer,12),0);if(index<0)FUN_02000edc(UNK_020fd2a0,UNK_020fd2ac,UNK_020fd0b8,0x3aa);
  FUN_020c7bec(W(W(peer,12),8));W(W(peer,12),8)=0;FUN_020c7bec(W(W(peer,12),12));W(W(peer,12),12)=0;
  FUN_020c7bec(W(W(peer,12),16));W(W(peer,12),16)=0;FUN_020c7bec(W(W(peer,12),20));W(W(peer,12),20)=0;
  FUN_020c7bec(W(peer,12));W(peer,12)=0;
  if(W(W(peer,12),0x38)){FUN_020c6de0(W(W(peer,12),0x38));W(W(peer,12),0x38)=0;}
  if(FUN_020cfa00(peer))FUN_020cf8a0(owner,peer);
  --W(manager,0x5d0);if((int)W(manager,0x5d0)<0)FUN_02000edc(UNK_020fd2b8,UNK_020fd2ac,UNK_020fd0b8,0x3b9);
  FUN_020cf928(owner,FUN_020cae44,index);
 }
 return 0;
}
