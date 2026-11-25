// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x20, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// FUN_0205dac0 @ 0x0205dac0 (inventory code 0x18, arm)
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 106.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b106/0205dac0.txt.
 */
extern unsigned short D_0211259c;
extern void FUN_0205cfdc(unsigned int);void FUN_0205dac0(unsigned int mask){D_0211259c|=mask;FUN_0205cfdc(mask);}
