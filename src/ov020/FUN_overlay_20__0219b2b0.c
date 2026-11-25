// flags: -O4,s
typedef struct {
    int x, y, z;
} Vec;

extern const Vec DAT_0219fb54;
extern const Vec DAT_0219fb60;
extern const Vec DAT_0219fb6c;
extern int DAT_020fc988;
extern int DAT_0219fb00[];
extern void FUN_0203647c(Vec *, Vec *, Vec *);
extern void FUN_overlay_20__02198e78(void *, Vec *, int);
extern void FUN_overlay_20__02198f08(void *, int);
extern void FUN_overlay_20__02198f20(void *, int);
extern void FUN_overlay_20__02199030(void *, int);

void FUN_overlay_20__0219b2b0(int *self)
{
    Vec first, second, third, path[4];
    int *owner = (int *)self[1];
    Vec *position = (Vec *)(owner + 14);
    int flag;

    self[4] = 0;
    first = DAT_0219fb54;
    second = DAT_0219fb60;
    third = DAT_0219fb6c;
    flag = !(position->z >= DAT_020fc988);
    if (flag != 0) {
        first.z = -first.z;
        second.z = -second.z;
        third.z = -third.z;
    }
    second.x = position->x;
    third.x = position->x;
    path[0] = *position;
    FUN_0203647c(&path[1], position, &first);
    path[2] = second;
    path[3] = third;
    FUN_overlay_20__02198e78(owner, path, 4);
    FUN_overlay_20__02198f08(owner, DAT_0219fb00[14]);
    FUN_overlay_20__02198f20(owner, DAT_0219fb00[12]);
    FUN_overlay_20__02199030(owner, 1);
}
