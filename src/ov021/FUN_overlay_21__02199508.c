// flags: -O4,s
typedef struct { int x, y, z; } Vec;

extern Vec DAT_020fc958;
extern int DAT_020fc988;
extern const int DAT_overlay_21__021a0024[];
extern const int DAT_overlay_21__021a000c[];

extern void FUN_020866b4(void *, Vec *);
extern int *FUN_0204475c(void *, int);
extern void *FUN_020be450(void);
extern void *FUN_020be5c0(void *, int, int);
extern void FUN_020bf73c(void *, Vec *);
extern void FUN_02036348(Vec *, const Vec *, const Vec *);
#pragma thumb off
extern int FUN_0205c86c(const Vec *);
#pragma thumb on

int FUN_overlay_21__02199508(char *self, Vec *outPos, int *outVal, void *a3) {
    Vec refPos, bestPos, tmp, cand, diff;
    const int *list;
    int *entry;
    int bestDist, bestVal;
    int found = 0;
    int count, i;

    FUN_020866b4(a3, &refPos);
    bestPos = DAT_020fc958;
    bestVal = bestDist = DAT_020fc988;

    if (*(int *)(self + 0xd4) == 0) {
        list = DAT_overlay_21__021a0024;
        count = 8;
    } else {
        list = DAT_overlay_21__021a000c;
        count = 6;
    }

    for (i = 0; i < count; i++) {
        short flags;
        unsigned b1, b2;
        void *obj;
        int dist;

        entry = FUN_0204475c(self, list[i]);
        flags = *(short *)((char *)entry + 0x20);
        b1 = (flags & 1) != 0;
        if (!b1) continue;
        b2 = (flags & 2) != 0;
        if (!b2) continue;

        obj = FUN_020be5c0(FUN_020be450(), entry[0], 0);
        if (!obj) continue;

        FUN_020bf73c(obj, &tmp);
        cand.x = tmp.x;
        cand.y = 0;
        cand.z = tmp.y;
        FUN_02036348(&diff, &cand, &refPos);
        dist = FUN_0205c86c(&diff);

        if (found) {
            unsigned closer = (dist < bestDist);
            if (!closer) continue;
        }
        bestDist = dist;
        bestPos = cand;
        found = 1;
        bestVal = tmp.z;
    }

    if (found) {
        *outPos = bestPos;
        *outVal = bestVal;
    }
    return found;
}
