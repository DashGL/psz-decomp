// flags: -O4,s
typedef struct { unsigned char type, level, pad[2]; int amount; unsigned int rest[4]; } Record;
extern void FUN_0207f934(void *, Record *);
extern void FUN_0207f960(void *, Record *);
extern void FUN_0207f51c(void *);
int FUN_0203b958(char *s, int type, int level, int amount) {
    if (type >= 0 && type < 6) {
        if (level > 0 && level <= 5 && amount > 0) {
            Record r;
            FUN_0207f934(s + 344, &r);
            r.type = type;
            r.level = level;
            r.amount = amount;
            FUN_0207f960(s + 344, &r);
            return 1;
        }
    } else {
        FUN_0207f51c(s + 344);
        return 1;
    }
    return 0;
}
