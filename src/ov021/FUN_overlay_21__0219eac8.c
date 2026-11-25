// flags: -O4,s
// check: vers=2.0/sp2p3 target=0x190 candidate=0x198 words=999 exact_bytes=999 bad_relocs=0
// near: ndiff=999/100 size=0x190 vers=2.0/sp2p3 next="turn-state switch layout and angle register allocation"
// Accelerating turn state, persistent turning effect, and recovery completion.
typedef struct {int x,y,z;} Vec3;
extern void *DAT_0211a5d4;
extern void FUN_02095ee8(void *,unsigned short);
extern int FUN_02074e9c(void *,int,int,int);
extern void *FUN_02075040(void *,int);
extern void FUN_020c1d7c(int,int,int,int,int);
extern void FUN_overlay_21__02199100(void *,int);
extern void FUN_0204b4d4(void *);
extern void FUN_02037924(void *);
#define I(p,o) (*(int *)((char *)(p)+(o)))
#define H(p,o) (*(unsigned short *)((char *)(p)+(o)))
#define P(p,o) (*(void **)((char *)(p)+(o)))
#define V(p,o) (*(Vec3 *)((char *)(p)+(o)))
void FUN_overlay_21__0219eac8(void *self)
{
    void *actor=P(self,4),*effect;
    unsigned short yaw,other,diff;
    int done;
    Vec3 position;
    switch(I(self,0xc)){
    case 1:
        if(I(P(self,0x14),0x194)==5)I(self,0xc)=2;
        break;
    case 2:
        yaw=*(volatile unsigned short *)((char *)actor+0x108);other=H(actor,0x140);done=0;
        diff=(unsigned short)((I(self,0x1c)<<13)-yaw);
        if(diff>=0x8000)diff=(unsigned short)(0x10000-diff);
        if(H(self,0x10)<0x200)H(self,0x10)+=0x11;
        if(diff<H(self,0x10))done=1;else diff=H(self,0x10);
        if(I(actor,0xe8)==1)diff=(unsigned short)(0x10000-diff);
        yaw=(unsigned short)(yaw+diff);other=(unsigned short)(other+diff);
        H(actor,0x140)=other;
        if(DAT_0211a5d4)FUN_02095ee8(DAT_0211a5d4,other);
        H(actor,0x108)=yaw;
        if(I(self,0x18)==-1){
            if(I(actor,0xe8)==1)I(self,0x18)=FUN_02074e9c(actor,10,0,0);
            else I(self,0x18)=FUN_02074e9c(actor,11,0,0);
            position=V(actor,0xfc);
            effect=FUN_02075040(actor,I(self,0x18));
            if(effect){V(effect,0x5c)=position;I(effect,0xe4)|=2;I(effect,0xe4)|=4;}
        }
        FUN_020c1d7c(26,13,0,0,4);
        if(done){
            I(self,0xc)=3;FUN_overlay_21__02199100(actor,6);
            if(I(self,0x18)!=-1){effect=FUN_02075040(actor,I(self,0x18));if(effect){I(effect,0xe4)|=8;FUN_0204b4d4(effect);}}
        }
        break;
    case 3:
        if(I(P(self,0x14),0x194)==0)FUN_02037924(P(self,8));
        break;
    case 0:FUN_02037924(P(self,8));break;
    }
}
