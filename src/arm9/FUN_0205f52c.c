// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x48, exact bytes and relocation targets.
// Match recovery 2026-11-12: typed nonoverlapping global fields retain
// ROM literal-base addressing and original load/store widths. Field offsets
// are established by the existing dereferences, with explicit padding.
extern struct { unsigned int field_0; } DAT_020f96e4;
extern struct { unsigned char pad_0[12]; unsigned int field_c; unsigned int field_10; unsigned int field_14; } DAT_021125b8;
// FUN_0205f52c @ 0x0205f52c (inventory code 0x40, arm)
// check: 2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 219.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b219/0205f52c.txt.
 */
extern void FUN_02065010(unsigned int),FUN_0205d474(unsigned int);void FUN_0205f52c(void){unsigned int channel=DAT_020f96e4.field_0;if(channel!=~0u)FUN_02065010(channel);FUN_0205d474(DAT_021125b8.field_14);DAT_021125b8.field_14=0;DAT_021125b8.field_10=0;DAT_021125b8.field_c=0;}
