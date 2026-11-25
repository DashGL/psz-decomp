// flags: -O4,s
typedef struct {
    signed char f0;
    signed char f1;
    signed char pad[3];
    signed char f5;
    signed char f6;
    signed char f7;
    short vals[4];
    signed char f10;
    unsigned char f11;
} Desc;
extern int FUN_0207f334(void *, int);
extern void FUN_0207f34c(void *, int, int, int, int, int);
void FUN_0207f2b0(void *s, Desc *desc) {
    if (FUN_0207f334(s, desc->f5) != 0) {
        int index = desc->f6;
        int enabled = (desc->f10 == 1);
        int flag = ((desc->f11 & 1) != 0);
        int i;
        for (i = 0; i < 4; i++) {
            FUN_0207f34c(s, index, desc->vals[i], desc->f1, enabled, flag);
        }
    }
}
