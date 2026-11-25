// flags: -O4,s
typedef struct { int x, y, z; } Vec3;
typedef struct { int v[12]; } Mat43;
typedef struct { int v[9]; } Mat33;
typedef struct { unsigned short rx, ry, rz; } Rot;
extern unsigned int DAT_overlay_23__0219dc04[];
extern int DAT_overlay_23__0219d918[];
extern Vec3 DAT_overlay_23__0219d93c, DAT_overlay_23__0219d948, DAT_overlay_23__0219d954;
extern const int DAT_overlay_23__0219cedc[];
extern const Rot DAT_overlay_23__0219ceec[];
extern const Vec3 DAT_overlay_23__0219d930[];
extern const short DAT_020ed83c[], DAT_020ee83c[];
extern void *FUN_02036c88(void *, int);
extern int FUN_0204260c(void *, int, Mat43 *, Mat33 *);
extern void FUN_0205ab90(Mat33 *, int, int);
extern void FUN_0205abac(Mat33 *, int, int);
extern void FUN_0205abc8(Mat33 *, int, int);
extern void FUN_0205aa80(Mat33 *);
extern void FUN_0205aed0(const Mat33 *, const Mat33 *, Mat33 *);
extern void FUN_0205b0f0(const Vec3 *, const Mat33 *, Vec3 *);
int FUN_overlay_23__0219a808(void *actor, Vec3 *out, Mat33 *out_rotation, int index) {
    Mat43 bone_matrix;
    Mat33 bone_rotation, combined, rx, ry, rz;
    void *component;
    int t;
    if ((DAT_overlay_23__0219dc04[1] & 1) == 0) {
        DAT_overlay_23__0219d918[6] = 0xcd5; DAT_overlay_23__0219d918[7] = 0x257; DAT_overlay_23__0219d918[8] = -28;
        DAT_overlay_23__0219d93c.x = 0xcd5; DAT_overlay_23__0219d93c.y = -0x257; DAT_overlay_23__0219d93c.z = -28;
        DAT_overlay_23__0219d948.x = 0xcd5; DAT_overlay_23__0219d948.y = 0x257; DAT_overlay_23__0219d948.z = -28;
        DAT_overlay_23__0219d954.x = 0xcd5; DAT_overlay_23__0219d954.y = -0x257; DAT_overlay_23__0219d954.z = -28;
        DAT_overlay_23__0219dc04[1] |= 1;
    }
    component = FUN_02036c88(actor, 0);
    if (component != 0) {
        if (FUN_0204260c(component, DAT_overlay_23__0219cedc[index], &bone_matrix, &bone_rotation) != 0) {
            t = (DAT_overlay_23__0219ceec[index].rx >> 4) << 1;
            FUN_0205ab90(&rx, DAT_020ed83c[t], DAT_020ed83c[t + 1]);
            t = (DAT_overlay_23__0219ceec[index].ry >> 4) << 1;
            FUN_0205abac(&ry, DAT_020ed83c[t], DAT_020ed83c[t + 1]);
            t = (DAT_overlay_23__0219ceec[index].rz >> 4) << 1;
            FUN_0205abc8(&rz, DAT_020ed83c[t], DAT_020ed83c[t + 1]);
            FUN_0205aa80(&combined);
            FUN_0205aed0(&combined, &rx, &combined);
            FUN_0205aed0(&combined, &rz, &combined);
            FUN_0205aed0(&combined, &ry, &combined);
            FUN_0205aed0(&combined, &bone_rotation, &combined);
            *out = DAT_overlay_23__0219d930[index];
            FUN_0205b0f0(out, &combined, out);
            out->x += bone_matrix.v[9];
            out->y += bone_matrix.v[10];
            out->z += bone_matrix.v[11];
            FUN_0205abac(out_rotation, DAT_020ee83c[0], DAT_020ee83c[1]);
            FUN_0205aed0(out_rotation, &bone_rotation, out_rotation);
            return 1;
        }
    }
    return 0;
}
