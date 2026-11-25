// FUN_overlay_15__02133614 @ 0x02133614 (0x2e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch04.json; original draft retained for referenced provenance.
// FUN_overlay_15__02133614 @ 0x02133614 (thumb)
// check: 2.0/sp2p3 target=0x2e candidate=0x2e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern void FUN_overlay_15__02133b9c(unsigned),FUN_02068728(void);
extern int FUN_020640b4(unsigned),FUN_overlay_15__02133644(void *);
void FUN_overlay_15__02133614(void *config,unsigned mode){
    FUN_overlay_15__02133b9c(2);
    if(FUN_020640b4(mode)){FUN_overlay_15__02133b9c(7);return;}
    if(!FUN_overlay_15__02133644(config))FUN_02068728();
}
