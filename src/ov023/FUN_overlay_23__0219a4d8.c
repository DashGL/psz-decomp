// flags: -O4,s
typedef struct Vec { unsigned x, y, z; } Vec;
extern int DAT_020ed0a0;
extern int DAT_overlay_23__0219d918[];
extern int FUN_02036c34(void *);
extern void FUN_02075068(void *, int);
extern void FUN_02072724(void *, int);
extern void FUN_overlay_23__0219a48c(void *);
extern char *FUN_02075040(void *, int);
extern int FUN_02072650(void *, int, int, int);
extern void FUN_02072750(void *, int, const Vec *);

void FUN_overlay_23__0219a4d8(char *self)
{
    unsigned delta = FUN_02036c34(self);
    int invalid = DAT_020ed0a0, i;
    for (i = 0; i < *(int *)(self + 0xdc); i++) {
        unsigned *record = (unsigned *)(*(char **)(self + 0xd8) + 40 * i);
        unsigned active = ((record[9] & 1) != 0);
        if (active) {
            unsigned expired;
            record[3] += record[0];
            record[4] += record[1];
            record[5] += record[2];
            record[6] += delta;
            if ((int)record[4] <= 0 || (expired = ((int)record[6] >= DAT_overlay_23__0219d918[2]), expired)) {
                FUN_02075068(self, record[7]);
                FUN_02072724(self, record[8]);
                FUN_overlay_23__0219a48c(record);
            } else {
                char *effect = FUN_02075040(self, record[7]);
                unsigned near;
                if (effect) *(Vec *)(effect + 0x5c) = *(Vec *)(record + 3);
                near = ((int)record[4] <= DAT_overlay_23__0219d918[0]);
                if (near) {
                    if ((int)record[8] == invalid) record[8] = FUN_02072650(self, 3, 0, 0);
                    FUN_02072750(self, record[8], (Vec *)(record + 3));
                } else if ((int)record[8] != invalid) {
                    FUN_02072724(self, record[8]);
                    record[8] = invalid;
                }
            }
        }
    }
}
