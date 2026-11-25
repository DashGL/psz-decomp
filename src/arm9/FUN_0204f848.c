// flags: -O4,p
typedef struct {
    unsigned int w[3];
} Vec3;

extern int FUN_02073198(void);
extern int FUN_020854f8(int);
extern int FUN_02085880(int);
extern char *FUN_0208555c(int);
extern void FUN_0207a358(int, unsigned int, int);
extern void FUN_0203666c(void *);
extern void FUN_020345f0(void *, void *);
extern void FUN_02046d94(void *, int, int);

void FUN_0204f848(char *s) {
    Vec3 point;
    unsigned int desc[25];
    int id = FUN_020854f8(FUN_02073198());
    int ok;
    int kind;
    char *p;

    if (*(int *)(s + 4) == id) {
        if (id == (signed char)s[1]) {
            ok = 1;
        } else {
            ok = 0;
        }
    } else {
        ok = 1;
    }
    if (!ok) {
        return;
    }
    FUN_0207a358(*(int *)(s + 4), *(unsigned int *)(s + 8), (signed char)s[15]);
    if (!FUN_02085880(*(int *)(s + 4))) {
        return;
    }
    p = FUN_0208555c(*(int *)(s + 4));
    if (!p) {
        return;
    }
    switch ((signed char)s[12]) {
        case 0:
        default:
            kind = 0x10;
            break;
        case 1:
            kind = 0x12;
            break;
        case 2:
            kind = 0x14;
            break;
    }
    FUN_0203666c(desc);
    FUN_020345f0(&point, p + 0x9c);
    *(Vec3 *)((char *)desc + 0x20) = point;
    *(unsigned short *)((char *)desc + 0x3a) = *(unsigned short *)(p + 0xc0);
    desc[22] = *(unsigned int *)(s + 4);
    desc[21] = kind;
    desc[4] = (signed char)s[14];
    FUN_02046d94(desc, (signed char)s[13], 0);
}
