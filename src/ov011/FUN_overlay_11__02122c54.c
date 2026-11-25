// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xd6, exact bytes and relocation targets.
// flags: -O4,s
// FUN_overlay_11__02122c54 @ 0x02122c54, true extent 0xd6.
// Build descriptor from two UTF16 records, four flags and eight selector bytes;
// create a display object if absent, otherwise refresh the existing object.
typedef struct { unsigned short v[8]; } Text;
typedef struct {Text a,b;signed char flags[4];unsigned char select[8];unsigned char tail[56];} Desc;
extern void *FUN_020c4434(void *);
extern void *FUN_overlay_11__02122a4c(void *,const void *);
extern void *FUN_02078dac(void *,int,int);
extern void *FUN_020afe98(void *,int);
extern void FUN_02078f48(void *,int,void *),FUN_02078f88(void *,int);
extern void FUN_overlay_11__02122e94(void *),FUN_020381d0(void *,void *);
extern void FUN_overlay_11__02122ec0(void *,int);
extern int FUN_020424b4(void *,int);
extern void FUN_0204248c(void *,int,int);
void FUN_overlay_11__02122c54(void **self,Desc *in){
 Desc d;
 FUN_020c4434(&d.a);FUN_020c4434(&d.b);
 FUN_overlay_11__02122a4c(d.select,in->select);
 d.a=in->a;d.b=in->b;
 d.flags[0]=in->flags[0];d.flags[1]=in->flags[1];d.flags[2]=in->flags[2];d.flags[3]=in->flags[3];
 if(!self[5]){
 self[5]=FUN_02078dac(&d,0,1);
 ((unsigned *)self)[12]|=1;
 FUN_overlay_11__02122ec0(self,in->select[0]);
 FUN_02078f88(self[5],0);FUN_overlay_11__02122e94(self);
 }else{
 int state=*(int *)((char *)self[5]+0xf8);
 void *object=*(void **)((char *)self[5]+0x8c);
 int value=0;
 if(object) value=FUN_020424b4(object,0);
 FUN_020381d0(self[5],&d);
 FUN_02078f88(self[5],state);
 object=*(void **)((char *)self[5]+0x8c);
 if(object)FUN_0204248c(object,0,value);
 FUN_overlay_11__02122e94(self);
 }
}
