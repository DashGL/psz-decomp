// flags: -O4,p
extern unsigned char *FUN_overlay_15__021318ac(void);
extern int FUN_overlay_15__0212d964(unsigned int);
extern void FUN_overlay_15__0212d9cc(int, int, int);

typedef struct {
    unsigned int pad0;
    unsigned int pad1;
    unsigned char *owner;
} Global0213e86c;

extern Global0213e86c DAT_0213e86c;

void FUN_overlay_15__0212d87c(unsigned int item, int row) {
    unsigned char *settings = FUN_overlay_15__021318ac();
    int icon;
    int state;
    switch (item) {
    case 0:
    case 1:
        icon = 0;
        state = 0;
        if (!FUN_overlay_15__0212d964(0)) {
            state = 2;
        }
        break;
    case 2: {
        int other;
        int second = 0;
        state = 0;
        if (settings[245]) {
            icon = 1;
            other = 4;
        } else {
            icon = 2;
            other = 3;
        }
        if (DAT_0213e86c.owner[4]) {
            state = 1;
        }
        if (DAT_0213e86c.owner[5]) {
            second = 1;
        }
        FUN_overlay_15__0212d9cc(other, second, row);
        break;
    }
    case 3:
    case 4:
    case 5:
        icon = 0;
        if (settings[245]) {
            state = 2;
        } else {
            state = 0;
        }
        break;
    case 6: {
        int other;
        int second = 0;
        state = 0;
        if (settings[246]) {
            icon = 1;
            other = 4;
        } else {
            if (!settings[245]) {
                state = 2;
            }
            icon = 2;
            other = 3;
        }
        if (DAT_0213e86c.owner[6]) {
            state = 1;
        }
        if (DAT_0213e86c.owner[7]) {
            second = 1;
        }
        FUN_overlay_15__0212d9cc(other, second, row);
        break;
    }
    case 7:
    case 8:
        icon = 0;
        if (settings[246]) {
            state = 2;
        } else {
            state = 0;
        }
        break;
    default:
        icon = 0;
        state = 2;
        break;
    }
    FUN_overlay_15__0212d9cc(icon, state, row);
}
