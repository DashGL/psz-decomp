// FUN_overlay_15__02131350 @ 0x02131350 (0x64, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch64.json; original draft retained for referenced provenance.
// FUN_overlay_15__02131350 @ 0x02131350 (thumb)
// check: 2.0/sp2p3 target=0x64 candidate=0x64 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete distance-based audio parameter adjustment. */
extern void FUN_overlay_15__021321a8(int),FUN_overlay_15__021321bc(unsigned,int);
#pragma thumb off
extern int FUN_0205c700(int,int);
#pragma thumb on
void FUN_overlay_15__02131350(int value){int d=(*(unsigned char **)0x0213e8bc)[26]-value;int a,b;if(d<0)d=-d;if(d<2)a=0;else if(d<6)a=FUN_0205c700(127,6-d);else a=127;FUN_overlay_15__021321a8(a);if(d<2)b=-256;else if(d<6)b=FUN_0205c700(512,6-d)-256;else b=256;FUN_overlay_15__021321bc(65535,b);}
