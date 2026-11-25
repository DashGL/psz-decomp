// FUN_020a3b68 @ 0x020a3b68 (thumb)
// check: 2.0/sp2p3 target=0x2a8 candidate=0x2a4 words=999 exact_bytes=999 bad_relocs=0
// near: ndiff=999/170 size=0x2a8 vers=2.0/sp2p3 next="register coloring, local aggregate layout and instruction scheduling; displaced reloc diagnostics require recheck after layout match"
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Construct moving event object and optional resource display. */
typedef struct{int x,y,z;} V341;typedef struct{V341 v;unsigned short a;int b,c,d,e,f,g,h;unsigned short i;} P341;
extern void FUN_0203020c(void *,void *,int),FUN_0209a3d4(void *,int),FUN_02099ec8(void *,void *,unsigned),FUN_020306e4(void *,void *,int,int),FUN_02036848(void *,void *),FUN_020304d8(void *),FUN_020926d0(void *,void *,unsigned,int,int,int),FUN_02092700(void *,P341),FUN_0209a478(void *,int),FUN_02044c08(void *,void *,int),FUN_0209a33c(void *,int),FUN_020308b0(void *,int);
extern int FUN_0203068c(void *);extern void *FUN_02030540(void *);
void *FUN_020a3b68(char *s,void *arg){
 V341 initial,offset,position;P341 param;int index,heading;void *resource;
 FUN_0203020c(s,arg,31);FUN_0209a3d4(s+48,FUN_0203068c(s));*(unsigned *)s=0x020fbf6c;*(unsigned *)(s+48)=0x020fbf9c;*(void **)(s+72)=**(void ***)(s+4);initial=*(V341 *)(s+28);FUN_02099ec8(s+76,&initial,*(unsigned short *)(s+44));
 FUN_020306e4(s+292,*(char **)(s+72)+24,1,1);FUN_020306e4(s+300,*(char **)(s+72)+32,1,0);FUN_020306e4(s+308,*(char **)(s+72)+8,0,0);FUN_020306e4(s+316,*(char **)(s+72)+16,1,0);FUN_020306e4(s+324,*(void **)(s+72),1,1);
 *(V341 *)(s+332)=*(V341 *)0x020fc958;*(V341 *)(s+344)=*(V341 *)0x020fc958;*(short *)(s+356)=0;*(short *)(s+358)=0;*(int *)(s+360)=1;*(short *)(s+364)=0;*(int *)(s+368)=30;*(int *)(s+372)=0;*(int *)(s+376)=0;*(int *)(s+52)|=64;
 *(V341 *)(s+332)=*(V341 *)(s+28);*(short *)(s+356)=*(short *)(s+44);*(V341 *)(s+344)=*(V341 *)(s+28);index=*(unsigned short *)(s+356)>>4;offset.x=(int)(((long long)((short *)0x020ed83c)[index*2+1]*-12288+2048)>>12);offset.y=0;offset.z=(int)(((long long)((short *)0x020ed83c)[index*2]*12288+2048)>>12);FUN_02036848(s+344,&offset);
 if(((signed char *)*(void **)(s+72))[45]){*(int *)(s+360)=-1;heading=*(unsigned short *)(s+44)-((*(short *)(*(char **)(s+72)+42)<<16)/360);}else{*(int *)(s+360)=1;heading=*(unsigned short *)(s+44);}*(short *)(s+358)=heading;
 index=((signed char *)*(void **)(s+72))[44];if(index>2)*(short *)(s+364)=1456;else if(index<2)*(short *)(s+364)=364;else *(short *)(s+364)=728;
 if(((signed char *)*(void **)(s+4))[18]==1){FUN_020304d8(s);position=*(V341 *)(s+28);FUN_020926d0(&param,&position,*(unsigned short *)(s+44),FUN_0203068c(s),17,4);param.d=18;FUN_02092700(s+76,param);FUN_0209a478(s+48,((signed char *)*(void **)(s+72))[46]);resource=FUN_02030540(s);if(resource){FUN_02044c08(s+76,resource,0);FUN_0209a33c(s+76,FUN_0203068c(s));*(int *)(s+216)=20;}}
 index=((signed char *)*(void **)(s+72))[47];if(index==0)FUN_020308b0(s+308,0);else if(index==1)FUN_020308b0(s+308,1);return s;
}
