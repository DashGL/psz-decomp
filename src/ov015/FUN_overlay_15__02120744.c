// FUN_overlay_15__02120744 @ 0x02120744 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_overlay_15__02120744 @ 0x02120744 (thumb)
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
#pragma thumb off
extern int FUN_02028170(void *,void *,unsigned,unsigned,void *);
#pragma thumb on
int FUN_overlay_15__02120744(void *socket,void *data,unsigned count,unsigned flags,unsigned char *address,unsigned length){
    *address=(unsigned char)length;
    return FUN_02028170(socket,data,count,flags,address);
}
