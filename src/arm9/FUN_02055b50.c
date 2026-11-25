// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x4c, exact bytes and relocation targets.
// Match recovery 2026-11-12: express global addresses from ROM literal-pool
// bases as relocatable symbols, preserving original base+field addressing.
extern unsigned char DAT_021116a0[];
// FUN_02055b50 @ 0x02055b50 (inventory code 0x48, arm)
// check: 2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 222.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b222/02055b50.txt.
 */
extern unsigned int FUN_020683d4(void),FUN_020683e8(unsigned int);extern void FUN_020669dc(void *);int FUN_02055b50(void){char *s=(char *)((unsigned int)DAT_021116a0 + 0u);unsigned int irq=FUN_020683d4();while(*(unsigned int *)(s+276)&4)FUN_020669dc(s+268);FUN_020683e8(irq);return **(int **)s==0;}
