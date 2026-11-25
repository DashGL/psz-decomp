// FUN_020dd468 @ 0x020dd468 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch47-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// USA record and vector operations; alias-sensitive load/store order retained.
extern unsigned int FUN_020662b4(unsigned int,unsigned int,unsigned int,unsigned int,unsigned int);
unsigned int FUN_020dd468(unsigned int output,unsigned int low,unsigned int high){return FUN_020662b4(output,13,0x021001d8,low,high);}
