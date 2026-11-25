// flags: -O4,s
typedef struct { unsigned char b[14]; } Rec14;
typedef struct { unsigned char b[6]; } Val6;
extern Rec14 *FUN_02084778(int, int);
extern void FUN_02035b9c(void *, void *);
void FUN_0207a3f4(Val6 *out, int type, int level, int alternate) {
    Val6 value;
    Rec14 record;
    if (level < 1 || level > 15) {
        level = 1;
    }
    record = *FUN_02084778(type, level);
    if (alternate != 0) {
        FUN_02035b9c(&value, record.b + 6);
    } else {
        FUN_02035b9c(&value, record.b);
    }
    *out = value;
}
