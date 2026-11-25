// FUN_020bced4 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_020bced4 @ 0x020bced4 (thumb)
// check: 2.0/sp2p3 target=0x208 candidate=0x208 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Build session manager and its 64 records.
 * Three inputs: receiver, byte mode, initial limit. Full pool-inclusive 0x208. */
extern char UNK_020fc9f4[];extern void *UNK_0211b3bc[];
extern void *FUN_020bcdb4(void *),*FUN_020ba8bc(unsigned int,unsigned int),*FUN_020ba894(unsigned int),*FUN_020c133c(void *,unsigned int),*FUN_020bceb4(void *);
extern void FUN_0200c938(void *,unsigned int),FUN_020c4434(void *),FUN_020656b8(void *,int,unsigned int),FUN_020ba8c4(void *),FUN_020c5b1c(int),FUN_020c5cec(int),FUN_020be3a8(void),FUN_020bd1e8(void *),FUN_020c0c18(void);
extern int FUN_020bce84(void *),FUN_020bce98(void *),FUN_020dd154(void *),FUN_02035b60(int);
extern void *FUN_020bd2d4(void *,unsigned int,int);extern void FUN_020bd2fc(void *,void *);
extern void FUN_020e05a0(void *(*)(void *,unsigned int,int),void (*)(void *,void *));
extern void *FUN_0200c2dc(unsigned int,unsigned int,unsigned int,void *(*)(void *),void (*)(void *));
void *FUN_020bced4(char *s,int mode,int limit){
 int i,random;void *buffer,*heap;
 FUN_020bcdb4(s);*(void **)s=UNK_020fc9f4;s[28]=0;s[29]=0;FUN_0200c938(s+32,16);
 *(int *)(s+48)=limit;*(int *)(s+52)=251;*(int *)(s+72)=0;*(int *)(s+76)=0;*(int *)(s+80)=0;
 *(int *)(s+3784)=-1;FUN_020c4434(s+3840);FUN_020656b8(s+3840,0,20);
 *(int *)(s+3860)=0;s[3864]=mode;s[3865]=-1;s[3866]=0;*(int *)(s+3868)=0;
 *(int *)(s+3888)=1;*(int *)(s+3892)=0;*(int *)(s+3896)=0;*(int *)(s+3900)=1021;
 *(int *)(s+3904)=0;*(int *)(s+3908)=0;*(int *)(s+3912)=0;*(int *)(s+3916)=0;*(int *)(s+3920)=0;*(int *)(s+3924)=0;
 *(int *)(s+3928)=-1;s[3932]=-1;*(short *)(s+3934)=0;*(int *)(s+3936)=0;
 UNK_0211b3bc[2]=s;FUN_020656b8(s+84,0,3600);FUN_020656b8(s+3684,0,100);FUN_020656b8(s+3788,0,52);
 *(int *)(s+52)=FUN_020bce84(0)* *(int *)(s+52);
 buffer=FUN_020ba8bc(1792,32);*(int *)(s+3892)=FUN_020dd154(buffer);FUN_020ba8c4(buffer);
 *(int *)(s+3900)-=FUN_020bce98(0)?0:15;FUN_020c5b1c(0);
 heap=FUN_020ba894(32);if(heap)heap=FUN_020c133c(heap,240640);*(void **)(s+3896)=heap;
 FUN_020e05a0(FUN_020bd2d4,FUN_020bd2fc);random=FUN_02035b60(255)+1;FUN_020c5cec(0);
 *(int *)(s+3924)=17119*random;if((*(int *)(s+4)+1)&1)FUN_020be3a8();
 for(i=0;i<4;i++){((int *)(s+32))[i]=0;((int *)(s+56))[i]=0;}
 *(void **)(s+3920)=FUN_0200c2dc(64,24,0,FUN_020bceb4,0);FUN_020bd1e8(s);
 random=FUN_02035b60(255)+1;*(int *)(s+3924)+=random*(FUN_020bce84(0)?23161:23148);
 FUN_020c0c18();return s;
}
