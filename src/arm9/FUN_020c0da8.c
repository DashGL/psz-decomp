// flags: -O4,s
typedef unsigned int u32;
typedef unsigned long long u64;
typedef struct {
    u32 w[3];
} Id12;
typedef struct {
    char pad[8];
    u64 val;
    char rest[36];
} Rec52;
extern int FUN_020dd6c4(const void *);
extern void FUN_020c0be4(void);
extern void FUN_020dd8b8(void *, void *);
extern int FUN_020dd920(const void *, const void *);
extern int FUN_020e25a0(void *, int);
extern int FUN_020c1080(void);
extern void FUN_020c07a4(void);
extern void FUN_020c06ac(void *, const void *);
extern void FUN_020c086c(void);
extern void FUN_020c0664(void *, u64, const void *, const void *);
extern char DAT_0211b404[];
extern Id12 DAT_0211b444[];
extern Rec52 DAT_0211b744[];

int FUN_020c0da8(const Id12 *identity, u64 val, const void *name, const void *extra, int *index) {
    Id12 own;
    int freeIndex;
    int i;

    if (FUN_020dd6c4(identity) == 1) {
        FUN_020c0be4();
        FUN_020dd8b8(DAT_0211b404, &own);
        if (FUN_020dd920(identity, &own) == 1) {
            return -5;
        }
        if (FUN_020e25a0(DAT_0211b444, 64) == 64 && !FUN_020c1080()) {
            return -4;
        }
        FUN_020c07a4();
        freeIndex = -1;
        for (i = 0; i < 64; i++) {
            if (FUN_020dd6c4(&DAT_0211b444[i]) == 1) {
                if (FUN_020dd920(identity, &DAT_0211b444[i]) == 1) {
                    Rec52 *r = &DAT_0211b744[i];
                    if (r->val == 0ULL && val != 0ULL) {
                        r->val = val;
                    }
                    FUN_020c06ac(r, extra);
                    FUN_020c086c();
                    *index = i;
                    return -2;
                }
            } else if (freeIndex == -1) {
                freeIndex = i;
            }
        }
        if (freeIndex == -1) {
            return -4;
        }
        DAT_0211b444[freeIndex] = *identity;
        FUN_020c0664(&DAT_0211b744[freeIndex], val, name, extra);
        FUN_020c086c();
        *index = freeIndex;
        return freeIndex;
    }
    return -3;
}
