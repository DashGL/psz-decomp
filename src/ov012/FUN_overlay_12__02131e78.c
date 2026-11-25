// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x110, exact bytes and relocation targets.
// Scope evidence: all plain-C residual bytes are receiver-first virtual dispatch
// at 0x2131e8c, verified against this function ROM extent.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
//cpp
class Scope_overlay_12__02131e78 {public: virtual void invoke0(void);virtual void invoke4(void);virtual void invoke8(void);virtual void invoke12(void);virtual void invoke16(void);virtual void invoke20(void);virtual void invoke24(void);virtual int invoke28(void);virtual int invoke32(void);virtual int invoke36(void);virtual int invoke40(void);virtual int invoke44(void);virtual int invoke48(void);virtual void invoke52(void);};
// flags: -O4,s
extern "C" int FUN_overlay_12__02131f94(void *),FUN_020c2e38(void),FUN_020bbf6c(int);
extern "C" void FUN_020c193c(int,int,int,int,int);
#define CALL_BOOL(slot) (((Scope_overlay_12__02131e78 *)self)->invoke##slot())
#define CALL_VOID(slot) (((Scope_overlay_12__02131e78 *)self)->invoke##slot())
extern "C" void FUN_overlay_12__02131e78(int *self)
{
    int active=FUN_overlay_12__02131f94(self);self[9]=active;
    if(active){
        if(!self[10])CALL_VOID(52);
        if(!FUN_020c2e38()){
            if(FUN_020bbf6c(1)&&CALL_BOOL(28)){
                if(!self[15])FUN_020c193c(0,0,0,0,-1);return;
            }
            if(FUN_020bbf6c(2)&&CALL_BOOL(32)){FUN_020c193c(0,1,0,0,-1);return;}
            if(FUN_020bbf6c(8)&&CALL_BOOL(40)){FUN_020c193c(0,1,0,0,-1);return;}
            if(FUN_020bbf6c(2048)&&CALL_BOOL(36)){FUN_020c193c(0,0,0,0,-1);return;}
        }
    }
    if(FUN_020bbf6c(256)&&CALL_BOOL(44))return;
    if(FUN_020bbf6c(512)&&CALL_BOOL(48))return;
    CALL_VOID(20);self[10]=active;
}
