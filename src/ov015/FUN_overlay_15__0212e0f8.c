// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1cc, exact bytes and relocation targets.
// flags: -O4,s
// check: exact
// target: FUN_overlay_15__0212e0f8 @ 0x0212e0f8 (size 0x1cc, ov015)

struct State6c {
    unsigned char st;
    unsigned char pad1;
    unsigned char sub;
    unsigned char pad3;
    unsigned short val;
    unsigned char *owner;
};
extern struct State6c data_0213e86c;

extern unsigned char *FUN_overlay_15__021318ac(void);
extern void FUN_overlay_15__02132190(int);
extern void FUN_overlay_15__0212d6f8(void);
extern void FUN_overlay_15__021311b4(int);
extern void *FUN_overlay_15__021373d8(int, void (*)(void), int, int);
extern void FUN_overlay_15__0212deb0(void);
extern void FUN_overlay_15__0212df28(void);
extern void FUN_overlay_15__0212dfe0(void);
extern void FUN_overlay_15__0212e064(void);

void FUN_overlay_15__0212e0f8(int dir)
{
    unsigned char *cfg = FUN_overlay_15__021318ac();
    int mode = 0;
    unsigned char st = data_0213e86c.st;

    if (st == 8 && cfg[0xf5] == 0 && (dir == 0 || dir == 2)) {
        return;
    }

    switch (st) {
    case 0:
        if (dir == 1) {
            data_0213e86c.st = 11;
        } else if (dir == 3) {
            data_0213e86c.sub++;
        } else {
            mode = 2;
        }
        break;
    case 10:
        if (dir == 1) {
            data_0213e86c.sub--;
        } else if (dir == 3) {
            data_0213e86c.st = data_0213e86c.owner[0x42];
        } else {
            mode = 2;
        }
        break;
    case 11:
        if (dir == 1) {
            if (data_0213e86c.owner[0x47] != 0) {
                return;
            }
            FUN_overlay_15__02132190(9);
            data_0213e86c.owner[0x47] = 1;
            return;
        } else if (dir == 3) {
            data_0213e86c.st = 0;
            data_0213e86c.sub = 0;
            data_0213e86c.val = 0;
            FUN_overlay_15__0212d6f8();
            FUN_overlay_15__021311b4(0);
        } else {
            mode = 2;
        }
        break;
    case 12:
    case 13:
        data_0213e86c.owner[0x42] = st;
        if (dir == 1) {
            data_0213e86c.st = 10;
            data_0213e86c.sub = 3;
            data_0213e86c.val = 0x91;
            FUN_overlay_15__0212d6f8();
            FUN_overlay_15__021311b4(0x37);
        } else if (dir == 3) {
            if (data_0213e86c.owner[0x47] != 0) {
                return;
            }
            FUN_overlay_15__02132190(9);
            data_0213e86c.owner[0x47] = 1;
            return;
        } else if (st == 12) {
            data_0213e86c.st = 13;
        } else {
            data_0213e86c.st = 12;
        }
        break;
    default:
        if (dir == 1) {
            if (data_0213e86c.sub != 0) {
                data_0213e86c.sub--;
            } else {
                FUN_overlay_15__02132190(0x13);
                *(void **)(data_0213e86c.owner + 0x38) =
                    FUN_overlay_15__021373d8(0, FUN_overlay_15__0212deb0, 0, 0x78);
                return;
            }
        } else if (dir == 3) {
            if (data_0213e86c.sub < 3) {
                data_0213e86c.sub++;
            } else {
                FUN_overlay_15__02132190(0x13);
                *(void **)(data_0213e86c.owner + 0x38) =
                    FUN_overlay_15__021373d8(0, FUN_overlay_15__0212df28, 0, 0x78);
                return;
            }
        } else {
            mode = 2;
            if (st == 2) {
                data_0213e86c.st = 3;
            } else if (st == 3) {
                data_0213e86c.st = 2;
            } else if (st == 7) {
                data_0213e86c.st = 8;
            } else if (st == 8) {
                data_0213e86c.st = 7;
            } else {
                break;
            }
            FUN_overlay_15__02132190(8);
            FUN_overlay_15__0212dfe0();
        }
        break;
    }

    if (mode != 2) {
        FUN_overlay_15__02132190(8);
        if (mode == 0) {
            FUN_overlay_15__0212e064();
        }
    }
}
