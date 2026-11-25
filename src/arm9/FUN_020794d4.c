// Helper classes scoped to this function; machine code and relocations rechecked 2026-11-12.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x2e, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x2e candidate=0x2e words=0 exact_bytes=0 bad_relocs=0
//cpp
// FUN_020794d4 @ 0x020794d4 (inventory code 0x2e, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reset two fields, copy three halfwords and restore word, then virtual refresh.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020794d4.txt.
 */
extern "C" void FUN_020794c4(void *,void *);
struct O_FUN_020794d4 {  virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); };
extern "C" void FUN_020794d4(O_FUN_020794d4 *o) { char *self=(char *)o; *(unsigned int *)(self+136)=0; *(unsigned int *)(self+140)=0; FUN_020794c4(self+128,self+144); *(unsigned int *)(self+124)=*(unsigned int *)(self+152); o->v30(); }
