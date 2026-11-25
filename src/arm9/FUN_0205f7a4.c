// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x40, exact bytes and relocation targets.
// Match recovery 2026-11-12: typed nonoverlapping global fields retain
// ROM literal-base addressing and original load/store widths. Field offsets
// are established by the existing dereferences, with explicit padding.
extern struct { unsigned int field_0; } DAT_020f96e4;
extern struct { unsigned char pad_0[24]; unsigned int field_18; } DAT_021125b8;
// FUN_0205f7a4 @ 0x0205f7a4 (inventory code 0x38, arm)
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 219.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b219/0205f7a4.txt.
 */
extern void FUN_02065010(unsigned int),FUN_0205dc78(unsigned int);void FUN_0205f7a4(void){unsigned int channel=DAT_020f96e4.field_0;if(channel!=~0u)FUN_02065010(channel);FUN_0205dc78(DAT_021125b8.field_18);DAT_021125b8.field_18=0;}
