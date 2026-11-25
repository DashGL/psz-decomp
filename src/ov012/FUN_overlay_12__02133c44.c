// flags: -O4,s
extern int *DAT_0213f2f4;
extern const int DAT_0213bbc8[];
extern void FUN_020c38f0(void *, int);
extern void FUN_020c3788(void *, const char *, int, int, unsigned int);
extern int FUN_0209ca8c(char *, void *, int);
extern int FUN_02084900(void *);
extern int FUN_0203a820(void *, int);
extern int FUN_020849d4(void *);
extern int FUN_020780b0(void *);
extern void *FUN_02079114(void);
extern void *FUN_02077f3c(void);
extern void FUN_02079160(void *, const int *, unsigned int, int, int, int, int, int, int);
extern void FUN_02071d0c(void *);
extern void FUN_02090b44(void *);
extern void FUN_020c32b4(void *, int);

typedef struct {
    short a, b;
    int c, x, y;
} Draw;

static inline int is_invalid_cat(int cat) {
    if (cat < 0 || cat >= 4) {
        return 1;
    }
    return 0;
}

void FUN_overlay_12__02133c44(unsigned char *item, int dirty) {
    int *owner = DAT_0213f2f4;
    char name[28];
    Draw draw;
    int pos[2];
    int handle;
    int flag;
    int bad;

    if (!owner || owner[16] != 1) {
        return;
    }
    flag = (dirty != 0 || owner[85] != 0) ? 1 : 0;
    if ((int)item[0] < 0 || (int)item[0] >= 4) {
        bad = 1;
    } else {
        bad = 0;
    }
    if (bad) {
        if (flag) {
            FUN_020c38f0((char *)owner + 136, 0);
        }
        return;
    }
    handle = owner[17];
    if (flag) {
        FUN_020c38f0((char *)owner + 136, 0);
        if (FUN_0209ca8c(name, item, 0)) {
            FUN_020c3788((char *)owner + 136, name, 0, 0, 2);
        }
    }
    if (FUN_02084900(item) && !FUN_0203a820(item, 4)) {
        void *font;
        int count;
        pos[0] = DAT_0213bbc8[5];
        pos[1] = DAT_0213bbc8[6];
        font = FUN_02079114();
        count = FUN_020849d4(item);
        FUN_02079160(font, pos, 2, 2, count, FUN_020780b0(FUN_02077f3c()), -1, 8, 0);
    }
    FUN_02071d0c(&draw);
    FUN_02090b44(&draw);
    draw.x = 0x80000;
    draw.y = 0x120000;
    draw.a = 2;
    FUN_020c32b4(&draw, handle);
}
