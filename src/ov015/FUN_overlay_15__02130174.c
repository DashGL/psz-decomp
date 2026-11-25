// FUN_overlay_15__02130174 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_15__02130174 @ 0x02130174 (thumb)
// check: 2.0/sp2p3 target=0x64 candidate=0x64 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern void FUN_overlay_15__021301d8(void),FUN_overlay_15__02127e24(unsigned *,unsigned *),FUN_overlay_15__02125320(unsigned),FUN_overlay_15__02125638(void),FUN_overlay_15__0212536c(unsigned),FUN_overlay_15__02124cb0(unsigned),FUN_overlay_15__02130248(void),FUN_overlay_15__02125688(unsigned),FUN_overlay_15__021302b4(void),FUN_overlay_15__02127de4(void (*)(void));
extern int FUN_overlay_15__02125214(unsigned,int,unsigned),FUN_overlay_15__02132190(unsigned);
void FUN_overlay_15__02130174(void){
    unsigned mode;
    *(unsigned char *)0x0213e89c=0;
    FUN_overlay_15__021301d8();
    FUN_overlay_15__02127e24(0,&mode);
    if(mode==0)FUN_overlay_15__02125214(49,-1,0);
    FUN_overlay_15__02125320(2);
    if(mode==0)FUN_overlay_15__02125638();
    FUN_overlay_15__0212536c(44);
    FUN_overlay_15__02124cb0(0);
    FUN_overlay_15__02130248();
    FUN_overlay_15__02125688(0);
    FUN_overlay_15__02132190(12);
    FUN_overlay_15__02127de4(FUN_overlay_15__021302b4);
}
