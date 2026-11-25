// flags: -O4,s
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed char s8;

enum { E0 = 0, E1 = 1 };

typedef struct { int x, y, z; } Vec;

typedef struct {
    int x, y, z;
    u32 delay;
    u16 state;
    u16 pad;
} Particle;

typedef struct {
    u8 pad0[0x5c];
    Vec pos;
} EntrySub;

typedef struct {
    u8 pad0[0x14];
    EntrySub *sub;
} Entry;

typedef struct {
    u8 pad0[0x1c];
    Vec pos;
    u8 pad28[0x2e - 0x28];
    u8 mode;
    u8 pad2f[0x44 - 0x2f];
    s8 *f44;
    u8 *f48;
    u8 pad4c[0x50 - 0x4c];
    u32 flags;
    u8 f54;
    u8 pad55[3];
    int ticks;
    int count;
    Particle *particles;
    u8 pad64[0xb4 - 0x64];
    u16 doneCount;
    u16 padB6;
    int velY;
    int targetY;
} Obj;

extern s8 *DAT_02108c64;
extern void *DAT_0210e24c;

extern int FUN_0205136c(void *, int, int);
extern int FUN_02032e30(void *, int);
extern int FUN_02033704(void);
extern void FUN_02035408(Vec *, int, int, int);
extern void FUN_02030658(void *, Vec *);
extern void FUN_020819d8(void *);
extern void FUN_020316e8(void *, void *);
extern void FUN_02033658(int, int, Vec *);
extern void FUN_020302e8(Vec *, void *);
extern void *FUN_0204f3b8(void);
extern Entry *FUN_0204f4c0(void *, void *, int);
extern u16 FUN_02032854(void *);
extern void *FUN_overlay_4__02129ed4(void);
extern void FUN_overlay_4__0212a980(void *, int);
extern void FUN_overlay_4__0212a3cc(void *, int, int, int, u16);
extern void FUN_02081cf8(void *);
extern void FUN_0203041c(void *);

void FUN_02081554(Obj *self) {
    Vec pos;
    Vec spawn1;
    Vec spawn2;
    Vec bounce;
    Vec map1;
    Vec map2;
    Vec p3;
    Vec p2;
    Vec p1;
    Vec base;
    u8 key[4];
    Entry *entry;
    int mode = self->mode;

    if (mode == 0) {
        int region = DAT_02108c64[0x16];
        int kind = self->f44[9];
        if (kind == 0) {
            if (FUN_0205136c(DAT_0210e24c, region, 0)) {
                self->flags |= 4;
            }
        } else if (kind == 1) {
            if (FUN_02032e30(DAT_02108c64, region) && FUN_0205136c(DAT_0210e24c, region, 1)) {
                self->flags |= 4;
            }
        }
    } else if (mode == 1) {
        base = self->pos;
        p1 = base;
        p2 = base;
        p3 = base;
        FUN_02035408(&pos, p3.x, self->velY + p2.y, p1.z);
        if (pos.y >= self->targetY) {
            self->flags |= 8;
            self->velY = 0;
            pos.y = self->targetY;
        }
        FUN_02030658(self, &pos);
    }

    if ((*self->f48 & 8) ? E1 : E0) {
        if (FUN_02033704() || (self->flags & 2)) {
            FUN_020819d8(self);
        } else if (!((*self->f48 & 4) ? E1 : E0)) {
            int count, ticks, i;
            FUN_020316e8(key, DAT_02108c64 + 0x14);
            count = self->count;
            ticks = self->ticks;
            if ((u32)ticks < (u32)(count * 10)) {
                if (ticks % 3 == 0 && ticks < count * 3) {
                    spawn1 = self->pos;
                    FUN_02033658(0, 9, &spawn1);
                }
                for (i = 0; i < self->count; i++) {
                    if (self->ticks == (int)self->particles[i].delay - 2) {
                        Entry *entry;
                        FUN_020302e8(&spawn2, self);
                        entry = FUN_0204f4c0(FUN_0204f3b8(), key, self->f54 - i);
                        if (entry && entry->sub) {
                            entry->sub->pos = spawn2;
                        }
                    }
                }
                self->ticks++;
            }
            if (self->particles) {
                for (i = 0; i < self->count; i++) {
                    Particle *pt = &self->particles[i];
                    if (pt->delay >= (u32)self->ticks || pt->state == 5) {
                        continue;
                    }
                    pt->y -= 0x1ec;
                    entry = FUN_0204f4c0(FUN_0204f3b8(), key, self->f54 - i);
                    if (entry && entry->sub) {
                        if (self->particles[i].state < 4) {
                            bounce = entry->sub->pos;
                            bounce.x += self->particles[i].x;
                            bounce.y += self->particles[i].y;
                            if (bounce.y < 0) {
                                self->particles[i].x = (int)(((long long)self->particles[i].x * 0xccd + 0x800LL) >> 12);
                                self->particles[i].y = -(int)(((long long)self->particles[i].y * 0xccd + 0x800LL) >> 12);
                                self->particles[i].z = (int)(((long long)self->particles[i].z * 0xccd + 0x800LL) >> 12);
                                bounce.y = 0;
                                self->particles[i].state++;
                            }
                            bounce.z += self->particles[i].z;
                            entry->sub->pos = bounce;
                        } else {
                            self->doneCount++;
                            self->particles[i].state = 5;
                        }
                    } else {
                        self->doneCount++;
                        self->particles[i].state = 5;
                    }
                }
            }
            if (self->doneCount == self->count) {
                *self->f48 |= 4;
            }
        }
    }

    {
        u16 marker = FUN_02032854(DAT_02108c64);
        int a = 0xc;
        int b = 0xe;
        if (self->f44[9] == 1) {
            a = 0xd;
            b = 0xf;
        }
        if ((u32)(mode - 1) <= 2) {
            FUN_020302e8(&map1, self);
            FUN_overlay_4__0212a980(FUN_overlay_4__02129ed4(), b);
            FUN_overlay_4__0212a3cc(FUN_overlay_4__02129ed4(), map1.x, map1.z, a, marker);
        } else if ((u32)(mode - 4) <= 1) {
            FUN_020302e8(&map2, self);
            FUN_overlay_4__0212a980(FUN_overlay_4__02129ed4(), a);
            FUN_overlay_4__0212a3cc(FUN_overlay_4__02129ed4(), map2.x, map2.z, b, marker);
        }
    }

    FUN_02081cf8(self);
    FUN_0203041c(self);
}
