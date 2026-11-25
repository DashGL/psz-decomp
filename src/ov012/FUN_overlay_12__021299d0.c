// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xfc, exact bytes and relocation targets.
// Scope evidence: all plain-C residual bytes are receiver-first virtual dispatch
// at 0x2129a0a, verified against this function ROM extent.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
//cpp
class Scope_overlay_12__021299d0 {public: virtual void unused0(void);virtual void unused1(void);virtual void unused2(void);virtual void unused3(void);virtual void unused4(void);virtual void unused5(void);virtual void unused6(void);virtual void unused7(void);virtual int invoke(void);};
// flags: -O4,s
extern "C" void FUN_overlay_12__02133744(void *,int),FUN_overlay_12__02131f88(void *),FUN_overlay_12__0212a788(void);
extern "C" int FUN_overlay_12__02134888(void),FUN_02086150(int),FUN_020bbf94(int);
extern "C" void FUN_020c193c(int,int,int,int,int);
extern "C" void FUN_overlay_12__021299d0(int *self)
{
    int old,i;
    if(self[16]!=1||!self[9])return;
    if(self[25]){
        if(self[23])FUN_overlay_12__02133744((void *)self[6],2);
        self[16]=2;FUN_overlay_12__02131f88(self);return;
    }
    if(FUN_overlay_12__02134888()){((Scope_overlay_12__021299d0 *)self)->invoke();return;}
    old=self[18];self[18]=0;
    for(i=0;i<4;i++)if(self[19+i]){if(!FUN_02086150(i))self[19+i]=0;else self[18]++;}
    if(old!=self[18])self[24]=1;
    if(self[26]){self[26]=0;FUN_overlay_12__0212a788();}
    if(self[18]>0){
        if(FUN_020bbf94(128)){FUN_020c193c(0,2,0,0,-1);self[17]++;}
        else if(FUN_020bbf94(64)){FUN_020c193c(0,2,0,0,-1);self[17]--;}
        if(self[17]>=self[18])self[17]=0;else if(self[17]<0)self[17]=self[18]-1;
    }else self[17]=0;
}
