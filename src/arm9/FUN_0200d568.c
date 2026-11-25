// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x48, exact bytes and relocation targets.
// Match recovery 2026-11-12: typed nonoverlapping global fields retain
// ROM literal-base addressing and original load/store widths. Field offsets
// are established by the existing dereferences, with explicit padding.
extern struct { unsigned char pad_0[8]; unsigned int field_8; } DAT_02101e24;
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// USA record and vector operations; alias-sensitive load/store order retained.
extern unsigned int FUN_0206971c(unsigned int,unsigned int);
unsigned int FUN_0200d568(unsigned int mask){if(!mask)return 1;if(mask&DAT_02101e24.field_8)return 0;FUN_0206971c(mask,0);DAT_02101e24.field_8|=mask;return 1;}
