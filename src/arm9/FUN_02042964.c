//cpp
// flags: -O4,s
extern "C" {
extern int FUN_02086d8c(int);
}

struct ObjA {
    int f00;
    int type;
    char pad08[0x1c];
    unsigned int flags;
    char pad28[0xa4];
    int fcc;
    int fd0;
    int fd4;
    int fd8;
};

struct ObjB {
    char pad00[0x40];
    int f40;
    int f44;
    int f48;
};

extern "C" int FUN_02042964(ObjA *s, ObjB *other, int modifier) {
    if (s->f00 == 1) {
        return 1;
    }
    int type = s->type;
    if ((type == 3) ? 1 : 0) {
        return 1;
    }
    if ((type == 2) ? 1 : 0) {
        return 1;
    }
    unsigned int flags = s->flags;
    if ((flags & 1) ? 1 : 0) {
        return 1;
    }
    int base = ((s->fd4 + (s->fcc + s->fd0)) * 4) / 10;
    int weighted = (int)(((long long)(other->f48 + (other->f40 + other->f44)) * 0x333 + 0x800) >> 12);
    base -= weighted; int value = (int)(((long long)base * s->fd8 + 0x800) >> 12);
    if (type == 1 && !((flags & 4) ? 1 : 0)) {
        int scale = 100 - ((modifier * 2) >> 12);
        if (scale < 0) {
            scale = 0;
        }
        value = (value * scale) / 100;
    }
    return FUN_02086d8c(value);
}
