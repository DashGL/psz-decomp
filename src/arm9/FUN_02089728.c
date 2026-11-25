// FUN_02089728 @ 0x02089728 (thumb)
// check: 2.0/sp2p3 target=0x200 candidate=0x1f8 words=999 exact_bytes=999 bad_relocs=0
// near: ndiff=999/128 size=0x200 vers=2.0/sp2p3 next="register coloring, local aggregate layout and instruction scheduling; displaced reloc diagnostics require recheck after layout match"
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Draw five item-stat comparisons with labels and colored numeric deltas. */
typedef struct{unsigned short a,b,c,d;int x,y;} R356;
typedef struct{unsigned short label,pad;int x,y;} L356;
typedef struct{L356 row[5];} LT356;
typedef struct{int n[5];} IT356;
typedef struct{int n[4];} Item356;
extern const LT356 DAT_020f400c;
extern const IT356 DAT_020f3f10;
extern void *FUN_02086e3c(void),*FUN_020b07b0(void *),*FUN_02077f3c(void);
extern int FUN_02087138(void *),FUN_02079114(void),FUN_02078038(void *),FUN_02089928(void *,int);
extern void FUN_02071d0c(void *),FUN_0208971c(void *,void *),FUN_020c32b4(void *,int),FUN_02079160(int,void *,unsigned,int,int,int,int,int,int);
void FUN_02089728(char *s){
 LT356 labels;IT356 indices;Item356 item;R356 label,separator,leftmark,rightmark;int pos[2],i,font,index,oldvalue,newvalue,color;
 labels=DAT_020f400c;indices=DAT_020f3f10;
 if(!FUN_02087138(FUN_02086e3c()))return;
 item=*(Item356 *)FUN_020b07b0(FUN_02086e3c());FUN_02071d0c(&label);font=FUN_02079114();font=(int)(volatile int)font;
 for(i=0;i<5;i++){
 label.a=((volatile L356 *)labels.row)[i].label;FUN_0208971c(&label.x,&labels.row[i].x);FUN_020c32b4(&label,*(int *)(s+32));
 pos[0]=851968;pos[1]=label.y+49152;FUN_02071d0c(&separator);separator.a=38;FUN_0208971c(&separator.x,pos);FUN_020c32b4(&separator,FUN_02078038(FUN_02077f3c()));
 index=indices.n[i];oldvalue=FUN_02089928(&item,index);newvalue=FUN_02089928(s,index);if(*(int *)(s+40))newvalue=0;
 if(((volatile int *)indices.n)[i]!=5){
 pos[0]=753664;FUN_02079160(font,pos,2,2,oldvalue,-1,-1,8,0);
 pos[0]=819200;FUN_02071d0c(&leftmark);leftmark.a=2;FUN_0208971c(&leftmark.x,pos);FUN_020c32b4(&leftmark,FUN_02078038(FUN_02077f3c()));
 pos[0]=917504;if(newvalue<oldvalue)color=4;else if(newvalue>oldvalue)color=3;else color=2;
 FUN_02079160(font,pos,(unsigned short)color,2,newvalue,-1,-1,8,0);
 pos[0]=983040;FUN_02071d0c(&rightmark);rightmark.a=2;FUN_0208971c(&rightmark.x,pos);FUN_020c32b4(&rightmark,FUN_02078038(FUN_02077f3c()));
 }else{
 pos[0]=782336;FUN_02079160(font,pos,2,2,oldvalue,-1,-1,8,0);
 pos[0]=946176;if(newvalue<oldvalue)color=4;else if(newvalue>oldvalue)color=3;else color=2;
 FUN_02079160(font,pos,(unsigned short)color,2,newvalue,-1,-1,8,0);
 }
 }
}
