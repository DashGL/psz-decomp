// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1f0, exact bytes and relocation targets.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// Global member widths and offsets follow the ROM accesses at its literal-pool base.
extern struct { unsigned char * field_0; } DAT_0213e864;
// FUN_overlay_15__0212c1f8 @ 0x0212c1f8 (full extent 0x1f0, thumb)
#pragma thumb off
extern void FUN_020656b8(void *, int, unsigned int);
#pragma thumb on
extern int FUN_overlay_15__02126d74(void);
extern void FUN_overlay_15__02132190(int);
extern unsigned int FUN_overlay_15__02126d84(unsigned int);
extern unsigned int FUN_overlay_15__02126d94(unsigned int);
extern unsigned int FUN_overlay_15__02126da4(unsigned int);
extern void FUN_overlay_15__02127de4(void (*)(void));
extern void FUN_overlay_15__0212c450(void);
extern int FUN_overlay_15__0212c708(void);
extern void FUN_overlay_15__0212c5dc(void);
extern void FUN_overlay_15__0212c6c0(void);
extern int FUN_overlay_15__0212c3e8(int);
extern void FUN_overlay_15__0212c55c(void);
#define OWNER (DAT_0213e864.field_0)
void FUN_overlay_15__0212c1f8(void)
{
    int key = FUN_overlay_15__02126d74();
    unsigned char *owner, *field;
    unsigned int *sprite;
    int offset;
    switch (key) {
    case 0:
        return;
    case 0x10:
        if (OWNER[0x14] != 0 || OWNER[10] != 0) {
            FUN_overlay_15__02132190(3);
            owner = OWNER;
            if ((owner + 8)[owner[0x14] * 3 + 2] == 0) {
                owner[0x14]--;
            }
            owner = OWNER;
            FUN_020656b8(owner + 8 + owner[0x14] * 3, 0, 3);
            if (OWNER[0x14] == 0 && OWNER[10] == 0) {
                FUN_overlay_15__02126d84(0);
            }
            FUN_overlay_15__02126d94(1);
            FUN_overlay_15__02126da4(0);
        }
        break;
    case 0x11:
        owner = OWNER;
        if (owner[0x14] < 3 && (owner + 8)[owner[0x14] * 3 + 2] != 0) {
            FUN_overlay_15__02132190(1);
            OWNER[0x14]++;
            FUN_overlay_15__02126da4(0);
        }
        break;
    case 0x12:
        OWNER[0x15] = 0;
        FUN_overlay_15__02132190(7);
        FUN_overlay_15__02127de4(FUN_overlay_15__0212c450);
        return;
    case 0x13:
        if (FUN_overlay_15__0212c708()) {
            FUN_overlay_15__02132190(6);
            OWNER[0x15] = 1;
        } else {
            OWNER[0x15] = 2;
            FUN_overlay_15__02132190(9);
        }
        OWNER[0x14] = 3;
        sprite = *(unsigned int **)(OWNER + 4);
        *sprite = (*sprite & 0xc1fffcff) | 0x200;
        FUN_overlay_15__0212c5dc();
        FUN_overlay_15__0212c6c0();
        FUN_overlay_15__02127de4(FUN_overlay_15__0212c450);
        return;
    default:
        if (OWNER[0x14] != 3 || !FUN_overlay_15__0212c3e8(26)) {
            FUN_overlay_15__02132190(1);
            owner = OWNER;
            field = owner + 8;
            offset = owner[0x14] * 3;
            if (field[offset + 2] == 0) {
                field[offset + 2] = (unsigned char)key;
            } else if (field[offset + 1] == 0) {
                field[offset + 1] = field[offset + 2];
                field[offset + 2] = (unsigned char)key;
                if (FUN_overlay_15__0212c3e8(26)) {
                    if (OWNER[0x14] < 3) {
                        OWNER[0x14]++;
                    }
                }
            } else {
                field[offset] = field[offset + 1];
                field[offset + 1] = field[offset + 2];
                field[offset + 2] = (unsigned char)key;
                if (OWNER[0x14] < 3) {
                    OWNER[0x14]++;
                }
            }
            FUN_overlay_15__02126d84(1);
            if (OWNER[0x14] < 3) {
                FUN_overlay_15__02126da4(1);
            } else {
                FUN_overlay_15__02126da4(0);
            }
            if (OWNER[0x14] == 3 && FUN_overlay_15__0212c3e8(26)) {
                FUN_overlay_15__02126d94(0);
            }
        }
        break;
    }
    FUN_overlay_15__0212c55c();
    FUN_overlay_15__0212c5dc();
}
