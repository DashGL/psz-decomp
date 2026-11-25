// FUN_overlay_15__0212231c @ 0x0212231c (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch04.json; original draft retained for referenced provenance.
// FUN_overlay_15__0212231c @ 0x0212231c (thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
#pragma thumb off
extern int FUN_02028170(void *,const void *,unsigned,unsigned,const void *);
#pragma thumb on
int FUN_overlay_15__0212231c(void *socket,const void *address,unsigned unused,const void *data,unsigned size){
    int result=FUN_02028170(socket,data,size,0,address);
    if(result<0)result=-4;
    return result;
}
