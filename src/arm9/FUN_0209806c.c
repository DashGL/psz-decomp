// flags: -O4,s
typedef struct { int id; short a, b, c; unsigned short score; } Record;
extern int FUN_02098320(void *, void *, int, int, int);
int FUN_0209806c(void *s, int category, int arg, int extra) {
    Record records[3];
    int best, n;
    unsigned int score;
    int i;
    if (category < 0 || category >= 5) return -1;
    best = -1;
    n = FUN_02098320(s, records, category, arg, extra);
    score = 65535;
    for (i = 0; i < n; i++) {
        if (records[i].score < score) {
            best = records[i].id;
            score = records[i].score;
        }
    }
    return best;
}
