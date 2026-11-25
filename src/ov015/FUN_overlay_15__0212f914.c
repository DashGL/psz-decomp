// flags: -O4,s
typedef struct {
    unsigned char cur;
    unsigned char pad[3];
    unsigned char *sub;
} Cursor_0212f914;
extern Cursor_0212f914 DAT_0213e88c;
extern void FUN_overlay_15__02132190(int);
extern void FUN_overlay_15__0212f8c8(void);
void FUN_overlay_15__0212f914(int direction) {
    int changed = 1;
    switch (DAT_0213e88c.cur) {
    case 0:
        DAT_0213e88c.sub[28] = 0;
        if (direction == 0) DAT_0213e88c.cur = 2;
        else if (direction == 2) DAT_0213e88c.cur = 1;
        else if (direction == 1) DAT_0213e88c.cur = 3;
        else DAT_0213e88c.cur = 4;
        break;
    case 1:
        DAT_0213e88c.sub[28] = 1;
        if (direction == 0) DAT_0213e88c.cur = 0;
        else if (direction == 2) DAT_0213e88c.cur = 2;
        else if (direction == 1) DAT_0213e88c.cur = 3;
        else DAT_0213e88c.cur = 5;
        break;
    case 2:
        DAT_0213e88c.sub[28] = 2;
        if (direction == 0) DAT_0213e88c.cur = 1;
        else if (direction == 2) DAT_0213e88c.cur = 0;
        else if (direction == 1) DAT_0213e88c.cur = 3;
        else DAT_0213e88c.cur = 6;
        break;
    case 3: {
        int row = DAT_0213e88c.sub[28];
        int row4 = row + 4;
        if (direction == 1) DAT_0213e88c.cur = row4;
        else if (direction == 3) DAT_0213e88c.cur = row;
        else changed = 0;
        break;
    }
    case 4:
        DAT_0213e88c.sub[28] = 0;
        if (direction == 0) DAT_0213e88c.cur = 6;
        else if (direction == 2) DAT_0213e88c.cur = 5;
        else if (direction == 1) DAT_0213e88c.cur = 0;
        else DAT_0213e88c.cur = 3;
        break;
    case 5:
        DAT_0213e88c.sub[28] = 1;
        if (direction == 0) DAT_0213e88c.cur = 4;
        else if (direction == 2) DAT_0213e88c.cur = 6;
        else if (direction == 1) DAT_0213e88c.cur = 1;
        else DAT_0213e88c.cur = 3;
        break;
    case 6:
        DAT_0213e88c.sub[28] = 2;
        if (direction == 0) DAT_0213e88c.cur = 5;
        else if (direction == 2) DAT_0213e88c.cur = 4;
        else if (direction == 1) DAT_0213e88c.cur = 2;
        else DAT_0213e88c.cur = 3;
        break;
    }
    if (changed) {
        FUN_overlay_15__02132190(8);
        FUN_overlay_15__0212f8c8();
    }
}
