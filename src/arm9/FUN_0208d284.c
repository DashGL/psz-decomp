// flags: -O4,s
typedef struct {
    unsigned short f0;
    unsigned short pad[2];
    short f6;
} Sub;
extern int FUN_020855bc(int);
extern char *FUN_02085684(int);
extern char *FUN_02086150(int);
extern unsigned short *FUN_02086558(int);
extern void FUN_02075ee0(void *, unsigned short);
void FUN_0208d284(char *s) {
    int index = *(signed char *)(s + 4);
    if (FUN_020855bc(index) == 2) {
        unsigned short maximum = *(unsigned short *)(s + 8);
        unsigned short value = *(unsigned short *)(s + 6);
        short extra;
        char *p;
        unsigned short *q;
        if (value > maximum) {
            value = maximum;
        }
        extra = *(short *)(s + 10);
        p = FUN_02085684(index);
        if (p != 0) {
            Sub *sub;
            FUN_02075ee0(p, maximum);
            sub = (Sub *)(p + 334);
            sub->f0 = value;
            sub->f6 = extra;
        }
        p = FUN_02086150(index);
        if (p != 0) {
            *(unsigned short *)(p + 56) = maximum;
        }
        q = FUN_02086558(index);
        if (q != 0) {
            *q = value;
        }
    }
}
