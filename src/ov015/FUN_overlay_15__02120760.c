// FUN_overlay_15__02120760 @ 0x02120760 (0xc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_overlay_15__02120760 @ 0x02120760 (thumb)
// check: 2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
#pragma thumb off
extern int FUN_02028010(void *,void *);
#pragma thumb on
int FUN_overlay_15__02120760(void *socket,unsigned char *address,unsigned length){
    *address=(unsigned char)length;
    return FUN_02028010(socket,address);
}
