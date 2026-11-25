// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3e, exact bytes and relocation targets.
//cpp
// FUN_020accb8 @ 0x020accb8
// check: 2.0/sp2p3 target=0x3e candidate=0x3e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern "C" {
extern int FUN_0203d388(void *,int);
extern void FUN_0203d2d8(void *,void *,int),FUN_02094594(void *);
struct Obj_020accb8 {
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
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual int v49();
};
void FUN_020accb8(Obj_020accb8 *self,int mode,int arg){char *s=(char *)self;*(unsigned short *)(s+194)=FUN_0203d388(self,mode);*(unsigned short *)(s+316)=*(unsigned short *)(s+194);if(self->v49()==1)FUN_0203d2d8(self,self,arg);else FUN_02094594(self);}
}
