// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x19c, exact bytes and relocation targets.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// Global member widths and offsets follow the ROM accesses at its literal-pool base.
extern struct { unsigned char field_0; unsigned char pad_1[3]; unsigned short field_4; unsigned char pad_6[2]; unsigned char * field_8; } DAT_0213e86c;
// flags: -O4,s
// Settings screen key priority, repeat boundaries, and scrolling task dispatch.
extern int FUN_overlay_15__0212d134(void);
extern int FUN_overlay_15__02136978(unsigned int),FUN_overlay_15__021369a8(unsigned int),FUN_overlay_15__021369d8(unsigned int);
extern void FUN_overlay_15__0212d190(unsigned int),FUN_overlay_15__02132190(int),FUN_overlay_15__0212e0f8(int);
extern void FUN_overlay_15__0212d494(void);
extern void FUN_overlay_15__02127de4(void (*)(void));
extern void FUN_overlay_15__0212df28(void *,void *),FUN_overlay_15__0212deb0(void *,void *);
extern void *FUN_overlay_15__021373d8(int,void (*)(void *,void *),void *,int);
#define OWNER (DAT_0213e86c.field_8)
void FUN_overlay_15__0212cf98(void)
{
    unsigned char *owner=OWNER;
    void *task;
    if(*(void **)(owner+0x38)!=0 || owner[0x45]!=0)return;
    if(FUN_overlay_15__0212d134())return;
    if(FUN_overlay_15__02136978(1)){
        FUN_overlay_15__0212d190(DAT_0213e86c.field_0);return;
    }
    if(FUN_overlay_15__02136978(2)){
        FUN_overlay_15__02132190(7);OWNER[0x40]=13;
        FUN_overlay_15__02127de4(FUN_overlay_15__0212d494);return;
    }
    if(FUN_overlay_15__021369a8(0x200)){
        if(DAT_0213e86c.field_4==145){
            if(OWNER[0x47])return;
            FUN_overlay_15__02132190(9);OWNER[0x47]=1;return;
        }
        FUN_overlay_15__02132190(19);
        task=FUN_overlay_15__021373d8(0,FUN_overlay_15__0212df28,0,120);
        *(void **)(OWNER+0x38)=task;return;
    }
    if(FUN_overlay_15__021369d8(0x200)){OWNER[0x47]=0;return;}
    if(FUN_overlay_15__021369a8(0x100)){
        if(DAT_0213e86c.field_4==0){
            if(OWNER[0x47])return;
            FUN_overlay_15__02132190(9);OWNER[0x47]=1;return;
        }
        FUN_overlay_15__02132190(19);
        task=FUN_overlay_15__021373d8(0,FUN_overlay_15__0212deb0,0,120);
        *(void **)(OWNER+0x38)=task;return;
    }
    if(FUN_overlay_15__021369d8(0x100)){OWNER[0x47]=0;return;}
    if(FUN_overlay_15__021369a8(0x40)){FUN_overlay_15__0212e0f8(1);return;}
    if(FUN_overlay_15__021369d8(0x40)){OWNER[0x47]=0;return;}
    if(FUN_overlay_15__021369a8(0x80)){FUN_overlay_15__0212e0f8(3);return;}
    if(FUN_overlay_15__021369d8(0x80)){OWNER[0x47]=0;return;}
    if(FUN_overlay_15__021369a8(0x20)){FUN_overlay_15__0212e0f8(0);return;}
    if(FUN_overlay_15__021369a8(0x10))FUN_overlay_15__0212e0f8(2);
}
