// flags: -O4,s
enum { E0 = 0, E1 = 1 };

typedef struct Vec {
    int x, y, z;
} Vec;

typedef struct Query {
    int id, minimum, maximum;
    Vec position;
    unsigned short angle, limit;
    unsigned flags;
} Query;

extern int DAT_020fc988;
extern const Vec DAT_020fc958;
extern void FUN_overlay_23__02198b20(void *);
extern void FUN_overlay_23__02198b80(void *);
extern void FUN_overlay_23__02198dd4(void *);
extern int FUN_020865fc(Query *);
extern void FUN_overlay_23__02198da8(void *);
extern int FUN_02036c34(void *);

void FUN_overlay_23__02198a2c(char *self)
{
    switch (*(int *)(self + 12)) {
    case 0:
        FUN_overlay_23__02198b20(self);
        break;
    case 1:
        FUN_overlay_23__02198b80(self);
        break;
    case 2:
        FUN_overlay_23__02198dd4(self);
        break;
    }
    if (*(int *)(self + 12) != 2) {
        char *owner = *(char **)(self + 4);
        char *state = *(char **)(self + 8);
        if (((*(int *)(self + 20) <= DAT_020fc988) ? E1 : E0) != 0) {
            unsigned short angle = *(unsigned short *)(owner + 0x44);
            Query query;
            query.id = -1;
            query.minimum = 0;
            query.maximum = 0;
            query.position = DAT_020fc958;
            query.angle = 0;
            query.limit = 0;
            query.flags = 0;
            query.position = *(Vec *)(owner + 0x38);
            query.angle = angle;
            query.limit = 4096;
            query.flags |= 4;
            query.maximum = 6400;
            query.flags |= 2;
            query.id = *(int *)(state + 0x34);
            if (FUN_020865fc(&query)) {
                FUN_overlay_23__02198da8(self);
            }
        } else {
            int delta = FUN_02036c34(owner);
            *(unsigned *)(self + 20) -= (unsigned)delta;
        }
    }
}
