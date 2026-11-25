// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x30, exact bytes and relocation targets.
// Evidence: notes/sessions/matching-upper-continue-2026-11-12.md
//cpp
struct Actor_0209882c {
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
virtual int ready();
};
extern "C" {
// FUN_0209882c @ 0x0209882c (inventory code 0x30, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve active player, check virtual predicate then reset action state.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209882c.txt.
 */
extern void *FUN_0208555c(int); extern int FUN_0203ae60(void *); extern void FUN_020946a0(void *); void FUN_0209882c(int *self) { void *p=FUN_0208555c(self[0]); if(p && !FUN_0203ae60(p) && ((Actor_0209882c *)p)->ready()) { FUN_020946a0(p); self[1]=0; } }

}
