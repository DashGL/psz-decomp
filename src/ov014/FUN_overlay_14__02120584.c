// FUN_overlay_14__02120584 @ 0x02120584 (0x44, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch29.json; original draft retained for referenced provenance.
// FUN_overlay_14__02120584 @ 0x02120584 (thumb)
// check: 2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Full UI/state function and concrete call ABI reviewed. */
extern void *FUN_02078dac(void *,int,int);extern void FUN_overlay_14__02120608(void *,int,int),FUN_02078f88(void *,int),FUN_overlay_14__021201f8(void *,int);void FUN_overlay_14__02120584(char *s,int index,char *record){if(index>=0&&index<3&&!((void **)(s+64))[index]){((void **)(s+64))[index]=FUN_02078dac(record,index,1);FUN_overlay_14__02120608(s,index,(unsigned char)record[36]);FUN_02078f88(((void **)(s+64))[index],0);FUN_overlay_14__021201f8(s,index);}}
