// flags: -O4,s
typedef struct Vec { int x, y, z; } Vec;
typedef struct Query { int id, minimum, maximum; Vec position; unsigned short angle, limit; unsigned flags; } Query;
extern Vec DAT_020fc958;
extern void *DAT_02108cf4;
extern void *FUN_020352a4(void *, int);
extern char *FUN_02039200(void *);
extern int FUN_0203ae60(void *), FUN_0203bf3c(void *), FUN_020865fc(Query *);

int FUN_overlay_21__0219a9d8(char *self) {
    char *owner = *(char **)(self + 4); int found = 0; Vec origin = *(Vec *)(owner + 0x38); unsigned short angle = *(unsigned short *)(owner + 0x108); int best = -1; Query query; int i; unsigned short bestValue;
    query.id = -1;
    query.minimum = 0;
    query.maximum = 0;
    query.position = DAT_020fc958;
    query.angle = 0;
    query.limit = 0;
    query.flags = 0;
    query.position = origin;
    query.angle = angle;
    query.limit = 16384;
    query.flags |= 4;
    query.flags |= 1;
    query.maximum = 3686400;
    query.minimum = 0;
    query.flags |= 2;
    bestValue = 0;
    for (i = 0; i <= 3; i++) {
        char *player = FUN_02039200(FUN_020352a4(DAT_02108cf4, i));
        if (player && !FUN_0203ae60(player) && FUN_0203bf3c(player)) {
            query.id = i;
            if (FUN_020865fc(&query)) {
                unsigned short value = *(unsigned short *)(player + 0x14e);
                if (best == -1 || value < bestValue) {
                    bestValue = value;
                    best = i;
                    found = 1;
                }
            }
        }
    }
    *(int *)(self + 0x8c) = best;
    return found;
}
