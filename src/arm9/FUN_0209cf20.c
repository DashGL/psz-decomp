// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x32, exact bytes and relocation targets.
// FUN_0209cf20 @ 0x0209cf20 (inventory code 0x32, thumb)
// check: 2.0/sp2p3 target=0x32 candidate=0x32 words=0 exact_bytes=0 bad_relocs=0
// Proof: notes/reference/resume2-upper-20261112/fields-9cf20-proof.json
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Construct two owned bit arrays.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209cf20.txt.
 */
extern void *FUN_020ba894(unsigned int),*FUN_0207f048(void *,unsigned int);void *FUN_0209cf20(void **self){void *p;self[0]=0;self[1]=0;p=FUN_020ba894(16);if(p)p=FUN_0207f048(p,160);self[0]=p;p=FUN_020ba894(16);if(p)p=FUN_0207f048(p,40);self[1]=p;return self;}
