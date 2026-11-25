// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x30, exact bytes and relocation targets.
// FUN_0208558c @ 0x0208558c
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve child pointer when slot valid and state differs from one.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208558c.txt.
 */
void *FUN_0208558c(int index) { char *p=*(char **)0x0211a52c; if(p && index>=0 && index<4) { int offset=148*index; if((unsigned char)(p+offset)[149]!=1) return *(void **)(p+offset+140); } return 0; }
