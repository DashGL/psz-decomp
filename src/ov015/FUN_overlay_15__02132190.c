// FUN_overlay_15__02132190 @ 0x02132190 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch49.json; original draft retained for referenced provenance.
// FUN_overlay_15__02132190 @ 0x02132190 (thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
#pragma thumb off
extern int FUN_0200fef0(void *,unsigned,unsigned);
#pragma thumb on
int FUN_overlay_15__02132190(unsigned value){return FUN_0200fef0(*(char **)0x0213e8c8+148,0,value);}
