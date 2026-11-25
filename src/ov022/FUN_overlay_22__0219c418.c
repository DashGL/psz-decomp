// flags: -O4,s
typedef struct { int x, y, z; } Vec;
#define I(p,o) (*(int *)((char *)(p)+(o)))
#define H(p,o) (*(unsigned short *)((char *)(p)+(o)))
#define B(p,o) (*(signed char *)((char *)(p)+(o)))
#define V(p,o) (*(Vec *)((char *)(p)+(o)))

extern int DAT_overlay_22__021a1748[];
extern int DAT_overlay_22__021a11fc[];
extern int DAT_overlay_22__021a1208;
extern int DAT_overlay_22__021a1204;
extern int DAT_020ed09c;
extern Vec DAT_overlay_22__021a1238;
extern Vec DAT_overlay_22__021a1244;

extern int FUN_overlay_22__0219a408(unsigned short, unsigned short);
extern int FUN_02035b60(int);
extern int FUN_overlay_22__0219ad48(void *);
extern int FUN_overlay_22__0219ae68(void *, int, int, const Vec *);
extern void FUN_020b3b30(Vec *, const Vec *);
extern void FUN_02036368(Vec *);
extern void FUN_020991c0(Vec *, const int *);
extern void FUN_02036848(Vec *, const Vec *);
extern void FUN_02035408(Vec *, int, int, int);
extern void FUN_overlay_22__0219a070(void *, int);
extern void FUN_overlay_22__0219aa30(void *, const Vec *, int, int, int);
extern void FUN_overlay_22__0219ace0(void *, int, int);
extern void FUN_overlay_22__0219ad2c(void *);
extern void FUN_overlay_22__0219ad08(void *, int, int);
extern void FUN_overlay_22__0219ae34(void *, int);
extern void FUN_overlay_22__0219ad70(void *, int);
extern void FUN_overlay_22__0219a94c(void *, int, Vec *, const Vec *);
extern void FUN_overlay_22__0219af24(void *, int, int, int);
extern void FUN_overlay_22__0219aed8(void *, int, const Vec *);
extern void FUN_overlay_22__0219aea0(void *, int *);
extern void FUN_overlay_22__0219b274(void *, int, int);

void FUN_overlay_22__0219c418(void *self) {
    int frame, random1, random2;
    Vec v1, v2, v3, v5, v4;
    if (!(DAT_overlay_22__021a1748[5] & 1)) {
        DAT_overlay_22__021a11fc[3] = 0xd55;
        DAT_overlay_22__021a1748[5] |= 1;
    }
    frame = I(self, 0x48);
    if (frame <= 6) {
        H(self, 0x28) += FUN_overlay_22__0219a408(H(self, 0x28), 0xf400) / 2;
    } else if (frame >= 7 && frame <= 24) {
        int z = B(self, 0x5d) * 4096;
        v1.x = B(self, 0x5c) * 4096;
        v1.y = 6144;
        v1.z = z;
        FUN_020b3b30(&v1, &V(self, 0x10));
        FUN_02036368(&v1);
        FUN_020991c0(&v1, &DAT_overlay_22__021a1208);
        FUN_02036848(&V(self, 0x10), &v1);
    } else if (frame >= 25 && frame <= 174) {
        v2.x = B(self, 0x5c) * 4096;
        v2.y = 6144;
        v2.z = B(self, 0x5d) * 4096;
        V(self, 0x10) = v2;
        FUN_overlay_22__0219a070(self, 1);
    } else if (frame >= 175 && frame <= 189) {
        random1 = FUN_02035b60(2048);
        random2 = FUN_02035b60(2048);
        H(self, 0x28) += (unsigned short)(random1 - 1024);
        H(self, 0x2c) += (unsigned short)(random2 - 1024);
        if (!(DAT_overlay_22__021a1748[4] & 1)) {
            DAT_overlay_22__021a11fc[2] = 0x111;
            DAT_overlay_22__021a1748[4] |= 1;
        }
        FUN_02035408(&v3, -I(self, 0x10), -I(self, 0x14), -I(self, 0x18));
        FUN_02036368(&v3);
        FUN_020991c0(&v3, &DAT_overlay_22__021a1204);
        FUN_02036848(&V(self, 0x10), &v3);
        FUN_02035408(&v4,
            (int)(((long long)v3.x * 8192 + 2048) >> 12),
            (int)(((long long)v3.y * 8192 + 2048) >> 12),
            (int)(((long long)v3.z * 8192 + 2048) >> 12));
        V(self, 0x1c) = v4;
    } else if (frame >= 190 && frame <= 219) {
        H(self, 0x28) += FUN_overlay_22__0219a408(H(self, 0x28), 0) / 2;
        H(self, 0x2c) += FUN_overlay_22__0219a408(H(self, 0x2c), 0) / 2;
        I(self, 0x20) -= 33;
        FUN_02036848(&V(self, 0x10), &V(self, 0x1c));
        if (I(self, 0x14) < 0) {
            I(self, 0x14) = 0;
            I(self, 0x20) = (int)(((long long)I(self, 0x20) * -3072 + 2048) >> 12);
        }
    }
    FUN_overlay_22__0219aa30(self, &V(self, 0x10), H(self, 0x28), H(self, 0x2a), H(self, 0x2c));
    if (I(self, 0x48) == 7) {
        FUN_overlay_22__0219ace0(self, 7, 0);
    } else if (I(self, 0x48) == 24) {
        FUN_overlay_22__0219ad2c(self);
    }
    if (FUN_overlay_22__0219ad48(self) == 1) {
        FUN_overlay_22__0219ad08(self, I(self, 0x10), I(self, 0x18));
    }
    if (I(self, 0x48) >= 0 && I(self, 0x48) <= 24) {
        FUN_overlay_22__0219ae34(self, 0);
        if (I(self, 0x48) % 6 == 0) {
            FUN_overlay_22__0219ae68(self, 0, 0, &V(self, 0x10));
        }
    } else if (I(self, 0x48) == 25) {
        FUN_overlay_22__0219ad70(self, 1);
    }
    if (I(self, 0x48) >= 25 && I(self, 0x48) <= 174) {
        if (I(self, 0x68) == DAT_020ed09c) {
            v5 = V(self, 0x10);
            if (!(DAT_overlay_22__021a1748[3] & 1)) {
                DAT_overlay_22__021a11fc[15] = 0;
                DAT_overlay_22__021a11fc[16] = 2048;
                DAT_overlay_22__021a11fc[17] = -2048;
                DAT_overlay_22__021a1748[3] |= 1;
            }
            FUN_overlay_22__0219a94c(self, 12, &v5, &DAT_overlay_22__021a1238);
            I(self, 0x68) = FUN_overlay_22__0219ae68(self, 18, 1, &v5);
            FUN_overlay_22__0219af24(self, I(self, 0x68), 16, 1);
            if (!(DAT_overlay_22__021a1748[2] & 1)) {
                DAT_overlay_22__021a11fc[18] = 12288;
                DAT_overlay_22__021a11fc[19] = 12288;
                DAT_overlay_22__021a11fc[20] = 12288;
                DAT_overlay_22__021a1748[2] |= 1;
            }
            FUN_overlay_22__0219aed8(self, I(self, 0x68), &DAT_overlay_22__021a1244);
        }
    } else if (I(self, 0x68) != DAT_020ed09c) {
        FUN_overlay_22__0219aea0(self, &I(self, 0x68));
    }
    if (I(self, 0x48) >= 219) {
        H(self, 0x28) = 0;
        H(self, 0x2c) = 0;
        FUN_overlay_22__0219b274(self, 9, 0);
    }
}
