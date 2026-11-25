// FUN_overlay_15__021206dc @ 0x021206dc (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_overlay_15__021206dc @ 0x021206dc (thumb)
// check: 2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
#pragma thumb off
extern int FUN_020280bc(void *,void *,unsigned,unsigned,void *);
#pragma thumb on
int FUN_overlay_15__021206dc(void *socket,void *data,unsigned count,unsigned flags,unsigned char *address,unsigned *length){
    *address=(unsigned char)*length;
    return FUN_020280bc(socket,data,count,flags,address);
}
