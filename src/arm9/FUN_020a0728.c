// Helper classes scoped to this function; machine code and relocations rechecked 2026-11-12.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1c, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
//cpp
// FUN_020a0728 @ 0x020a0728 (inventory code 0x18, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reset vtable, call virtual slot +64, perform base cleanup, return self.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a0728.txt.
 */
extern "C" void FUN_02040a34(void *);
struct O_FUN_020a0728 {  virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); };
extern "C" void *FUN_020a0728(O_FUN_020a0728 *self) { *(unsigned int *)self=0x020fbae8; self->v25(); FUN_02040a34(self); return self; }
