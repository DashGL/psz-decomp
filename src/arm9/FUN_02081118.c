// flags: -O4,s
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef long long s64;
typedef signed char s8;

enum { E0 = 0, E1 = 1 };

typedef struct {
    int x, y, z;
} Vec;

typedef struct {
    int x, y, z;
    u32 delay;
    u16 state, pad;
} Particle;

typedef struct {
    u8 pad00[0x1c];
    Vec pos;
    u16 pad28[2];
    u16 angle;
    u8 pad2e[0x16];
    s8 *f44;
    u8 *f48;
    u32 pad4c;
    u32 flags;
    u8 f54;
    u8 pad55[7];
    int count;
    Particle *particles;
    u16 a100[20];
    u16 a140[20];
    u8 padb4[4];
    int f184;
    int f188;
} Self;

extern char *UNK_02108c64;
extern char *UNK_0210e240;
extern u64 UNK_0211c844[];
extern short UNK_020ed83c[];

extern int FUN_02033704(void);
extern int FUN_0209af3c(int);
extern int FUN_0209aea4(int, int, void *);
extern int FUN_020509bc(void *, void *);
extern int FUN_02050adc(void *, void *);
extern int FUN_02050b8c(void *, int);
extern void FUN_02033658(int, int, Vec *);
extern void FUN_02035408(Vec *, int, int, int);
extern void FUN_02030658(void *, Vec *);
extern void FUN_02081900(void *, int, int, int);
extern void FUN_020316e8(void *, void *);
extern void FUN_020302e8(Vec *, void *);
extern void FUN_0204f4a0(void *, void *, Vec *, void *, int);
extern void *FUN_0204f3b8(void);
extern void *FUN_02081534(void *);

#pragma thumb off
extern void *FUN_0200c2dc(u32, u32, u32, void *(*)(void *), void *);
#pragma thumb on

#define FX_MUL(a, b) ((int)(((s64)(a) * (b) + 0x800LL) >> 12))

void FUN_02081118(Self *self, int action)
{
    Vec sound1;
    Vec pos1;
    Vec sound2;
    Vec pos2;
    u32 item[4];
    Vec p2;
    Vec p1;
    Vec base;
    u8 key[4];

    if (action == 0) {
        if (FUN_02033704()) {
            return;
        }
        sound1 = self->pos;
        FUN_02033658(0, 9, &sound1);
        base = self->pos;
        p1 = base;
        p2 = base;
        FUN_02035408(&pos1, p2.x, self->f188 - 6758, p1.z);
        FUN_02030658(self, &pos1);
        self->f184 = 1126;
        FUN_02081900(self, 1, 0, 4096);
    } else if (action == 1) {
        if (!FUN_02033704()) {
            sound2 = self->pos;
            FUN_02033658(4, 0, &sound2);
            FUN_02081900(self, 0, self->f188 + 4096, 6144);
        } else {
            self->flags |= 2;
        }
    } else if (action == 2 && !((*self->f48 & 8) ? E1 : E0)) {
        int i;

        for (i = 0; i < 20; i++) {
            self->a100[i] = 3640;
        }
        FUN_020316e8(key, UNK_02108c64 + 20);
        self->count = FUN_0209af3c(self->f44[9]);
        if (self->count > 20) {
            self->count = 20;
        }
        self->particles = (Particle *)FUN_0200c2dc(self->count, 20, 0, FUN_02081534, 0);
        if (self->particles) {
        int halfHigh;
        int halfLow;
        int j;
        halfHigh = self->count / 2 + self->count % 2;
        halfLow = self->count / 2 - 1;
        for (j = 0; j < self->count; j++) {
            u64 random;
            int count;
            random = UNK_0211c844[1] * UNK_0211c844[0] + UNK_0211c844[2];
            UNK_0211c844[0] = random;
            self->particles[j].delay = (u32)(((random >> 32) * 10ULL) >> 32);
            FUN_020302e8(&pos2, self);
            if (self->particles[j].delay >= 2) {
                pos2.y -= 4096;
            }
            count = self->count;
            if (count > 7) {
                if (j < halfLow) {
                    int step = (65536 / halfLow) * (j + 1);
                    u16 angle = (u16)(step + self->angle);
                    short *tr;
                    int z;
                    if (angle > 49152) {
                        angle = (u16)(angle - 49152);
                    } else {
                        angle = (u16)(angle + 16384);
                    }
                    tr = &UNK_020ed83c[((int)angle >> 4) * 2];
                    z = FX_MUL(tr[0], 328);
                    self->particles[j].x = FX_MUL(tr[1], 328);
                    self->particles[j].y = 3277;
                    self->particles[j].z = z;
                } else {
                    int step = (65536 / (halfHigh + 1)) * (j + 1);
                    u16 angle = (u16)(step + self->angle);
                    short *tr = &UNK_020ed83c[((int)angle >> 4) * 2];
                    int z = FX_MUL(tr[0], 451);
                    self->particles[j].x = FX_MUL(tr[1], 451);
                    self->particles[j].y = 3686;
                    self->particles[j].z = z;
                }
            } else {
                u16 angle = (u16)(65536 - self->angle);
                short *tr;
                int z;
                if (count != 1) {
                    int step = (65536 / count) * (j + 1);
                    angle = (u16)(step + self->angle);
                }
                tr = &UNK_020ed83c[((int)angle >> 4) * 2];
                z = FX_MUL(tr[0], 328);
                self->particles[j].x = FX_MUL(tr[1], 328);
                self->particles[j].y = 3277;
                self->particles[j].z = z;
            }
            if (FUN_0209aea4(self->f44[9], j, item)) {
                char *manager;
                FUN_0204f4a0(FUN_0204f3b8(), item, &pos2, key, self->f54 - j);
                manager = UNK_0210e240;
                if (manager) {
                    int kind = FUN_020509bc(manager, item);
                    int index = FUN_02050adc(manager, item);
                    if (FUN_02050b8c(manager, kind)) {
                        self->a100[j] = 7281;
                        self->a100[j] += 364 * index;
                        self->a140[j] = 91;
                    } else {
                        self->a100[j] += 364 * index;
                        self->a140[j] = 91;
                    }
                }
            }
        }
        *self->f48 |= 8;
        }
    }
}
