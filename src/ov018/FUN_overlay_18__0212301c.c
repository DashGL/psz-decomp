// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xd4, exact bytes and relocation targets.
// flags: -O4,s
// FUN_overlay_18__0212301c @ 0x0212301c, extent 0xd4.
// Build descriptor from two UTF16 records, four flags and eight selector bytes;
// create a display object if absent, otherwise refresh the existing object.
typedef struct { unsigned short v[8]; } Text;
typedef struct {Text a,b;signed char flags[4];unsigned char select[8];unsigned char tail[56];} Desc;
extern void *FUN_020c4434(void *);
extern void *FUN_overlay_18__02122e20(void *,const void *);
extern void *FUN_02078dac(void *,int,int);
extern void *FUN_020afe98(void *,int);
extern void FUN_02078f48(void *,int,void *),FUN_02078f88(void *,int);
extern void FUN_overlay_18__021231fc(void *),FUN_020381d0(void *,void *);
void FUN_overlay_18__0212301c(void **self,Desc *in){
 Desc d;
 FUN_020c4434(&d.a);FUN_020c4434(&d.b);
 FUN_overlay_18__02122e20(d.select,in->select);
 d.a=in->a;d.b=in->b;
 d.flags[0]=in->flags[0];d.flags[1]=in->flags[1];d.flags[2]=in->flags[2];d.flags[3]=in->flags[3];
 if(!self[5]){
 self[5]=FUN_02078dac(&d,0,1);
 ((unsigned *)self)[12]|=1;
 FUN_02078f48(self[5],0,FUN_020afe98((void *)0x0211a9c4,in->select[0]*2));
 FUN_02078f48(self[5],1,FUN_020afe98((void *)0x0211a9c4,in->select[0]*2+1));
 FUN_02078f88(self[5],0);FUN_overlay_18__021231fc(self);
 }else{FUN_020381d0(self[5],&d);FUN_02078f88(self[5],0);FUN_overlay_18__021231fc(self);}
}
