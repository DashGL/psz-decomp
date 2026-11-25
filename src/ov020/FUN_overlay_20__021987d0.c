// flags: -O4,s
typedef struct Vec { int x, y, z; } Vec;
extern int DAT_overlay_20__0219f978;
extern void FUN_02092654(Vec *, const int *);
extern void FUN_overlay_20__02198898(void *);
extern void FUN_overlay_20__02198a38(void *);
extern void FUN_overlay_20__02198d10(void *);
extern void FUN_02036848(Vec *, const Vec *);
extern void FUN_0203647c(Vec *, const Vec *, const Vec *);
extern void FUN_02036384(void *, const Vec *);

void FUN_overlay_20__021987d0(char *self)
{
    char *movement = *(char **)(self + 0xd4);
    Vec result;
    unsigned mode, flag;
    *(Vec *)(movement + 0x18) = *(Vec *)(movement + 0xc);
    FUN_02092654((Vec *)(*(char **)(self + 0xd4) + 0xc), &DAT_overlay_20__0219f978);
    FUN_overlay_20__02198898(self);
    FUN_overlay_20__02198a38(self);
    FUN_overlay_20__02198d10(self);
    mode = (*(int *)(*(char * volatile *)(self + 0xd4) + 4) != 0);
    if (mode) {
        Vec position;
        movement = *(char * volatile *)(self + 0xd4);
        FUN_02036848((Vec *)(movement + 0x34), (Vec *)(movement + 0xc));
        movement = *(char * volatile *)(self + 0xd4);
        FUN_0203647c(&position, (Vec *)(movement + 0x34), (Vec *)(movement + 0x40));
        result = position;
    } else {
        Vec position;
        FUN_0203647c(&position, (Vec *)(self + 0x38), (Vec *)(*(char * volatile *)(self + 0xd4) + 0xc));
        result = position;
    }
    flag = ((*(unsigned *)(self + 0xec) & 16) != 0);
    if (flag) *(Vec *)(self + 0x38) = result;
    else FUN_02036384(self, &result);
}
