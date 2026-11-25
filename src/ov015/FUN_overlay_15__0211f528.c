// FUN_overlay_15__0211f528 @ 0x0211f528 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch60.json; original draft retained for referenced provenance.
// FUN_overlay_15__0211f528 @ 0x0211f528 (code 0x26, full extent 0x2c, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern int data_0213a844[];
extern int FUN_overlay_15__02120e58(int);
int FUN_overlay_15__0211f528(int state){
    if(state==-1){
        data_0213a844[1]=state;
        return 0;
    }
    if(data_0213a844[1]!=state){
        data_0213a844[1]=state;
        return FUN_overlay_15__02120e58(state);
    }
    return 0;
}
