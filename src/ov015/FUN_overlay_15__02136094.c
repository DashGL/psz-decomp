// FUN_overlay_15__02136094 @ 0x02136094 (0x6c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch50.json; original draft retained for referenced provenance.
// FUN_overlay_15__02136094 @ 0x02136094 (thumb)
// check: 2.0/sp2p3 target=0x6c candidate=0x6c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete dirty-buffer transfer; first callback argument unused. */
#pragma thumb off
extern void FUN_0206740c(void *,unsigned),FUN_0205f11c(void *,unsigned,unsigned),FUN_0205f17c(void *,unsigned,unsigned);
#pragma thumb on
#define G (*(char **)0x0213e900)
void FUN_overlay_15__02136094(void *unused,unsigned char *dirty){if(*dirty){if(dirty==(unsigned char *)(G+1660)){FUN_0206740c(*(void **)(G+1592),24576);FUN_0205f11c(*(void **)(G+1592),0,24576);}else{FUN_0206740c(*(void **)(G+1640),12288);FUN_0205f17c(*(void **)(G+1640),12288,12288);}*dirty=0;}}
