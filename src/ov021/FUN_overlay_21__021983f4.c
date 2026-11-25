//cpp
// flags: -O4,s
#pragma block_assign on
#pragma always_inline on

struct Vec3 {
    int x, y, z;
};

struct Record {
    Vec3 pos1;
    Vec3 pos2;
    Vec3 vel;
    int hitId;
    int effId;
    int f2c;
    int f30;
};

struct Effect {
    unsigned char pad00[0x50];
    Vec3 scale;
    Vec3 pos;
    unsigned char pad68[2];
    unsigned short yaw;
    unsigned char pad6c[0x78];
    unsigned int flags;
};

struct Owner {
    unsigned char pad00[0x88];
    unsigned int value;
};

struct Self {
    unsigned char pad00[0x10];
    Owner *owner;
    unsigned char pad14[0x24];
    Vec3 pos;
    unsigned short yaw;
    unsigned char pad46[0x92];
    int state0;
    int state1;
    int attackType;
    int tableRow;
    unsigned char padE8[0x2c];
    int flag114;
    unsigned char pad118[0x2c];
    Vec3 hitPos;
    Vec3 dir;
    Vec3 effPos;
    unsigned short f168;
    unsigned short pad16a;
    int f16c;
    int f170;
    Record records[5];
    int mainHitId;
    int mainEffId;
};

extern "C" {
extern const unsigned int DAT_overlay_21__0219fff4[][3];
extern const short DAT_020ed83c[];
extern int DAT_overlay_21__021a1200;
extern int DAT_overlay_21__021a1204;
extern int DAT_overlay_21__021a11c0[];
extern int UNK_overlay_21__021a11c0[];
extern int DAT_overlay_21__021a11d4;
extern Vec3 DAT_overlay_21__021a123c;
extern Vec3 DAT_overlay_21__021a1230;
extern int DAT_020fc988;
extern int DAT_overlay_21__021a11d8;
extern int DAT_overlay_21__021a11dc;

extern Vec3 FUN_02091cc0(const Vec3 &, const int &);
extern void FUN_02036848(Vec3 *, const Vec3 *);
extern int FUN_02072650(void *, int, int, int);
extern int FUN_02074e9c(void *, int, int, int);
extern int FUN_02037578(void *);
extern Effect *FUN_02075040(void *, int);
extern void FUN_02072750(void *, int, const Vec3 *);
extern void FUN_0207278c(void *, int, unsigned short);
extern void FUN_020727b4(void *, int, int);
extern void FUN_02075068(void *, int);
extern void FUN_02072724(void *, int);
extern void *FUN_02090c20(void);
extern void FUN_02090f74(short *, void *, const Vec3 *, int);
extern void FUN_020c193c(int, int, int, int, int);
extern void FUN_0204bf88(void *);
extern void FUN_020991c0(Vec3 *, const int *);
extern void FUN_overlay_21__02198284(void *);
extern unsigned short FUN_02037208(void *, unsigned short);
}

static inline void setVec3(Vec3 &v, int x, int y, int z) { v.x = x; v.y = y; v.z = z; }
static inline int fxSin(unsigned short a) { return DAT_020ed83c[(a >> 4) * 2]; }
static inline int fxCos(unsigned short a) { return DAT_020ed83c[(a >> 4) * 2 + 1]; }
static inline void addEq(Vec3 &dst, const Vec3 &v) {
    FUN_02036848(&dst, &v);
}

