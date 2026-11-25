// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xfc, exact bytes and relocation targets.
// Scope evidence: all plain-C residual bytes are receiver-first virtual dispatch
// at 0x21338c4, verified against this function ROM extent.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
//cpp
class Scope_overlay_12__0213381c {public: virtual void unused0(void);virtual void unused1(void);virtual void unused2(void);virtual void unused3(void);virtual void unused4(void);virtual void unused5(void);virtual void unused6(void);virtual void unused7(void);virtual void unused8(void);virtual void unused9(void);virtual void unused10(void);virtual void unused11(void);virtual void unused12(void);virtual void unused13(void);virtual void invoke(void);};
// FUN_overlay_12__0213381c @ 0x0213381c (thumb)
// flags: -O4,s
extern "C" void FUN_overlay_12__02131d80(void *,void *,int),FUN_0203955c(void *),FUN_overlay_12__02131fd0(void *,int),FUN_020c4434(void *);
extern "C" void *FUN_020c3564(void *),*FUN_02086e3c(void),*FUN_020ba894(unsigned),*FUN_overlay_12__021337a4(void *,const void *,int);
extern "C" int FUN_0208546c(void),FUN_020870e8(void *,void *);
extern "C" void *FUN_overlay_12__0213381c(unsigned *self,void *parent,int mode,int flag){
    unsigned player[25];
    int identity;
    void *child;
    FUN_overlay_12__02131d80(self,parent,1);
    self[0]=0x0213e92c;self[16]=0;self[17]=-1;self[18]=-1;
    FUN_020c3564(self+19);FUN_020c3564(self+34);FUN_020c3564(self+49);FUN_020c3564(self+64);
    self[83]=-1;self[84]=0;self[85]=0;self[86]=0;self[87]=0;self[88]=flag;
    self[89]=0;self[90]=0;self[91]=0;self[92]=0;self[93]=0;
    FUN_0203955c(self+79);
    if(mode==0)FUN_overlay_12__02131fd0(self,2);
    else{
        if(mode==2)self[87]=1;
        ((Scope_overlay_12__0213381c *)self)->invoke();
    }
    FUN_020c4434(player);FUN_020c4434(player+4);
    identity=FUN_0208546c();
    if(FUN_020870e8(FUN_02086e3c(),player) && identity!=-1){
        child=FUN_020ba894(108);
        if(child)child=FUN_overlay_12__021337a4(child,player,0);
        self[84]=(unsigned)child;
    }
    return self;
}
