//cpp
// flags: -O4,s

struct Vec3 {
    union {
        struct { int x, y, z; };
        int w[3];
    };
};

struct Trail {
    Vec3 pos0;
    Vec3 pos1;
    Vec3 vel;
    int h0;
    int h1;
    unsigned int timer;
    int active;
};

struct Effect {
    char pad00[0x5c];
    Vec3 pos;
    unsigned short angle;
    char pad6a[0x7a];
    int flags;
};

struct Self {
    char pad00[0xd4];
    int f_d4;
    int state;
    int trail_active;
    int mode;
    int f_e4;
    char pad_e8[0x5c];
    Vec3 pos_a;     // 0x144
    Vec3 vel;       // 0x150
    Vec3 pos_b;     // 0x15c (y at 0x160)
    unsigned short angle; // 0x168
    unsigned short pad_16a;
    int speed;      // 0x16c
    int dist;       // 0x170
    Trail trails[5]; // 0x174 .. 0x278 (5 * 0x34 = 0x104)
    int hit_handle; // 0x278
    int eff_handle; // 0x27c
};

extern "C" {
extern int DAT_021a11c0[];
extern int DAT_021a11f8;
extern int DAT_021a11fc;
extern int DAT_020fc988;
extern Vec3 DAT_021a1224;
extern void FUN_02072724(void *, int);
extern void FUN_0204b4d4(void *);
extern void FUN_02075068(void *, int);
extern void FUN_02091cc0(Vec3 *, Vec3 *, const int *);
extern void FUN_02036848(Vec3 *, Vec3 *);
extern void FUN_0204bf88(void *);
extern void FUN_02072750(void *, int, Vec3 *);
extern void FUN_020b3b30(Vec3 *, Vec3 *);
extern void FUN_overlay_21__02198284(void *);
extern Effect *FUN_02075040(void *, int);
extern int FUN_0207281c(void *, int);
extern int FUN_02074e9c(void *, int, int, int);
extern int FUN_02075090(void *);
extern int FUN_02072650(void *, int, int, int);
extern int FUN_02075054(void *, int);

void FUN_overlay_21__02198a9c(Self *self) {
    Vec3 tmp1, tmp2, tmp3, tmp4, tmp5, tmp6;

    if (!self->f_e4 && self->f_d4 == 1) {
        self->f_e4 = 1;
    }

    if (self->state == 0) {
    } else if (self->state == 1) {
        int changed = 0;
        int ge = !(self->dist < DAT_021a11c0[18]);
        if (ge != 0) {
            FUN_02072724(self, self->hit_handle);
            self->hit_handle = -1;
            Effect *eff = FUN_02075040(self, self->eff_handle);
            if (eff && self->mode != 2) {
                eff->flags |= 0x20;
                FUN_0204b4d4(eff);
            }
            self->state = 3;
            self->dist = DAT_020fc988;
            changed = 1;
        } else if (FUN_0207281c(self, self->hit_handle) > 0) {
            if (self->mode == 2) {
                FUN_02072724(self, self->hit_handle);
                self->hit_handle = -1;
                self->state = 4;
                self->dist = DAT_020fc988;
                FUN_02091cc0(&tmp1, &self->vel, &DAT_021a11f8);
                self->vel = tmp1;
                self->vel.y = DAT_021a11c0[13];
                changed = 1;
            } else if (self->mode == 0) {
                FUN_02075068(self, self->eff_handle);
                self->eff_handle = -1;
                FUN_02072724(self, self->hit_handle);
                self->hit_handle = -1;
                self->state = 2;
                self->dist = DAT_020fc988;
                self->eff_handle = FUN_02074e9c(self, 5, 0, 0);
                Effect *eff = FUN_02075040(self, self->eff_handle);
                if (eff) {
                    FUN_02091cc0(&tmp2, &self->vel, &DAT_021a11fc);
                    FUN_02036848(&self->pos_b, &tmp2);
                    self->pos_b.y = DAT_020fc988;
                    eff->pos = self->pos_b;
                    eff->flags |= 0x4000;
                }
                changed = 1;
            }
        }
        if (!changed) {
            self->dist += self->speed;
            FUN_02091cc0(&tmp3, &self->vel, &self->speed);
            FUN_02036848(&self->pos_a, &tmp3);
            FUN_02091cc0(&tmp4, &self->vel, &self->speed);
            FUN_02036848(&self->pos_b, &tmp4);
            Effect *eff = FUN_02075040(self, self->eff_handle);
            if (eff) {
                eff->pos = self->pos_b;
                if (self->mode == 2) {
                    self->angle += 0x2000;
                    eff->angle = self->angle;
                    FUN_0204bf88(eff);
                }
                FUN_02072750(self, self->hit_handle, &self->pos_a);
            }
        }
    } else if (self->state == 2) {
        if (FUN_02075090(self)) {
            FUN_02075068(self, self->eff_handle);
            self->eff_handle = -1;
            self->state = 0;
        }
    } else if (self->state == 3) {
        if (self->mode == 2) {
            FUN_02091cc0(&tmp5, &self->vel, &self->speed);
            FUN_02036848(&self->pos_b, &tmp5);
            FUN_020b3b30(&self->vel, &DAT_021a1224);
            Effect *eff = FUN_02075040(self, self->eff_handle);
            if (eff) {
                eff->pos = self->pos_b;
                self->angle += 0x2000;
                eff->angle = self->angle;
                FUN_0204bf88(eff);
                int lt = !(self->pos_b.y >= DAT_021a11c0[10]);
                if (lt != 0) {
                    FUN_02072724(self, self->hit_handle);
                    self->hit_handle = -1;
                    FUN_02075068(self, self->eff_handle);
                    self->eff_handle = -1;
                    self->state = 0;
                }
            }
        } else {
            Effect *eff = FUN_02075040(self, self->eff_handle);
            if (eff) {
                FUN_02091cc0(&tmp6, &self->vel, &self->speed);
                FUN_02036848(&self->pos_b, &tmp6);
                eff->pos = self->pos_b;
            } else {
                FUN_02075068(self, self->eff_handle);
                self->eff_handle = -1;
                self->state = 0;
            }
        }
    } else if (self->state == 4) {
        FUN_02036848(&self->pos_b, &self->vel);
        FUN_020b3b30(&self->vel, &DAT_021a1224);
        self->angle += 0x2000;
        Effect *eff = FUN_02075040(self, self->eff_handle);
        if (eff) {
            eff->pos = self->pos_b;
            eff->angle = self->angle;
            FUN_0204bf88(eff);
        }
        {
            int lt1 = !(self->pos_b.y >= DAT_021a11c0[11]);
            if (lt1 != 0 && self->hit_handle == -1) {
                self->pos_a = self->pos_b;
                self->pos_a.y = 0;
                self->hit_handle = FUN_02072650(self, 7, 0, 0);
                FUN_02072750(self, self->hit_handle, &self->pos_a);
            }
        }
        {
            int lt2 = !(self->pos_b.y >= DAT_021a11c0[10]);
            if (lt2 != 0) {
                FUN_02072724(self, self->hit_handle);
                self->hit_handle = -1;
                FUN_02075068(self, self->eff_handle);
                self->eff_handle = -1;
                self->state = 0;
            }
        }
    } else if (self->state == 5) {
        if (FUN_02075054(self, self->eff_handle)) {
            FUN_02072724(self, self->hit_handle);
            self->hit_handle = -1;
            FUN_02075068(self, self->eff_handle);
            self->eff_handle = -1;
            self->state = 0;
        }
    }

    if (self->trail_active) {
        int active = 0;
        for (int i = 0; i < 5; i++) {
            if (self->trails[i].active) {
                FUN_02036848(&self->trails[i].pos0, &self->trails[i].vel);
                FUN_02036848(&self->trails[i].pos1, &self->trails[i].vel);
                Effect *eff = FUN_02075040(self, self->trails[i].h1);
                if (eff) {
                    eff->pos = self->trails[i].pos1;
                }
                FUN_02072750(self, self->trails[i].h0, &self->trails[i].pos0);
                self->trails[i].timer++;
                if (self->trails[i].timer >= 60 || FUN_0207281c(self, self->hit_handle) > 0) {
                    FUN_02075068(self, self->trails[i].h1);
                    FUN_02072724(self, self->trails[i].h0);
                    FUN_overlay_21__02198284(&self->trails[i]);
                } else {
                    active = 1;
                }
            }
        }
        if (!active) {
            self->trail_active = 0;
        }
    }
}
}
