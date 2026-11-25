// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1c, exact bytes and relocation targets.
//cpp
// FUN_020b7934 @ 0x020b7934
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern "C" {
extern void FUN_02040a34(void *);
struct Obj_020b7934 {
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
};
void *FUN_020b7934(Obj_020b7934 *self) { *(unsigned int *)self=0x020fc7d8; self->v29(); FUN_02040a34(self); return self; }
}
