// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x60, exact bytes and relocation targets; argument/return contract corrected.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x60, exact bytes and relocation targets.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// Global member widths and offsets follow the ROM accesses at its literal-pool base.
extern struct { unsigned char pad_0[4]; unsigned short field_4; unsigned char pad_6[2]; char * field_8; } DAT_0213e86c;
// FUN_overlay_15__0212df28 @ 0x0212df28 (thumb)
// flags: -O4,s
extern void FUN_overlay_15__021311cc(void),FUN_overlay_15__02125570(void),FUN_overlay_15__0212db94(void),FUN_overlay_15__0212d6f8(void),FUN_overlay_15__021311b4(int),FUN_overlay_15__021311bc(void),FUN_overlay_15__0212e064(void),FUN_overlay_15__02137440(int,unsigned);
#pragma thumb off
extern int FUN_0205c73c(int,int),FUN_0200a3a0(int,int);
#pragma thumb on
void FUN_overlay_15__0212df28(unsigned event,unsigned unused_data){
    int remainder;
    FUN_overlay_15__021311cc();
    FUN_overlay_15__02125570();
    DAT_0213e86c.field_4+=6;
    remainder=FUN_0205c73c(DAT_0213e86c.field_4,29);
    if(remainder>=6){FUN_overlay_15__0212db94();return;}
    DAT_0213e86c.field_4-=remainder;
    FUN_overlay_15__0212d6f8();
    FUN_overlay_15__021311b4(FUN_0200a3a0(DAT_0213e86c.field_4*55,145));
    FUN_overlay_15__021311bc();
    FUN_overlay_15__0212e064();
    *(unsigned *)(DAT_0213e86c.field_8+56)=0;
    FUN_overlay_15__02137440(0,event);
}

// Caller/callee ABI evidence: Concrete scheduler37374 invokes registered callback with task in r0 and task12 data in r1.373e8 stores callback/data at task8/12;3743c replaces same task8 callback. Selected same-module registration establishes this function belongs to that exact family. Second position is unused here.
