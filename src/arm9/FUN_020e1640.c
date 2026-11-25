// FUN_020e1640 @ 0x020e1640 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch39-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// Connection metadata and decoding wrappers; explicit stack arguments and scalar returns.
extern unsigned int DAT_0211dcc4[],DAT_0211dd44[];
extern void FUN_02065510(unsigned int,void *,unsigned int);
void FUN_020e1640(void){FUN_02065510(0,DAT_0211dcc4,128);FUN_02065510(0,DAT_0211dd44,256);}
