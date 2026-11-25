// flags: -O4,s
typedef struct { int x, y, z; } V;
#pragma thumb off
extern int FUN_0205c9e4(int, int);
#pragma thumb reset
extern char *FUN_0208555c(int);
extern void FUN_020345f0(void *, void *), FUN_02036348(void *, void *, void *), FUN_020bbfbc(void *, int), FUN_0203647c(void *, void *, void *), FUN_020985c4(void *, int, int, void *, void *, int);
void FUN_02098660(int *s, int a, int b, V *target, V *direction, V *offset, int mode) {
    V difference, origin, result, rotated;
    int angle = FUN_0205c9e4(direction->x, direction->z);
    char *actor = FUN_0208555c(*s);
    unsigned short delta;
    if (actor) {
        delta = angle - *(unsigned short *)(actor + 192);
        if (delta >= 16384 && delta <= 49152) {
            FUN_020345f0(&origin, actor + 156);
            FUN_02036348(&difference, target, &origin);
            angle = FUN_0205c9e4(difference.x, difference.z);
        }
    }
    rotated = *offset;
    FUN_020bbfbc(&rotated, angle);
    FUN_0203647c(&result, target, &rotated);
    FUN_020985c4(s, a, b, &result, direction, mode);
}
