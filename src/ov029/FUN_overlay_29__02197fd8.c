// flags: -O4,s
enum { E0 = 0, E1 = 1 };
typedef struct Vec { int x, y, z; } Vec;

extern const int DAT_0219bb60[];
extern const int data_0219bb60[];
extern const int DAT_0219bb64;
extern const int DAT_0219bb68;
extern const int DAT_0219bb6c;
extern const int DAT_0219bb74;
extern const short DAT_020ed83c[];
extern const int DAT_020fc988;

extern int FUN_02036c34(void *);
extern void FUN_02092654(Vec *, const int *);
extern int FUN_overlay_29__02199170(void *, Vec *);
extern void FUN_02035408(Vec *, int, int, int);
extern void FUN_02036348(Vec *, const Vec *, const Vec *);
extern void FUN_overlay_29__02198cf8(void *, const Vec *, int, int);
extern void FUN_overlay_29__021989d4(void *, const int *, const int *);
extern void FUN_02037924(void *);
extern void FUN_02037390(int *, const Vec *);
extern void FUN_020bc5cc(int *, const int *, const int *);

void FUN_overlay_29__02197fd8(char *self) {
    char *owner = *(char **)(self + 4);
    char *state = *(char **)(self + 8);
    Vec vel;
    Vec target;
    Vec dir;
    Vec ownerPos;
    Vec diff;
    Vec leadDiff;
    Vec lead;
    int delta;
    int speedLen;
    int minSpeedSq;
    int dist;
    int thresh2;
    int thresh1;

    delta = FUN_02036c34(owner);
    vel = *(Vec *)(owner + 0xdc);
    FUN_02092654(&vel, &delta);

    if (FUN_overlay_29__02199170(state, &target) == 1) {
        int factor = DAT_0219bb60[4];
        FUN_02035408(
            &lead,
            (int)(((long long)vel.x * factor + 2048) >> 12),
            (int)(((long long)vel.y * factor + 2048) >> 12),
            (int)(((long long)vel.z * factor + 2048) >> 12)
        );
        FUN_02036348(&leadDiff, &target, &lead);
        FUN_overlay_29__02198cf8(owner, &leadDiff, 0x600, 0);
    }

    {
        int index = ((int)*(unsigned short *)(owner + 0x44) >> 4) * 2;
        dir.x = DAT_020ed83c[index];
        dir.y = 0;
        dir.z = DAT_020ed83c[index + 1];
    }
    FUN_02092654(&dir, &DAT_0219bb74);
    vel.x += dir.x;
    vel.y += dir.y;
    vel.z += dir.z;
    FUN_overlay_29__021989d4(owner, &DAT_0219bb64, data_0219bb60);

    if ((DAT_020fc988 >= *(int *)(self + 0xc)) ? E1 : E0) {
        *(int *)(state + 0x4c) = 2;
        FUN_02037924(state);
        return;
    }

    *(int *)(self + 0xc) -= delta;
    ownerPos = *(Vec *)(owner + 0x38);
    FUN_02036348(&diff, &target, &ownerPos);
    FUN_02037390(&speedLen, &vel);
    FUN_020bc5cc(&minSpeedSq, &DAT_0219bb68, &DAT_0219bb68);
    if ((speedLen > minSpeedSq) ? E1 : E0) {
        FUN_020bc5cc(&thresh1, &speedLen, &DAT_0219bb6c);
        FUN_020bc5cc(&thresh2, &thresh1, &DAT_0219bb6c);
        FUN_02037390(&dist, &diff);
        if ((dist < thresh2) ? E1 : E0) {
            *(int *)(state + 0x4c) = 2;
            FUN_02037924(state);
        }
    }
}
