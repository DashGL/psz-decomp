// flags: -O4,s
enum { E0 = 0, E1 = 1 };
typedef struct {
    short pad0[9];
    signed char f12;
    signed char idx;
    short pad1;
    unsigned short thresh[5];
} Settings;
extern void FUN_0206d188(void *, int, int, int, int, int);
extern void FUN_02031ce8(void *, void *);
extern void FUN_02082be4(void *, void *, int);
extern void *FUN_02031a74(void);
extern void *FUN_020780f4(void);
extern unsigned int FUN_0207816c(void *, unsigned int);

void FUN_02082b30(void *s, int type) {
    int d[5];
    Settings b, a;
    int mode;
    FUN_0206d188(d, type, 1, 0, 0, 1);
    mode = -1;
    if (type != 0 && type != 8) {
        int index;
        unsigned int random, threshold;
        FUN_02031ce8(&a, FUN_02031a74());
        b = a;
        random = FUN_0207816c(FUN_020780f4(), 10000);
        index = b.idx;
        if (index < 0) threshold = 0;
        else if (index >= 5) threshold = 0;
        else threshold = b.thresh[index];
        if ((random < threshold) ? E1 : E0) mode = 5;
    }
    FUN_02082be4(s, d, mode);
}
