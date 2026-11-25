// flags: -O4,s
typedef struct { unsigned short name[8]; } Name;
typedef struct {
    Name first;
    Name second;
    signed char tags[4];
    unsigned char fields[8];
    unsigned char reserved[42];
    unsigned char last;
    unsigned char tail[13];
} Appearance; // 0x64 bytes

typedef struct {
    unsigned char pad00[0x14];
    Name first;
    Name second;
    signed char tags[4];
    unsigned char fields[8];
    unsigned char last;
    unsigned char pad41[0xf];
} Record; // 0x50 bytes

typedef struct {
    unsigned short id, a, b, pad;
    int x, y;
} Draw; // 0x10 bytes

typedef struct { int group; int bit; } Cell;
typedef struct { int x, y, dx, dy; } Layout;

extern const int DAT_02120ea0[];
extern const int DAT_02120e98[];
extern const Cell DAT_02120f34[4][3];
extern const Layout DAT_02120f04[];

extern const Record *FUN_020734f4(void);
extern void *FUN_020a4448(void);
extern void *FUN_020b3cbc(const void *, int);
extern int FUN_020b3bc8(const void *);
extern int FUN_02073198(void);
extern void FUN_020c4434(void *);
extern void FUN_020a46c4(void *, int, void *, void *);
extern void FUN_020b3088(void *, int);
extern int FUN_overlay_9__0211e640(void);
extern int FUN_02073974(int *, int *, unsigned short *);
extern void FUN_overlay_9__02120a38(void *, int);
#pragma thumb off
extern void FUN_020144f0(void);
extern void FUN_02014714(void);
#pragma thumb on
extern void FUN_02071d0c(void *);
extern void FUN_02090b44(void *);
extern void FUN_020c32b4(void *, void *);
extern void FUN_0208971c(void *, const void *);
extern const Cell *FUN_overlay_9__021209d4(void *);
extern int FUN_overlay_9__02120a9c(void *, int);
extern int FUN_overlay_9__02120ab8(void *, int, int);

int FUN_overlay_9__02120670(unsigned int *self) {
    int i, row, col;
    const Cell *selected;

    if (self[30] == 1) {
        if (FUN_overlay_9__0211e640() == 12) {
            FUN_overlay_9__02120a38(self, 2);
        }
    } else if (self[30] == 2) {
        int left = 0;
        int right = 0;
        unsigned short key = 0;
        const Record *records;
        void *manager;
        self[8] = 0;
        self[9] = 0;
        if (FUN_02073974(&left, &right, &key)) {
            self[8] |= (1u << left);
            self[9] |= (1u << right);
        }
        records = FUN_020734f4();
        manager = FUN_020a4448();
        if (records && manager) {
            for (i = 0; i < 4; i++) {
                if (!FUN_020b3bc8(&records[i])) {
                    Appearance appearance;
                    FUN_020c4434(&appearance.first);
                    FUN_020c4434(&appearance.second);
                    appearance.first = records[i].first;
                    appearance.second = records[i].second;
                    appearance.tags[0] = records[i].tags[0];
                    appearance.tags[1] = records[i].tags[1];
                    appearance.tags[2] = records[i].tags[2];
                    appearance.tags[3] = records[i].tags[3];
                    appearance.fields[0] = records[i].fields[0];
                    appearance.fields[1] = records[i].fields[1];
                    appearance.fields[2] = records[i].fields[2];
                    appearance.fields[3] = records[i].fields[3];
                    appearance.fields[4] = records[i].fields[4];
                    appearance.fields[5] = records[i].fields[5];
                    appearance.fields[6] = records[i].fields[6];
                    appearance.fields[7] = records[i].fields[7];
                    appearance.last = records[i].last;
                    FUN_020a46c4(manager, i, &appearance, FUN_020b3cbc(&records[i], i != FUN_02073198()));
                }
            }
        }
    }

    FUN_020b3088((char *)self + 24, 0);
    if (self[30] == 1) {
        FUN_020b3088((char *)self + 24, 2);
    } else {
        FUN_020b3088((char *)self + 24, 3);
    }

    FUN_020144f0();
    selected = FUN_overlay_9__021209d4(self);

    {
        Draw icon;
        FUN_02071d0c(&icon);
        FUN_02090b44(&icon);
        icon.x = 0x22000;
        icon.y = 0x102000;
        for (i = 0; i <= 2; i++) {
            if (self[11] & (1u << i)) {
                icon.id = FUN_overlay_9__02120a9c(self, i);
                FUN_020c32b4(&icon, (void *)self[5]);
            }
        }
        FUN_02090b44(&icon);
        FUN_0208971c(&icon.x, DAT_02120ea0);
        for (i = 1; i < 9; i++) {
            if (self[12] & (1u << i)) {
                icon.id = FUN_overlay_9__02120ab8(self, i, 14);
                FUN_020c32b4(&icon, (void *)self[5]);
            }
        }
        FUN_02090b44(&icon);
        icon.x = 0x4d000;
        icon.y = 0x12b000;
        icon.id = 7;
        FUN_020c32b4(&icon, (void *)self[5]);
    }

    for (row = 0; row < 4; row++) {
        const Cell *rptr = DAT_02120f34[row];
        for (col = 0; col < 3; col++) {
            int rm1 = row - 1;
            int g = rptr[col].group;
            if (self[11 + g] & (1u << rptr[col].bit)) {
                Draw marker;
                FUN_02071d0c(&marker);
                FUN_02090b44(&marker);
                marker.x = DAT_02120f04[g].x + DAT_02120f04[g].dx * col;
                marker.y = DAT_02120f04[g].y + DAT_02120f04[g].dy * rm1;
                marker.x += 0x4000;
                marker.y += 0x4000;
                marker.id = (self[8 + g] & (1u << rptr[col].bit)) ? 9 : 10;
                FUN_020c32b4(&marker, (void *)self[5]);
            }
        }
    }

    {
        Draw cursor;
        FUN_02071d0c(&cursor);
        FUN_02090b44(&cursor);
        cursor.x = DAT_02120f04[selected->group].x + DAT_02120f04[selected->group].dx * (int)self[14];
        { int dy;
        cursor.y = DAT_02120f04[selected->group].y + 0x1000;
        dy = DAT_02120f04[selected->group].dy;
        cursor.y += dy * ((int)self[1] - 1); }
        cursor.id = selected->group + 11;
        FUN_020c32b4(&cursor, (void *)self[5]);
    }

    if (selected->group == 1 && (self[12] & (1u << selected->bit))) {
        Draw detail;
        FUN_02071d0c(&detail);
        FUN_02090b44(&detail);
        FUN_0208971c(&detail.x, DAT_02120e98);
        detail.id = FUN_overlay_9__02120ab8(self, selected->bit, 0);
        FUN_020c32b4(&detail, (void *)self[5]);
    }

    FUN_02014714();
    return 0;
}
