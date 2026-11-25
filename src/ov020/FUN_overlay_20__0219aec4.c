// flags: -O4,s
typedef struct { int x, y, z; } Vec3;
extern const Vec3 DAT_overlay_20__0219fab0;
extern const Vec3 DAT_overlay_20__0219fabc;
extern const Vec3 DAT_overlay_20__0219fa8c;
extern const Vec3 DAT_overlay_20__0219fa98;
extern const Vec3 DAT_overlay_20__0219faa4;
extern void FUN_0203647c(Vec3 *, const Vec3 *, const Vec3 *);
extern void FUN_overlay_20__02198e78(void *, const Vec3 *, int);
extern void FUN_overlay_20__02198f10(void *, int);
extern void FUN_overlay_20__02198f20(void *, int);
extern void FUN_overlay_20__02199030(void *, int);
extern int FUN_overlay_20__02199054(void *);
extern void FUN_overlay_20__02198fc0(void *, int);
extern void FUN_overlay_20__02198ff0(void *, int);
void FUN_overlay_20__0219aec4(unsigned char *self) {
    Vec3 initial[2];
    Vec3 offset1, offset2, offset3, offset4;
    Vec3 path[5];
    unsigned char *actor = *(unsigned char **)(self + 4);
    const Vec3 *pos;
    switch (*(int *)(self + 0x14)) {
    case 0:
        if ((*(unsigned int *)(actor + 0xec) & 1 ? 1 : 0) != 0) {
            pos = (const Vec3 *)(actor + 0x38);
            initial[0] = *pos;
            FUN_0203647c(&initial[1], pos, &DAT_overlay_20__0219fab0);
            FUN_overlay_20__02198e78(actor, initial, 2);
            FUN_overlay_20__02198f10(actor, 0x266);
            FUN_overlay_20__02198f20(actor, 41);
            *(unsigned int *)(actor + 0xec) |= 0x10;
            FUN_overlay_20__02199030(actor, 1);
            *(int *)(self + 0x14) = 1;
        }
        break;
    case 1:
        if (FUN_overlay_20__02199054(actor) == 0) {
            offset1 = DAT_overlay_20__0219fabc;
            offset2 = DAT_overlay_20__0219fa8c;
            offset3 = DAT_overlay_20__0219fa98;
            offset4 = DAT_overlay_20__0219faa4;
            if (*(int *)(self + 0xc) == 0) {
                offset1.x = -offset1.x;
                offset2.x = -offset2.x;
                offset3.x = -offset3.x;
                offset4.x = -offset4.x;
            }
            pos = (const Vec3 *)(actor + 0x38);
            path[0] = *pos;
            FUN_0203647c(&path[1], pos, &offset1);
            FUN_0203647c(&path[2], pos, &offset2);
            path[3] = offset3;
            path[4] = offset4;
            FUN_overlay_20__02198e78(actor, path, 5);
            FUN_overlay_20__02198f10(actor, 0x800);
            FUN_overlay_20__02198f20(actor, 20);
            FUN_overlay_20__02198fc0(actor, 1);
            FUN_overlay_20__02198ff0(actor, 1);
            *(int *)(self + 0x10) = 1;
        }
        break;
    }
}