extern "C" void FUN_overlay_21__021983f4(Self *self, int mode) {
    if (mode == 0 && self->state0 == 0) {
        unsigned int sum = 0;
        int i = 0;
        unsigned int value = self->owner->value;
        for (; i < 3; i++) {
            unsigned int weight = DAT_overlay_21__0219fff4[self->tableRow][i];
            if (weight != 0) {
                sum += weight;
                if (value < sum) {
                    self->attackType = i;
                    break;
                }
            }
        }

        Vec3 origin = self->pos;
        unsigned short angle = self->yaw;
        Vec3 forward;
        int idx = ((int)angle >> 4) << 1;
        forward.x = DAT_020ed83c[idx];
        forward.y = 0;
        forward.z = DAT_020ed83c[idx + 1];

        self->hitPos = origin;
        if (self->attackType == 2) {
            addEq(self->hitPos, FUN_02091cc0(forward, DAT_overlay_21__021a1200));
        } else {
            addEq(self->hitPos, FUN_02091cc0(forward, DAT_overlay_21__021a1204));
        }

        self->effPos = origin;
        self->effPos.y = DAT_overlay_21__021a11c0[19];
        self->dir = forward;

        int sound = 0;
        if (self->flag114 != 0) {
            self->mainHitId = FUN_02072650(self, 14, 0, 0);
            self->mainEffId = FUN_02074e9c(self, 7, 0, 0);
            addEq(self->hitPos, FUN_02091cc0(forward, DAT_overlay_21__021a11d4));
            FUN_02072750(self, self->mainHitId, &self->hitPos);
            FUN_0207278c(self, self->mainHitId, angle);
            {
                short screen[2];
                FUN_02090f74(screen, FUN_02090c20(), &origin, 1);
                FUN_020c193c(26, 4, screen[0], screen[1], 4);
            }
            Effect *effect = FUN_02075040(self, self->mainEffId);
            if (effect != 0) {
                effect->pos = self->effPos;
                effect->yaw = angle;
                FUN_0204bf88(effect);
                effect->scale = DAT_overlay_21__021a123c;
            }
            self->attackType = 0;
            self->state0 = 5;
        } else {
            switch (self->attackType) {
            case 0:
                self->mainHitId = FUN_02072650(self, 5, 0, 0);
                self->mainEffId = FUN_02074e9c(self, 0, 0, 0);
                self->f16c = DAT_overlay_21__021a11c0[22];
                sound = 12;
                break;
            case 1:
                self->mainHitId = FUN_02072650(self, 6, 0, 0);
                self->mainEffId = FUN_02074e9c(self, 8, 0, 0);
                self->f16c = DAT_overlay_21__021a11c0[21];
                sound = 12;
                break;
            case 2:
                self->mainHitId = FUN_02072650(self, 7, 0, 0);
                self->mainEffId = FUN_02074e9c(self, 1, 0, 0);
                self->f16c = DAT_overlay_21__021a11c0[20];
                sound = 8;
                break;
            }
            FUN_02072750(self, self->mainHitId, &self->hitPos);
            {
                short screen[2];
                FUN_02090f74(screen, FUN_02090c20(), &origin, 1);
                FUN_020c193c(26, sound, screen[0], screen[1], 4);
            }
            self->f168 = 0;
            Effect *effect = FUN_02075040(self, self->mainEffId);
            if (effect != 0) {
                effect->pos = self->effPos;
                effect->yaw = angle;
                FUN_0204bf88(effect);
                effect->flags |= 2;
                int kind = FUN_02037578(self);
                if (self->attackType == 1 && kind == 2) {
                    FUN_020727b4(self, self->mainHitId, DAT_overlay_21__021a11c0[8]);
                    effect->scale = DAT_overlay_21__021a1230;
                }
            }
            self->f170 = DAT_020fc988;
            self->state0 = 1;
        }
    }

    if (mode == 1 && self->state1 == 0) {
        Vec3 point = self->pos;
        int any = 0;
        unsigned short yaw = self->yaw;
        for (int i = 0; i < 5; i++) {
            unsigned short angle = (unsigned short)(yaw + 0x5555);
            angle = (unsigned short)(angle + (unsigned short)(i * 0x0e38));
            angle = (unsigned short)(angle + FUN_02037208(self, 0x1c71));
            Vec3 forward;
            setVec3(forward, fxSin(angle), 0, fxCos(angle));
            addEq(point, FUN_02091cc0(forward, DAT_overlay_21__021a11d8));
            self->records[i].pos1 = point;
            point.y = DAT_overlay_21__021a11c0[9];
            self->records[i].pos2 = point;
            self->records[i].vel = FUN_02091cc0(forward, UNK_overlay_21__021a11c0[0]);
            self->records[i].hitId = FUN_02072650(self, 12, 0, 0);
            self->records[i].effId = FUN_02074e9c(self, 6, 0, 0);
            if (self->records[i].hitId != -1 && self->records[i].effId != -1) {
                FUN_02072750(self, self->records[i].hitId, &self->records[i].pos1);
                Effect *effect = FUN_02075040(self, self->records[i].effId);
                if (effect != 0) {
                    effect->pos = self->records[i].pos2;
                    effect->yaw = angle;
                    FUN_0204bf88(effect);
                    Vec3 size = effect->scale;
                    FUN_020991c0(&size, &DAT_overlay_21__021a11dc);
                    effect->scale = size;
                    effect->flags |= 2;
                }
                self->records[i].f2c = 0;
                self->records[i].f30 = 1;
                any = 1;
            } else {
                if (self->records[i].effId != -1) {
                    FUN_02075068(self, self->records[i].effId);
                }
                if (self->records[i].hitId != -1) {
                    FUN_02072724(self, self->records[i].hitId);
                }
                FUN_overlay_21__02198284(&self->records[i]);
            }
        }
        if (any != 0) {
            self->state1 = 1;
        }
    }
}
