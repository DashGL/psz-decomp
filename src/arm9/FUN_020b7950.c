// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x24, exact bytes and relocation targets.
// Native evidence: notes/sessions/matching-upper-continue-2026-11-12.md
//cpp
struct Obj_020b7950 {virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void v6();virtual void v7();virtual void v8();virtual void v9();virtual void v10();virtual void v11();virtual void v12();virtual void v13();virtual void v14();virtual void v15();virtual void v16();virtual void v17();virtual void v18();virtual void v19();virtual void v20();virtual void v21();virtual void v22();virtual void v23();virtual void v24();virtual void v25();virtual void v26();virtual void v27();virtual void v28();virtual void used();};
extern "C" {
// FUN_020b7950 @ 0x020b7950 (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reset table, invoke virtual slot +74 and base cleanup, return receiver.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b7950.txt.
 */
extern void FUN_02040a34(void *),FUN_020ba8ac(void *); void *FUN_020b7950(void *self) { *(unsigned int *)self=0x020fc7d8; ((Obj_020b7950 *)self)->used(); FUN_02040a34(self); FUN_020ba8ac(self); return self; }

}
