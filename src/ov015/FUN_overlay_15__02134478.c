// FUN_overlay_15__02134478 @ 0x02134478 (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_overlay_15__02134478 @ 0x02134478 (thumb)
// check: 2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
#pragma thumb off
extern int FUN_020557f8(unsigned,unsigned short,unsigned short,unsigned short,unsigned short);
#pragma thumb on
int FUN_overlay_15__02134478(unsigned a,unsigned short b){return FUN_020557f8(a,3,17,b,30);}
