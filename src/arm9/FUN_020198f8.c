// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x38, exact bytes and relocation targets.
// FUN_020198f8 @ 0x020198f8
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
extern unsigned int data_0210571c[];
extern void FUN_020198a0(void);
unsigned int FUN_020198f8(void){if(!(*(data_0210571c+63)&128)){FUN_020198a0();*(data_0210571c+63)|=128;}return 0x0210584c;}
