// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x12, exact bytes and relocation targets.
//cpp
// FUN_020407b8 @ 0x020407b8
// check: 2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern "C" {
extern void FUN_020406fc(void *);
struct Obj_020407b8 {
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
};
void FUN_020407b8(Obj_020407b8 *self) { FUN_020406fc(self); self->v30(); }
}
