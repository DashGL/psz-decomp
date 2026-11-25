// FUN_overlay_15__0211f180 @ 0x0211f180 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch04.json; original draft retained for referenced provenance.
// FUN_overlay_15__0211f180 @ 0x0211f180 (code 0x28, full extent 0x2c, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern void *data_0213c2c0[];
extern void FUN_overlay_15__0211e650(void *);
void FUN_overlay_15__0211f180(void){
    if(data_0213c2c0[3]){
        FUN_overlay_15__0211e650(data_0213c2c0[3]);
        data_0213c2c0[3]=0;
    }
    if(data_0213c2c0[1]){
        FUN_overlay_15__0211e650(data_0213c2c0[1]);
        data_0213c2c0[1]=0;
    }
}
