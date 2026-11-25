// Helper classes scoped to this function; machine code and relocations rechecked 2026-11-12.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x24, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
//cpp
// FUN_020a0744 @ 0x020a0744 (inventory code 0x1e, thumb)
// flags: -O4,s
extern "C" void FUN_02040a34(void *),FUN_020ba8ac(void *);
struct O_FUN_020a0744 {  virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); };
extern "C" void *FUN_020a0744(O_FUN_020a0744 *self) { *(unsigned int *)self=0x020fbae8; self->v25(); FUN_02040a34(self); FUN_020ba8ac(self); return self; }
