// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0xdc, exact bytes and relocation targets.
// check: vers=2.0/sp2p3 target=0xdc candidate=0xdc words=0 exact_bytes=0 bad_relocs=0
// Draft only: exact-byte and relocation checks pass; promotion gates pending.
typedef struct { int x, y, z; } Vec3;
typedef struct { int v[12]; } Mat43;
typedef struct { int v[9]; } Mat33;
extern void *FUN_02036c88(void *, int);
extern int FUN_0204260c(void *, int, Mat43 *, Mat33 *);
extern void FUN_0200c938(void *, unsigned int);
extern void FUN_0205b960(const Vec3 *, const Mat43 *, Vec3 *);
extern void FUN_02091cc0(Vec3 *, const Vec3 *, const int *);
extern int FUN_02074e9c(void *, int, int, int);
extern void *FUN_02075040(void *, int);
extern void FUN_0204bf88(void *);
extern const short DAT_020ed83c[];
extern const int DAT_0219acd0;
void FUN_overlay_25__02198bf4(unsigned char *actor)
{
    Mat43 matrix;
    Mat33 rotation;
    Vec3 local;
    Vec3 pos;
    Vec3 direction;
    Vec3 offset;
    unsigned char *effect;
    int index;
    FUN_0204260c(FUN_02036c88(actor, 0), 9, &matrix, &rotation);
    FUN_0200c938(&local, 12);
    FUN_0205b960(&local, &matrix, &local);
    pos.x = local.x;
    pos.y = local.y;
    pos.z = local.z;
    index = ((unsigned short)(*(unsigned short *)(actor + 0x44) + 0x4000) >> 4) << 1;
    direction.x = DAT_020ed83c[index];
    direction.y = 0;
    direction.z = DAT_020ed83c[index + 1];
    FUN_02091cc0(&offset, &direction, &DAT_0219acd0);
    pos.x += offset.x;
    pos.y += offset.y;
    pos.z += offset.z;
    *(int *)(actor + 0xd8) = FUN_02074e9c(actor, 2, 0, 0);
    effect = FUN_02075040(actor, *(int *)(actor + 0xd8));
    if (effect != 0) {
        *(Vec3 *)(effect + 0x5c) = pos;
        *(unsigned short *)(effect + 0x6a) = *(unsigned short *)(actor + 0x44);
        FUN_0204bf88(effect);
        *(unsigned int *)(effect + 0xe4) |= 0x10000;
    }
}
