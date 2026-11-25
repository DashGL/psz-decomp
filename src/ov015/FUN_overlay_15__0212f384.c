// FUN_overlay_15__0212f384 @ 0x0212f384 (0x48, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch49.json; original draft retained for referenced provenance.
// FUN_overlay_15__0212f384 @ 0x0212f384 (code 0x3e, full extent 0x48, thumb)
// check: 2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern unsigned char *data_0213e88c[];
extern void *FUN_overlay_15__021366c4(unsigned,int);
extern void FUN_overlay_15__0212f3cc(void),FUN_overlay_15__021255f8(int),FUN_overlay_15__02125214(int,int,int),FUN_overlay_15__02125320(int),FUN_overlay_15__0212f47c(void),FUN_overlay_15__0212f8c8(void),FUN_overlay_15__02127de4(void *);
void FUN_overlay_15__0212f384(void){
    unsigned char *state=(unsigned char *)FUN_overlay_15__021366c4(32,4);
    data_0213e88c[1]=state;
    state[29]=0;
    FUN_overlay_15__0212f3cc();
    FUN_overlay_15__021255f8(1);
    FUN_overlay_15__02125214(47,-1,0);
    FUN_overlay_15__02125320(0);
    FUN_overlay_15__0212f47c();
    FUN_overlay_15__0212f8c8();
    FUN_overlay_15__02127de4((void *)0x0212f52d);
}
