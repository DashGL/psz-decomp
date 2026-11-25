// flags: -O4,p
extern signed char *DAT_0213e7dc;
extern const signed char DAT_02139ff8[][4];
extern void FUN_overlay_15__0212659c(void);
extern void FUN_overlay_15__02132190(int);

void FUN_overlay_15__02126634(int direction) {
    int old = DAT_0213e7dc[289];
    int next;
    DAT_0213e7dc[289] = DAT_02139ff8[old][direction];
    next = DAT_0213e7dc[289];
    if (next == 46 && direction == 3) {
        DAT_0213e7dc[288] = old;
    } else if (next == 51 && (direction == 1 || direction == 3)) {
        DAT_0213e7dc[288] = old;
    } else if (next == 52 && (direction == 1 || direction == 3)) {
        if (old != 46) {
            DAT_0213e7dc[288] = old;
        }
    } else if (next == -1) {
        int prev = DAT_0213e7dc[288];
        if (prev == 35 || prev == 50) {
            DAT_0213e7dc[289] = 35;
        } else {
            DAT_0213e7dc[289] = 34;
        }
    } else if (next == -2) {
        switch (DAT_0213e7dc[288]) {
        case 0:
        case 49:
            DAT_0213e7dc[289] = 49;
            break;
        case 1:
        case 36:
            DAT_0213e7dc[289] = 36;
            break;
        case 3:
        case 38:
            DAT_0213e7dc[289] = 38;
            break;
        case 4:
        case 39:
            DAT_0213e7dc[289] = 39;
            break;
        case 5:
        case 40:
            DAT_0213e7dc[289] = 40;
            break;
        default:
            DAT_0213e7dc[289] = 37;
            break;
        }
    } else if (next == -3) {
        switch (DAT_0213e7dc[288]) {
        case 6:
        case 41:
            DAT_0213e7dc[289] = 41;
            break;
        case 7:
        case 42:
            DAT_0213e7dc[289] = 42;
            break;
        case 9:
        case 44:
            DAT_0213e7dc[289] = 44;
            break;
        case 10:
        case 45:
            DAT_0213e7dc[289] = 45;
            break;
        case 11:
        case 34:
        case 35:
        case 50:
            DAT_0213e7dc[289] = 46;
            break;
        default:
            DAT_0213e7dc[289] = 43;
            break;
        }
    } else if (next == -4) {
        switch (DAT_0213e7dc[288]) {
        case 0:
        case 49:
            DAT_0213e7dc[289] = 0;
            break;
        case 1:
        case 36:
            DAT_0213e7dc[289] = 1;
            break;
        case 3:
        case 38:
            DAT_0213e7dc[289] = 3;
            break;
        case 4:
        case 39:
            DAT_0213e7dc[289] = 4;
            break;
        case 5:
        case 40:
            DAT_0213e7dc[289] = 5;
            break;
        default:
            DAT_0213e7dc[289] = 2;
            break;
        }
    } else if (next == -5) {
        switch (DAT_0213e7dc[288]) {
        case 6:
        case 41:
            DAT_0213e7dc[289] = 6;
            break;
        case 7:
        case 42:
            DAT_0213e7dc[289] = 7;
            break;
        case 9:
        case 44:
            DAT_0213e7dc[289] = 9;
            break;
        case 10:
        case 45:
            DAT_0213e7dc[289] = 10;
            break;
        case 11:
        case 34:
            DAT_0213e7dc[289] = 11;
            break;
        case 35:
        case 50:
            DAT_0213e7dc[289] = 50;
            break;
        default:
            DAT_0213e7dc[289] = 8;
            break;
        }
    }
    FUN_overlay_15__0212659c();
    FUN_overlay_15__02132190(8);
}
