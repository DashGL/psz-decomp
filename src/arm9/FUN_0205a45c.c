// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x50, exact bytes and relocation targets.
// Match recovery 2026-11-12: typed nonoverlapping global fields retain
// ROM literal-base addressing and original load/store widths. Field offsets
// are established by the existing dereferences, with explicit padding.
extern struct { unsigned char pad_0[4]; unsigned int field_4; } DAT_02112524;
// FUN_0205a45c @ 0x0205a45c (inventory code 0x48, arm)
// check: 2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 222.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b222/0205a45c.txt.
 */
extern unsigned int FUN_020683d4(void),FUN_020683e8(unsigned int);extern int FUN_02059afc(void *),FUN_02059b98(void *);unsigned int FUN_0205a45c(unsigned int replacement){unsigned int irq=FUN_020683d4(),old=DAT_02112524.field_4;int paused=FUN_02059afc((void *)0x0211253c);DAT_02112524.field_4=replacement;if(paused)FUN_02059b98((void *)0x0211253c);FUN_020683e8(irq);return old;}
