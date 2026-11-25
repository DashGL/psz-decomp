// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x64, exact bytes and relocation targets.
//cpp
// FUN_overlay_12__0212d8d4 @ 0x0212d8d4
// check: 2.0/sp2p3 target=0x64 candidate=0x64 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern "C" {
extern void *FUN_overlay_12__02131d80(void *,void *,int),*FUN_overlay_12__0212d938(void *,const void *);
extern int FUN_overlay_12__0212db9c(void *),FUN_overlay_12__02131fd0(void *,int);
extern void FUN_020c193c(int,int,int,int,int);
struct Obj_0212d8d4 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
};
void *FUN_overlay_12__0212d8d4(Obj_0212d8d4 *self,void *parent,const void *record){char *s=(char *)self;FUN_overlay_12__02131d80(s,parent,0);*(unsigned *)s=0x0213e244;*(int *)(s+64)=0;*(int *)(s+68)=-1;*(int *)(s+72)=0;*(int *)(s+76)=0;*(int *)(s+80)=0;FUN_overlay_12__0212d938(s+84,record);if(!FUN_overlay_12__0212db9c(s)){*(int *)(s+64)=2;FUN_overlay_12__02131fd0(s,1);}else{self->v14();FUN_020c193c(6,7,0,0,-1);}return s;}
}
