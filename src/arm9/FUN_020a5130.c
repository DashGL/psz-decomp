// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x18, exact bytes and relocation targets.
// FUN_020a5130 @ 0x020a5130
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Run two global cleanup helpers then clear two global fields.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a5130.txt.
 */
extern unsigned int data_0211a664[];
extern void FUN_020a5f14(void),FUN_020a6804(void); void FUN_020a5130(void) { FUN_020a5f14(); FUN_020a6804(); data_0211a664[2]=0; data_0211a664[1]=0; }
