// FUN_020dd820 @ 0x020dd820 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch46-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// USA record and vector operations; alias-sensitive load/store order retained.
extern unsigned int FUN_020dd244(unsigned int);
extern unsigned long long FUN_020dd1f8(unsigned int);
unsigned long long FUN_020dd820(unsigned int record){if(FUN_020dd244(record)==2)return FUN_020dd1f8(record);return 0;}
