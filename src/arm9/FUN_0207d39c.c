// flags: -O4,s
typedef struct { int x, y, z; } V326;
typedef struct { unsigned char b[6]; } Info6;
extern int DAT_020f2b20[];
extern short DAT_020ed83c[];
extern V326 DAT_020f2a9c;
extern void FUN_0207a514(void *, void *, int, int, int);
extern void FUN_0207a1ec(void *, void *, unsigned short);
extern void FUN_0203647c(void *, void *, void *);
extern void FUN_02034680(void *, void *);
extern void FUN_0207a3f4(void *, int, int, int);
extern void FUN_0207a5b4(void *);
extern void FUN_0200c938(void *, int);
extern void FUN_020be4f8(int, int, int);
extern int FUN_0207a3ac(int, int);
extern int FUN_0207a3d0(int, int);
extern int FUN_0204e8bc(void *, int, int);
extern int FUN_0204dab0(int);
extern int FUN_0204dac4(int);
extern int FUN_02078198(int);
extern int FUN_020be450(void);
extern int FUN_020beccc(int, void *, int, void *, void *);
extern char *FUN_0204daa8(int);

void FUN_0207d39c(char *s, char *desc, int level) {
    V326 point;
    V326 actorpos;
    V326 op;
    V326 scale;
    V326 rot;
    V326 sum;
    V326 offset;
    V326 placed;
    Info6 copy;
    int args[2];
    Info6 info;
    int index, n, handle, sub, ok;
    unsigned short angle;
    char *actor;

    FUN_0207a514(s, desc, level, 4, 18);
    *(int *)(s + 268) = 1;
    index = *(int *)(s + 280);
    n = 4096;
    if (index >= 0 && index < 3) {
        n = DAT_020f2b20[index];
    }
    scale.x = n;
    scale.y = n;
    scale.z = n;
    *(V326 *)(s + 80) = scale;
    FUN_0207a1ec(&rot, s + 92, *(unsigned short *)(s + 106));
    *(V326 *)(s + 92) = rot;
    handle = FUN_0207a3ac(*(int *)(s + 232), 0);
    sub = FUN_0207a3d0(*(int *)(s + 232), 0);
    point.x = 0;
    point.y = 0;
    point.z = 0;
    ok = 0;
    if (handle != -1) {
        ok = FUN_0204e8bc(&point, handle, sub);
    }
    if (ok) {
        offset.x = 0;
        offset.y = 4096;
        offset.z = 0;
        FUN_0203647c(&sum, &point, &offset);
        *(V326 *)(s + 92) = sum;
    } else {
        int idx;
        int dist;
        actor = FUN_0204daa8(*(int *)(s + 232));
        angle = 0;
        FUN_0200c938(&actorpos, 12);
        if (actor) {
            angle = *(unsigned short *)(actor + 192);
            FUN_02034680(&actorpos, actor + 156);
        }
        FUN_0207a3f4(&info, 4, *(int *)(s + 276), 1);
        copy = info;
        dist = copy.b[2] << 12;
        placed.x = actorpos.x + ((dist * DAT_020ed83c[((int)angle >> 4) * 2]) >> 12);
        placed.y = 4096;
        placed.z = actorpos.z + ((dist * DAT_020ed83c[((int)angle >> 4) * 2 + 1]) >> 12);
        *(V326 *)(s + 92) = placed;
    }
    if (FUN_0204dab0(*(int *)(s + 232)) || FUN_0204dac4(*(int *)(s + 232)) || FUN_02078198(*(int *)(s + 232))) {
        op = DAT_020f2a9c;
        if (FUN_02078198(*(int *)(s + 232))) {
            op.x = 2;
            op.y = 1;
            *(int *)(s + 256) = *(int *)(desc + 96);
        } else {
            *(int *)(s + 256) = 28;
        }
        FUN_0200c938(args, 8);
        args[1] = *(int *)(s + 232);
        FUN_0207a5b4(s);
        *(int *)(s + 376) = FUN_020beccc(FUN_020be450(), s + 324, 1, &op, args);
        FUN_020be4f8(FUN_020be450(), *(int *)(s + 376), 0);
    }
    *(int *)(s + 156) = 3;
    *(int *)(s + 160) = 18;
    *(int *)(s + 164) = -1;
}
