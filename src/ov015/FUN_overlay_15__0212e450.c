// FUN_overlay_15__0212e450 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_15__0212e450 @ 0x0212e450 (thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern void FUN_overlay_15__0212e46c(void),FUN_overlay_15__02125638(void),FUN_overlay_15__02131c58(void),FUN_overlay_15__0212e4d4(void),FUN_overlay_15__02127de4(void (*)(void));
void FUN_overlay_15__0212e450(void){
    FUN_overlay_15__0212e46c();
    FUN_overlay_15__02125638();
    FUN_overlay_15__02131c58();
    FUN_overlay_15__02127de4(FUN_overlay_15__0212e4d4);
}
