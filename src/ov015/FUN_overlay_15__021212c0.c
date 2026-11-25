// FUN_overlay_15__021212c0 @ 0x021212c0 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_overlay_15__021212c0 @ 0x021212c0 (code 0x38, full extent 0x3c, thumb)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern int data_0213d200[];
extern int FUN_020683d4(void),FUN_0202dbec(int,int,int);
extern void FUN_020683e8(int);
int FUN_overlay_15__021212c0(void){
    int irq=FUN_020683d4();
    if(data_0213d200[6]==5&&FUN_0202dbec(0,0,0)==3){
        data_0213d200[6]=4;
        FUN_020683e8(irq);
        return 1;
    }
    FUN_020683e8(irq);
    return 0;
}
