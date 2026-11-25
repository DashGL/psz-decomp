// flags: -O4,s
enum { E0 = 0, E1 = 1 };
typedef struct { unsigned int w[25]; } Effect;
typedef struct { unsigned int x, y, z; } Vec;
extern int FUN_020855bc(unsigned int);
extern void *FUN_02050018(unsigned int, void *, unsigned int, unsigned int);
extern int FUN_0206d36c(void *, int *);
extern int FUN_02085880(unsigned int);
extern int FUN_0208555c(unsigned int);
extern void *FUN_0203666c(void *);
extern unsigned int FUN_0204f24c(unsigned int, unsigned int);
extern void FUN_02046d94(void *, int, int);
extern void FUN_0204e410(void);
extern unsigned int *DAT_02108c64;

void FUN_0204e2c0(unsigned int source, unsigned int target) {
    Effect e;
    unsigned int descriptor[5];
    Vec v;
    if (((FUN_020855bc(source) == 1) ? E1 : E0) || ((FUN_020855bc(source) == 3) ? E1 : E0))
        FUN_02050018(16, (void *)FUN_0204e410, source, target);
    if ((FUN_020855bc(target) == 3) ? E1 : E0) {
        unsigned int *p = DAT_02108c64;
        descriptor[0] = p[9];
        descriptor[1] = p[10];
        descriptor[2] = p[11];
        descriptor[3] = p[12];
        descriptor[4] = p[13];
        if (FUN_0206d36c(descriptor, 0)) return;
    }
    if (FUN_02085880(target) && FUN_0208555c(target)) {
        FUN_0203666c(&e);
        e.w[22] = target;
        e.w[21] = 11;
        v.x = 0; v.y = 4096; v.z = 0;
        *(Vec *)&e.w[8] = v;
        e.w[7] |= 0x2000000;
        e.w[7] |= 0x100000;
        e.w[17] = 72;
        e.w[18] = 1;
        e.w[19] = 0xffffffff;
        e.w[16] = 0;
        e.w[4] = FUN_0204f24c(e.w[22], source);
        FUN_02046d94(&e, 0, 0);
    }
}
