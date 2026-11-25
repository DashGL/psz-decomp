// Helper classes scoped to this function; machine code and relocations rechecked 2026-11-12.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1c, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
//cpp
// FUN_020bacdc @ 0x020bacdc (inventory code 0x1c, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Invoke virtual reset if global state zero or one, else return true.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bacdc.txt.
 */
extern "C" unsigned int FUN_020bb30c(void);
struct O_FUN_020bacdc { virtual void v0(); virtual void v1(); virtual void v2(); };
extern "C" int FUN_020bacdc(O_FUN_020bacdc *self) { if(FUN_020bb30c()<=1) { self->v2(); return 0; } return 1; }
