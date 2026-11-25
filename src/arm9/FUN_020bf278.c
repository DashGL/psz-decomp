// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x24, exact bytes and relocation targets.
// FUN_020bf278 @ 0x020bf278
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear allocation flag indexed by44-byte record offset when record nonnull.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bf278.txt.
 */
void FUN_020bf278(char *self,char *record) { if(record) { unsigned int index=((unsigned int)record-(unsigned int)(self+5184))/44; (self+5088)[index]=0; } }
