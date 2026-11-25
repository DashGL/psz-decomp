// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x2e, exact bytes and relocation targets.
// FUN_0209c774 @ 0x0209c774
// check: 2.0/sp2p3 target=0x2e candidate=0x2e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Test signed flag byte in valid player row or fallback prefix.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209c774.txt.
 */
int FUN_0209c774(char *self,int index,int field) { if(index>=0 && index<4) return *(signed char *)(self+28*index+8+field)!=0; return *(signed char *)(self+field)!=0; }
