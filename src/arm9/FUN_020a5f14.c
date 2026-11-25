// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x18, exact bytes and relocation targets.
// FUN_020a5f14 @ 0x020a5f14
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Invoke optional global object virtual slot eight.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a5f14.txt.
 */
extern void * data_0211a984[];
void FUN_020a5f14(void) { void *p=data_0211a984[1]; if(p) { void (**table)(void *)=*(void (***)(void *))p; table[2](p); } }
