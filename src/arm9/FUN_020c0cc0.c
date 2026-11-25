// flags: -O4,s
typedef unsigned long long U64;
typedef struct Record { unsigned int a, b, c; } Record;
extern void FUN_020c0be4(void);
extern U64 FUN_020dd47c(const char *);
extern int FUN_020dd3fc(void *, unsigned int, unsigned int);
extern U64 FUN_020dd878(void *);
extern void FUN_020c07a4(void);
extern int FUN_020dd6c4(const Record *);
extern U64 FUN_020dd820(const Record *);
extern void FUN_020dd894(Record *, unsigned int, unsigned int);
extern void FUN_020c05f8(void *, unsigned int, unsigned int);
extern void FUN_020c086c(void);
extern char DAT_0211b404[];
extern Record DAT_0211b444[];
extern char DAT_0211b744[];

int FUN_020c0cc0(const char *text, int commit) {
    U64 identity, current;
    Record record;
    int freeIndex, i;
    FUN_020c0be4();
    identity = FUN_020dd47c(text);
    if (FUN_020dd3fc(DAT_0211b404, (unsigned int)identity, (unsigned int)(identity >> 32)) == 1) {
        current = FUN_020dd878(DAT_0211b404);
        if (identity != 0 && identity == current) return -5;
        FUN_020c07a4();
        freeIndex = -1;
        for (i = 0; i < 64; i++) {
            if (FUN_020dd6c4(&DAT_0211b444[i]) == 1) {
                if (FUN_020dd820(&DAT_0211b444[i]) == identity) return -2;
            } else if (freeIndex == -1) {
                freeIndex = i;
            }
        }
        if (freeIndex == -1) return -4;
        if (commit == 1) {
            FUN_020dd894(&record, (unsigned int)identity, (unsigned int)(identity >> 32));
            DAT_0211b444[freeIndex] = record;
            FUN_020c05f8(DAT_0211b744 + freeIndex * 52, (unsigned int)identity, (unsigned int)(identity >> 32));
            FUN_020c086c();
        }
        return freeIndex;
    }
    return -3;
}
