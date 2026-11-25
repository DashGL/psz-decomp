// flags: -O4,s
enum { E0 = 0, E1 = 1 };
typedef struct { int x, y, z; } Vec;
extern unsigned char *FUN_0208ed04(void *);
extern void FUN_020302e8(void *, void *), FUN_020bbfbc(void *, int), FUN_020b800c(int, int, int, void *, int), FUN_0203041c(void *);

void FUN_0208e8f4(char *s) {
    int kind, state, angle;
    Vec p, rotated, offset;
    if (*(signed char *)(*(char **)(s + 72) + 1) == 1) {
        kind = 1;
        if ((**(unsigned char **)(s + 76) & 1) ? E1 : E0) state = 0;
        else if ((*FUN_0208ed04(s) & 1) ? E1 : E0) state = 2;
        else state = 1;
    } else {
        kind = 0;
        if ((**(unsigned char **)(s + 76) & 1) ? E1 : E0) state = 0;
        else state = 1;
    }
    FUN_020302e8(&p, s);
    angle = *(unsigned short *)(*(char **)(s + 4) + 16);
    if (kind == 1) {
        offset.x = 0;
        offset.y = 0;
        offset.z = 8806;
        rotated = offset;
        FUN_020bbfbc(&rotated, (unsigned short)(angle + 32768));
        p.x += rotated.x;
        p.y += rotated.y;
        p.z += rotated.z;
    }
    FUN_020b800c(kind, state, *(signed char *)(*(char **)(s + 72) + 3), &p, angle);
    if (((**(unsigned char **)(s + 76) & 2) ? E1 : E0) && *(int *)(s + 84) < 15) (*(int *)(s + 84))++;
    FUN_0203041c(s);
}
