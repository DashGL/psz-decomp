// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x78, exact bytes and relocation targets.
// Resumed recovery: ROM flags pool is0210571c+fc; command payloads
// use separate literal addresses02105720/02105768/02105798.
extern struct { unsigned char pad_0[252]; unsigned int field_fc; } DAT_0210571c;
extern unsigned char DAT_02105720[];
extern unsigned char DAT_02105768[];
extern unsigned char DAT_02105798[];
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x78 candidate=0x78 words=0 exact_bytes=0 bad_relocs=0
// USA record and vector operations; alias-sensitive load/store order retained.
extern void FUN_0201c9d4(unsigned int,unsigned int,unsigned int);
unsigned int FUN_02019784(void){unsigned int mode;FUN_0201c9d4(0x1610,((unsigned int)DAT_02105720),17);FUN_0201c9d4(25,((unsigned int)DAT_02105768),12);mode=2;FUN_0201c9d4(16,(unsigned int)&mode,1);FUN_0201c9d4(21,((unsigned int)DAT_02105798),32);DAT_0210571c.field_fc=(DAT_0210571c.field_fc&~1u)|2;return ((unsigned int)&DAT_0210571c);}
