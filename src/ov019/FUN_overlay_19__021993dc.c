// flags: -O4,s
typedef struct { int x, y, z; } Vec;
typedef struct { int m[12]; } Mat43;
typedef struct { int m[9]; } Mat33;

#define I(p, o) (*(int *)((char *)(p) + (o)))
#define H(p, o) (*(unsigned short *)((char *)(p) + (o)))
#define V(p, o) (*(Vec *)((char *)(p) + (o)))

extern Vec DAT_0219cd4c;
extern int DAT_0219d174, DAT_020fc988, DAT_020ed0a0, DAT_0219d1e8, DAT_0219d1ec;
extern void *FUN_02036c88(void *, int);
extern void *FUN_02075040(void *, int);
extern int FUN_0204260c(void *, int, Mat43 *, Mat33 *);
extern int FUN_0205c86c(const Vec *);
extern int FUN_02074e9c(void *, int, int, int);
extern int FUN_02072650(void *, int, int, int);
extern int FUN_02036c34(void *);
extern unsigned short FUN_0205c9e4(int, int);
extern void FUN_0200c938(void *, int);
extern void FUN_0205b960(Vec *, const Mat43 *, Vec *);
extern void FUN_0205b0f0(Vec *, const Mat33 *, Vec *);
extern void FUN_020345f0(Vec *, const Vec *);
extern void FUN_02036348(Vec *, const Vec *, const Vec *);
extern void FUN_020bbfbc(Vec *, unsigned short);
extern void FUN_0203647c(Vec *, const Vec *, const Vec *);
extern void FUN_020bc5cc(int *, const int *, const int *);
extern void FUN_0208e78c(Vec *, const int *, const int *, const int *);
extern void FUN_0204bf88(void *);
extern void FUN_02072750(void *, int, const Vec *);
extern void FUN_020727e0(void *, int, int, int, int);

