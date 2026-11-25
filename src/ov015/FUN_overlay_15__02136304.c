// FUN_overlay_15__02136304 @ 0x02136304 (0x62, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch50.json; original draft retained for referenced provenance.
// FUN_overlay_15__02136304 @ 0x02136304 (thumb)
// check: 2.0/sp2p3 target=0x62 candidate=0x62 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern void *FUN_overlay_15__0213587c(void *,unsigned);
extern void FUN_overlay_15__02135888(void *,int,unsigned,unsigned),FUN_overlay_15__0213590c(void *,int,unsigned,unsigned),FUN_overlay_15__02135a10(void *,int,unsigned);
#pragma thumb off
extern int FUN_02017f30(void *,int,int,int,int,unsigned,unsigned,unsigned);
#pragma thumb on
int FUN_overlay_15__02136304(unsigned char *self,int x,int y,void *sprite,unsigned mode){
    void *slot=FUN_overlay_15__0213587c(sprite,0);
    FUN_overlay_15__02135888(sprite,-1,0,0);
    FUN_overlay_15__0213590c(sprite,-1,0,15);
    FUN_overlay_15__02135a10(sprite,-1,mode);
    return FUN_02017f30(slot,self[46],self[47],x,y,0,*(unsigned short *)(self+44),2);
}
