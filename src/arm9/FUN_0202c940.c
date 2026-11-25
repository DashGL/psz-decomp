// FUN_0202c940 @ 0x0202c940 (0x30, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch21-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// USA numeric leaves and scene dispatchers; ABI/full extents in root batch255.
extern unsigned FUN_0202c918(const unsigned short *,unsigned);int FUN_0202c940(const unsigned short *p,unsigned count){if(p[count-1]&0x8000)return -1;return FUN_0202c918(p,count)!=0;}
