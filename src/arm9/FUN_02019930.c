// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x38, exact bytes and relocation targets.
// Match recovery 2026-11-12: typed nonoverlapping global fields retain
// ROM literal-base addressing and original load/store widths. Field offsets
// are established by the existing dereferences, with explicit padding.
extern struct { unsigned char pad_0[252]; unsigned int field_fc; } DAT_0210571c;
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// USA record and vector operations; alias-sensitive load/store order retained.
extern void FUN_020198a0(void);
unsigned int FUN_02019930(void){if(!(DAT_0210571c.field_fc&128)){FUN_020198a0();DAT_0210571c.field_fc|=128;}return 0x0210587c;}
