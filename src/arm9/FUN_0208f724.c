// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x7c, exact bytes and relocation targets.
//cpp
// FUN_0208f724 @ 0x0208f724
// check: 2.0/sp2p3 target=0x7c candidate=0x7c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern "C" {
extern void *UNK_02108c64;extern char UNK_0211a578[];
extern void FUN_02032dfc(void *,void *),FUN_0207088c(void *,int),FUN_0208d6d0(void *,int,unsigned short,int,int,int,int);
extern int FUN_0206d36c(void *,int),FUN_0204ddd8(int,int);
struct Obj_0208f724 {
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
int FUN_0208f724(Obj_0208f724 *self,int a,int b,int c){char *s=(char *)self;int descriptor[5];if(self){FUN_02032dfc(descriptor,UNK_02108c64);if(!FUN_0206d36c(descriptor,0) && FUN_0204ddd8(*(int *)(s+252),1)){if(!self->v49())FUN_0207088c(s,a);FUN_0208d6d0(UNK_0211a578,*(int *)(s+252),*(unsigned short *)(s+318),1,a,b,c);return 1;}}return 0;}
}
