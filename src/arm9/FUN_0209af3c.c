// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x28, exact bytes and relocation targets.
// FUN_0209af3c @ 0x0209af3c
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Return valid two-slot count only while singleton ready.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209af3c.txt.
 */
extern int FUN_0209aeec(void); unsigned int FUN_0209af3c(int index) { if(FUN_0209aeec() && index>=0 && index<2) { unsigned int *p=*(unsigned int **)0x0211a61c; return (p+index)[4]; } return 0; }
