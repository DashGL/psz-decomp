// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x12c, exact bytes and relocation targets.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// Global member widths and offsets follow the ROM accesses at its literal-pool base.
extern struct { unsigned char * field_0; } DAT_0213e860;
// flags: -O4,s
// Process name-editor keypad actions (backspace, cancel, validate, character append) and update display.
extern int FUN_overlay_15__02125a3c(void),FUN_overlay_15__0212be9c(void);
extern void FUN_overlay_15__02132190(int),FUN_overlay_15__02125a4c(int),FUN_overlay_15__02125a60(int);
extern void FUN_overlay_15__0212bb94(void),FUN_overlay_15__0212bd0c(void),FUN_overlay_15__0212bda0(void);
extern void FUN_overlay_15__02127de4(void (*)(void));
#define OWNER (DAT_0213e860.field_0)
void FUN_overlay_15__0212ba64(void)
{
    int key=FUN_overlay_15__02125a3c();
    unsigned int *sprite;
    switch(key) {
    case 0:
        break;
    case 0x80:
        if(OWNER[0x29]!=0) {
            FUN_overlay_15__02132190(3);
            OWNER[0x29]--;
            (OWNER+8)[OWNER[0x29]]=0;
            if(OWNER[0x29]==0)FUN_overlay_15__02125a4c(0);
            FUN_overlay_15__02125a60(1);
        }
        break;
    case 0x82:
        FUN_overlay_15__02132190(7);
        OWNER[0x2a]=0;
        FUN_overlay_15__02127de4(FUN_overlay_15__0212bb94);
        return;
    case 0x83:
        if(FUN_overlay_15__0212be9c()) {
            FUN_overlay_15__02132190(6);
            OWNER[0x2a]=1;
        } else {
            OWNER[0x2a]=2;
            FUN_overlay_15__02132190(9);
        }
        sprite=*(unsigned int **)(OWNER+4);
        *sprite=(*sprite&0xc1fffcff)|0x200;
        FUN_overlay_15__02127de4(FUN_overlay_15__0212bb94);
        return;
    case 0xe01d:
    default:
        if(OWNER[0x29]!=32) {
            FUN_overlay_15__02132190(1);
            (OWNER+8)[OWNER[0x29]]=(unsigned char)key;
            OWNER[0x29]++;
            FUN_overlay_15__02125a4c(1);
            if(OWNER[0x29]==32)FUN_overlay_15__02125a60(0);
        }
        break;
    }
    FUN_overlay_15__0212bd0c();
    FUN_overlay_15__0212bda0();
}
