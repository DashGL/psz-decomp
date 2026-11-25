//cpp
// flags: -O4,s
struct Vec {
    union {
        struct { int x, y, z; };
        int w[3];
    };
};

struct CameraObj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17();
    virtual void shake(int, int);
};

struct Camera {
    char pad[0x5c];
    CameraObj *obj;
};

struct Obj {
    unsigned int pad0[4];
    Vec pos;
    unsigned int pad1[3];
    unsigned short rx, ry, rz;
    unsigned short pad2;
    Vec saved_pos;
    unsigned short srx, sry, srz;
    unsigned short pad3;
    int state;
    int timer;
    unsigned int pad4[4];
    signed char p0, p1;
    unsigned short pad5;
    unsigned int pad6[16];
    int vis;
    unsigned int pad7[2];
    int fx_id;
    Vec fx_pos;
};

extern "C" {
extern short DAT_020ed83c[];
extern Camera *DAT_02108c84;
extern int FUN_0205c520(int, int);
extern int FUN_overlay_22__0219a408(int, int);
extern int FUN_overlay_22__0219a860(void);
extern int FUN_overlay_22__0219ad48(void *);
extern int FUN_overlay_22__0219ae68(void *, int, int, const Vec *);
extern unsigned short FUN_0205c9e4(int, int);
extern unsigned short FUN_overlay_22__0219a3f0(int, int, int);
extern void FUN_overlay_22__0219ae34(void *, int);
extern Vec FUN_02036348(const Vec &, const Vec &);
extern Vec FUN_02083d30(const int &, const Vec &);
extern Vec FUN_0203647c(const Vec &, const Vec &);
extern void FUN_overlay_22__0219aa30(void *, const Vec *, unsigned short, unsigned short, unsigned short);
extern void FUN_overlay_22__0219ace0(void *, int, int);
extern void FUN_overlay_22__0219ad2c(void *);
extern void FUN_overlay_22__0219ad08(void *, int, int);
extern void FUN_overlay_22__0219aea0(void *, int *);
extern void FUN_overlay_22__0219ce4c(void *, int, const Vec *, int);
extern void FUN_overlay_22__0219cb68(void *, int, int);

#define TO_FX(v) ((int)(((v) > 0) ? (0.5f + (float)((v) << 12)) : ((float)((v) << 12) - 0.5f)))

void FUN_overlay_22__0219dd74(Obj *self) {
    int tx = self->p0 << 12;
    int tz = self->p1 << 12;
    int sx = self->saved_pos.x;
    int sz = self->saved_pos.z;

    if (self->timer <= 14) {
        unsigned short yaw = FUN_0205c9e4(tx - self->pos.x, tz - self->pos.z);
        if (self->timer == 14) {
            self->ry = yaw;
        } else {
            self->ry = FUN_overlay_22__0219a3f0(self->ry, yaw, 2048);
        }
        FUN_overlay_22__0219ae34(self, 3);
    } else if (self->timer >= 15 && self->timer <= 59) {
        int t = self->timer - 15; int factor = FUN_0205c520(TO_FX(t), 45 << 12);
        Vec end; end.x = sx; end.y = 0; end.z = sz;
        self->pos = FUN_0203647c(FUN_02083d30(factor, FUN_02036348(end, self->saved_pos)), self->saved_pos);
        self->rx += (unsigned short)(FUN_overlay_22__0219a408(self->rx, 0x3800) / 2);
        self->rz = 0;
        FUN_overlay_22__0219ae34(self, 3);
    } else if (self->timer >= 60 && self->timer <= 104) {
        int t = self->timer - 60; int factor = FUN_0205c520(TO_FX(t), 45 << 12);
        Vec start; start.x = sx; start.y = 0; start.z = sz;
        Vec end; end.x = sx; end.y = -40960; end.z = sz;
        self->pos = FUN_0203647c(FUN_02083d30(factor, FUN_02036348(end, start)), start);
        self->rx = 0x3800;
        self->rz = 0;
        FUN_overlay_22__0219ae34(self, 3);
    } else if (self->timer >= 105 && self->timer <= 194) {
        int t = self->timer - 105; int factor = FUN_0205c520(TO_FX(t), 90 << 12);
        Vec start; start.x = sx; start.y = -40960; start.z = sz;
        Vec end; end.x = tx; end.y = -40960; end.z = tz;
        self->pos = FUN_0203647c(FUN_02083d30(factor, FUN_02036348(end, start)), start);
        self->rx = 0;
        FUN_overlay_22__0219ae34(self, 3);
    } else if (self->timer >= 195 && self->timer <= 254) {
        int t = self->timer - 195; int factor = FUN_0205c520(TO_FX(t), 60 << 12);
        Vec start; start.x = tx; start.y = -40960; start.z = tz;
        Vec end; end.x = tx; end.y = 0; end.z = tz;
        self->pos = FUN_0203647c(FUN_02083d30(factor, FUN_02036348(end, start)), start);
        self->rx = 0xc800;
        self->rz = 0;
        FUN_overlay_22__0219ae34(self, 3);
    } else if (self->timer >= 255 && self->timer <= 299) {
        int t = self->timer - 255; int factor = FUN_0205c520(TO_FX(t), 45 << 12);
        Vec start; start.x = tx; start.y = 0; start.z = tz;
        Vec end; end.x = tx; end.y = 8192; end.z = tz;
        self->pos = FUN_0203647c(FUN_02083d30(factor, FUN_02036348(end, start)), start);
        self->rx += (unsigned short)(FUN_overlay_22__0219a408(self->rx, 0) / 2);
        self->rz = 0;
        if (self->timer == 255) {
            FUN_overlay_22__0219ae34(self, 4);
        }
    }

    FUN_overlay_22__0219aa30(self, &self->pos, self->rx, self->ry, self->rz);

    if (FUN_overlay_22__0219a860() == 1) {
        self->vis = 1;
    } else if (self->timer >= 15 && self->timer <= 59) {
        self->vis = (self->timer & 1) ? 1 : 0;
    } else if (self->timer >= 60 && self->timer <= 254) {
        self->vis = 0;
    } else {
        self->vis = 1;
    }

    if (self->timer == 255) {
        FUN_overlay_22__0219ace0(self, 0, 0);
    } else if (self->timer == 299) {
        FUN_overlay_22__0219ad2c(self);
    }

    if (FUN_overlay_22__0219ad48(self) == 1) {
        FUN_overlay_22__0219ad08(self, self->pos.x, self->pos.z);
    }

    if (self->timer == 15 || self->timer == 210) {
        int first = 0, second = 0;
        switch (self->timer) {
        case 15:
            first = 12288;
            second = 15360;
            break;
        case 210:
            first = -4096;
            second = -4096;
            break;
        }
        Vec position;
        position.x = self->pos.x + (int)(((long long)first * DAT_020ed83c[((int)self->ry >> 4) * 2] + 2048) >> 12);
        position.y = 0;
        position.z = self->pos.z + (int)(((long long)first * DAT_020ed83c[((int)self->ry >> 4) * 2 + 1] + 2048) >> 12);
        FUN_overlay_22__0219aea0(self, &self->fx_id);
        self->fx_pos = position;
        self->fx_id = FUN_overlay_22__0219ae68(self, 8, 1, &position);
        int variant = 0;
        if (self->timer == 15) {
            variant = 0;
        } else if (self->timer == 210) {
            variant = 1;
        }
        Vec impact;
        impact.x = self->pos.x + (int)(((long long)second * DAT_020ed83c[((int)self->ry >> 4) * 2] + 2048) >> 12);
        impact.y = 0;
        impact.z = self->pos.z + (int)(((long long)second * DAT_020ed83c[((int)self->ry >> 4) * 2 + 1] + 2048) >> 12);
        FUN_overlay_22__0219ce4c(self, variant, &impact, 150);
        if (DAT_02108c84) {
            if (DAT_02108c84->obj) {
                DAT_02108c84->obj->shake(8192, 30);
            }
        }
    }

    if (self->timer == 90 || self->timer == 255) {
        if (self->timer == 255) {
            FUN_overlay_22__0219ae68(self, 9, 0, &self->fx_pos);
        }
        FUN_overlay_22__0219aea0(self, &self->fx_id);
    }

    if (self->timer >= 299) {
        FUN_overlay_22__0219cb68(self, 10, 0);
    }
}
}
