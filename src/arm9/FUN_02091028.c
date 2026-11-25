// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x18, exact bytes and relocation targets.
// FUN_02091028 @ 0x02091028 (inventory code 0xe, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Allocate from indexed size table using default heap selector.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02091028.txt.
 */
extern char G_020F4410[];
extern void *FUN_020c1a78(unsigned int,int); void *FUN_02091028(void *unused,unsigned int index) { return FUN_020c1a78(((unsigned int *)G_020F4410)[index],-1); }