void FUN_overlay_19__021993dc(void *self, void *owner)
{
    if (I(self, 0x20) <= I(self, 0x3c)) {
        Vec start;
        Vec end;
        Vec scale;
        Vec scale2;
        Mat43 matrix;
        Mat33 rotation;
        Vec local;
        Vec axis;
        Vec copy_axis;
        Vec offset;
        Vec delta2;
        Vec horizontal;
        Vec center;
        Vec copy_start;
        Vec adjusted;
        Vec delta1;
        Vec tmp_scale;
        Vec tmp_scale2;
        Vec unused;
        Vec rotated;
        Vec half;
        volatile int travel;
        int fade;
        int depth;
        int width;
        int time;
        int sx;
        int x;
        int sy;
        int y;
        int sz;
        int z;
        int one;
        int z_tmp;
        int x_tmp;
        unsigned short pitch;
        unsigned short yaw;
        int length;

        start = V(self, 0x40);
        end = V(self, 0x4c);
        if (I(self, 0x74) == 1 || I(self, 0x78) == 1) {
            void *model = FUN_02036c88(owner, 0);
            if (!model || !FUN_0204260c(model, 1, &matrix, &rotation)) {
                return;
            }
            FUN_0200c938(&local, 12);
            FUN_0205b960(&local, &matrix, &local);
            axis = DAT_0219cd4c;
            FUN_0205b0f0(&axis, &rotation, &axis);
            if (I(self, 0x74) == 1) {
                FUN_020345f0(&copy_start, &local);
                start = copy_start;
            }
            if (I(self, 0x78) == 1) {
                unsigned short boneYaw, oldYaw;
                FUN_020345f0(&copy_axis, &axis);
                boneYaw = FUN_0205c9e4(copy_axis.x, copy_axis.z);
                FUN_02036348(&offset, &V(self, 0x4c), &V(self, 0x40));
                oldYaw = FUN_0205c9e4(offset.x, offset.z);
                FUN_020bbfbc(&offset, (unsigned short)(0x10000 - oldYaw));
                FUN_020bbfbc(&offset, boneYaw);
                FUN_0203647c(&adjusted, &start, &offset);
                end = adjusted;
            }
        }
        FUN_02036348(&delta1, &end, &start);
        length = FUN_0205c86c(&delta1);
        time = I(self, 0x20);
        FUN_020bc5cc((int *)&travel, &time, &DAT_0219d174);
        { int flg = (travel >= length); if (flg != 0) {
            travel = length;
        } }
        fade = 4096;
        if (10 * I(self, 0x20) > 9 * I(self, 0x3c)) {
            fade = (40960 * (I(self, 0x3c) - I(self, 0x20))) / I(self, 0x3c);
            { int flg = (fade > *(volatile int *)&DAT_020fc988); fade = *(flg != 0 ? &fade : &DAT_020fc988); }
        }
        z = I(self, 0x60);
        y = I(self, 0x5c);
        x = I(self, 0x58);
        FUN_020bc5cc(&sx, &fade, &x);
        FUN_020bc5cc(&sy, &fade, &y);
        FUN_020bc5cc(&sz, (int *)&travel, &z);
        FUN_0208e78c(&tmp_scale, &sx, &sy, &sz);
        scale = tmp_scale;

        FUN_02036348(&delta2, &end, &start);
        yaw = FUN_0205c9e4(delta2.x, delta2.z);
        horizontal = delta2;
        horizontal.y = DAT_020fc988;
        length = FUN_0205c86c(&horizontal);
        pitch = (unsigned short)(0x10000 - FUN_0205c9e4(delta2.y, length));
        one = 4096;
        FUN_0208e78c(&tmp_scale2, &fade, &fade, &one);
        scale2 = tmp_scale2;
        FUN_0208e78c(&unused, &fade, &fade, &fade);

        if (I(self, 0x30) == -1) {
            { int id = 3; if (I(self, 0x68) == 0) id = 16; I(self, 0x30) = FUN_02074e9c(owner, id, 1, 0); }
        }
        {
            void *effect = FUN_02075040(owner, I(self, 0x30));
            if (effect) {
                V(effect, 0x5c) = start;
                V(effect, 0x50) = scale;
                H(effect, 0x6a) = yaw;
                FUN_0204bf88(effect);
                H(effect, 0x68) = pitch;
                FUN_0204bf88(effect);
            }
        }
        if (I(self, 0x6c) == 1) {
            if (I(self, 0x34) == -1) {
                { int id = 9; if (I(self, 0x68) == 0) id = 10; I(self, 0x34) = FUN_02074e9c(owner, id, 1, 0); }
            }
            {
                void *effect = FUN_02075040(owner, I(self, 0x34));
                if (effect) {
                    V(effect, 0x5c) = start;
                    V(effect, 0x50) = scale2;
                    H(effect, 0x6a) = yaw;
                    FUN_0204bf88(effect);
                    H(effect, 0x68) = pitch;
                    FUN_0204bf88(effect);
                }
            }
        }
        if (I(self, 0x64) != -1) {
            if (I(self, 0x38) == DAT_020ed0a0) {
                I(self, 0x38) = FUN_02072650(owner, I(self, 0x64), 0, 0);
            }
            z_tmp = scale.z;
            FUN_020bc5cc(&depth, &DAT_0219d1e8, &z_tmp);
            x_tmp = scale.x;
            FUN_020bc5cc(&width, &DAT_0219d1ec, &x_tmp);
            half.x = 0;
            half.y = 0;
            half.z = depth / 2;
            rotated = half;
            FUN_020bbfbc(&rotated, yaw);
            FUN_0203647c(&center, &start, &rotated);
            FUN_02072750(owner, I(self, 0x38), &center);
            FUN_020727e0(owner, I(self, 0x38), width, depth, yaw);
        }
    } else {
        I(self, 0x1c) = 1;
    }
    I(self, 0x20) += FUN_02036c34(owner);
}
