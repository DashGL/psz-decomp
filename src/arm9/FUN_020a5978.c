// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
// Typed fields at actual ROM literal-pool bases retain base-relative member
// accesses and avoid address folding or field-pointer hoisting.
extern struct { unsigned char field_0; } DAT_020fc048;
extern struct { unsigned char field_0; unsigned char pad_1[7]; void * field_8; } DAT_0211a984;
// FUN_020a5978 @ 0x020a5978 (inventory code 0x2a, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Set global flags and lazily allocate message buffer.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a5978.txt.
 */
extern void *FUN_020ba894(unsigned int),*FUN_020963b0(void *); void FUN_020a5978(void) { DAT_020fc048.field_0=1; DAT_0211a984.field_0=0; if(!DAT_0211a984.field_8) { void *p=FUN_020ba894(772); if(p) p=FUN_020963b0(p); DAT_0211a984.field_8=p; } }
