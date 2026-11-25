// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x44, exact bytes and relocation targets.
// 2026-11-12 resumed recovery: flags use literal base0210571c+0xfc;
// inverse input/output use separate literal symbols02105768 and0210581c.
// Preserve the ROM three-base accesses rather than deriving output from input.
extern unsigned char DAT_02105768[], DAT_0210581c[];
extern struct { unsigned char pad_0[252]; unsigned int field_fc; } DAT_0210571c;
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// USA record and vector operations; alias-sensitive load/store order retained.
extern unsigned int FUN_0205b300(unsigned int,unsigned int);
unsigned int FUN_0201985c(void){if(!(DAT_0210571c.field_fc&8)){FUN_0205b300(((unsigned int)DAT_02105768),((unsigned int)DAT_0210581c));DAT_0210571c.field_fc|=8;}return ((unsigned int)DAT_0210581c);}
