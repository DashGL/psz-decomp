// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x30, exact bytes and relocation targets.
// Match recovery 2026-11-12: express global addresses from ROM literal-pool
// bases as relocatable symbols, preserving original base+field addressing.
extern unsigned char DAT_02110b00[];
// FUN_02053494 @ 0x02053494 (inventory code 0x2c, arm)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 169.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b169/02053494.txt.
 */
extern unsigned int FUN_020683d4(void);extern void FUN_020683e8(unsigned int);unsigned int FUN_02053494(void){unsigned int saved=FUN_020683d4(),result;char *p=*(char **)((unsigned int)DAT_02110b00 + 4u);if(p)result=*(unsigned int *)(p+332);else result=0;FUN_020683e8(saved);return (unsigned short)result;}
