// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x18, exact bytes and relocation targets.
// Match recovery 2026-11-12: express global addresses from ROM literal-pool
// bases as relocatable symbols, preserving original base+field addressing.
extern unsigned char DAT_021125b8[];
// FUN_0205f728 @ 0x0205f728 (inventory code 0x14, arm)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 91.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b91/0205f728.txt.
 */
extern unsigned int FUN_0205ddd8(void);void FUN_0205f728(void){*(unsigned int *)((unsigned int)DAT_021125b8 + 24u)=FUN_0205ddd8();}
