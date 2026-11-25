// flags: -O4,s
//cpp
extern "C" {
extern unsigned char DAT_0211a51c[];
extern int FUN_02084be8(void *);
extern bool FUN_02032d2c(void *, int);
extern void *FUN_02031a74(void);
extern void *FUN_02086e3c(void);
extern void *FUN_02096488(void);
extern char *FUN_02031c74(void *);
extern char *FUN_020870c4(void *);
extern void FUN_020968a0(void *, int, int);
}

struct Record {
    int minVal;
    int maxVal;
    signed char selector;
    signed char mode;
    signed char onIds[3];
    signed char offIds[3];

    bool CheckMode0(bool zero) const { return mode == 0 && zero; }
    bool CheckMode(bool zero, bool pred) const {
        return CheckMode0(zero) || (mode == 1 && pred);
    }
    bool MatchKey(int sel, bool zero, bool pred) const {
        return selector == sel && CheckMode(zero, pred);
    }
    bool CheckMin(int level) const { return minVal < 0 || minVal <= level; }
    bool CheckMax(int level) const { return maxVal < 0 || level <= maxVal; }
    bool MatchLevel(int level) const { return CheckMin(level) && CheckMax(level); }
    bool Match(int sel, bool zero, bool pred, int level) const {
        return MatchKey(sel, zero, pred) && MatchLevel(level);
    }
};

extern "C" void FUN_02032a9c(void *s, signed char *key) {
    char *desc, *state;
    Record *records;
    unsigned int count;
    int id1, id2;
    int selector, secondary, level;
    bool predicate, zero;
    unsigned int i;
    int j;

    if (!FUN_02084be8(DAT_0211a51c)) return;
    {
        bool ok = false;
        if (key[0] == 1) ok = true;
        if (!ok) return;
    }
    desc = FUN_02031c74(FUN_02031a74());
    if (!desc) return;
    records = *(Record **)(desc + 64);
    if (!records) return;

    selector = key[1];
    secondary = key[2];
    predicate = FUN_02032d2c(s, secondary);
    state = FUN_020870c4(FUN_02086e3c());
    count = (unsigned char)desc[59];
    i = 0;
    zero = (secondary == 0);
    level = *(int *)(state + 3384);

    for (; i < count; i++) {
        Record *record = &records[i];
        if (record->Match(selector, zero, predicate, level)) {
            for (j = 0; j < 3; j++) {
                id1 = record->offIds[j];
                if (id1 >= 0) FUN_020968a0(FUN_02096488(), id1, 0);
            }
            for (j = 0; j < 3; j++) {
                id2 = record->onIds[j];
                if (id2 >= 0) FUN_020968a0(FUN_02096488(), id2, 1);
            }
        }
    }
}
