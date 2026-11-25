//cpp
// flags: -O3,s
#pragma block_assign on
#pragma always_inline on

struct Vec3 {
    int x, y, z;
    Vec3() {}
    Vec3(int x_, int y_, int z_) : x(x_), y(y_), z(z_) {}
    int lenSq() const {
        return (int)(((long long)x * x + 2048) >> 12) + (int)(((long long)y * y + 2048) >> 12) + (int)(((long long)z * z + 2048) >> 12);
    }
};

struct Record {
    short baseIdx;
    signed char count;
    signed char pad3;
    signed char f4;
    signed char flags;
    short pad6;
};

struct Item {
    int f0;
    signed char objId;
    signed char flags;
    short f6;
    signed char type;
    signed char pad9[3];
};

struct Obj {
    unsigned char pad00[0x60];
    int x;
    int z;
    int radius;
    short flags;
};

struct Self {
    Record *records;
    void *f04;
    Item *items;
    unsigned char pad0c[0x40];
    unsigned int curRecord;
    unsigned char pad50[0x10];
    unsigned int *flagPtr;
};

struct Event {
    unsigned int hdr;
    short idx;
    unsigned char b6;
    unsigned char b7;
};

extern "C" {
extern unsigned char DAT_0211a51c[];
extern char *DAT_02108c64;
extern void *DAT_02108d5c;

extern int FUN_02084d00(void *);
extern int FUN_02032ea0(void *, int);
extern Obj *FUN_02040320(void *, int);
extern char *FUN_0208555c(int);
extern Vec3 FUN_020345f0(const void *);
extern Vec3 FUN_02036348(const Vec3 &, const Vec3 &);
extern void FUN_02036094(void *);
extern void FUN_020360a4(void *, int, int, int);
extern void FUN_020bce3c(void *);
}

static inline int fxMul(int a, int b) {
    return (int)(((long long)a * b + 2048) >> 12);
}

enum { E0 = 0, E1 = 1 };

extern "C" void FUN_0206dba8(Self *self) {
    if (!FUN_02084d00(DAT_0211a51c)) {
        return;
    }
    Record *record = &self->records[self->curRecord];
    int count = record->count;
    if (count <= 0) {
        return;
    }
    for (int i = 0; i < count; i++) {
        int index = record->baseIdx + i;
        Item *item = &self->items[index];
        if ((item->flags & 1) ? E1 : E0) {
            continue;
        }
        if (item->type == 1) {
            char *mgr = DAT_02108c64;
            if (!FUN_02032ea0(mgr, *(signed char *)(mgr + 0x16))) {
                continue;
            }
        }
        Obj *obj = FUN_02040320(DAT_02108d5c, item->objId);
        if (!obj) {
            continue;
        }
        int active = 0;
        if (((obj->flags & 1) ? E1 : E0) && !((record->flags & 8) ? E1 : E0)) {
            for (int j = 0; j < 4; j++) {
                char *player = FUN_0208555c(j);
                if (player) {
                    Vec3 pos = FUN_020345f0(player + 0x9c);
                    pos.y = 0;
                    Vec3 center(obj->x, 0, obj->z);
                    if (FUN_02036348(pos, center).lenSq() <= fxMul(obj->radius, obj->radius)) { active = 1; break; }
                }
            }
        } else {
            active = 1;
        }
        if (active) {
            Event ev;
            FUN_02036094(&ev);
            FUN_020360a4(&ev, 4, 6, 8);
            ev.idx = -1;
            ev.b6 = 0;
            ev.b7 = 0;
            ev.idx = (short)index;
            FUN_020bce3c(&ev);
            *self->flagPtr = 1;
        }
    }
}
