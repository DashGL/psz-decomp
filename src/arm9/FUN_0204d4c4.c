// flags: -O4,s
typedef struct { short c, s; } Trig;
extern const Trig DAT_020ed83c[];
extern const Trig DAT_020ef43c;
extern void *FUN_0204daa8(unsigned int);
extern void FUN_0204624c(unsigned int, void *, void *), FUN_0205abac(void *, int, int), FUN_0205abc8(void *, int, int);
#pragma thumb off
extern void FUN_0205abe0(void *, void *), FUN_0205aa80(void *), FUN_0205aed0(void *, void *, void *);
extern void FUN_0205aaa4(void *, void *), FUN_0205b16c(void *);
extern void FUN_0205b1c8(void *, void *, unsigned int, unsigned int, unsigned int), FUN_0205b68c(void *, void *, void *);
#pragma thumb reset
void FUN_0204d4c4(char *s, unsigned int *position, void *orientation) {
    unsigned int point[3], yaw[9], pitch[9], fixed[9], inverse[9], matrix[9], wide[12], translated[12];
    int idx;
    if (!FUN_0204daa8(*(unsigned int *)(s + 4))) return;
    idx = (*(unsigned short *)(s + 60) >> 4) * 2;
    FUN_0204624c(*(unsigned int *)(s + 4), point, s + 12);
    FUN_0205abac(yaw, ((const short *)DAT_020ed83c)[idx], ((const short *)DAT_020ed83c)[idx + 1]);
    idx = (*(unsigned short *)(s + 62) >> 4) * 2;
    FUN_0205abac(pitch, ((const short *)DAT_020ed83c)[idx], ((const short *)DAT_020ed83c)[idx + 1]);
    FUN_0205abc8(fixed, DAT_020ef43c.c, DAT_020ef43c.s);
    FUN_0205abe0(fixed, inverse);
    FUN_0205aa80(matrix);
    FUN_0205aed0(matrix, pitch, matrix);
    FUN_0205aed0(matrix, inverse, matrix);
    FUN_0205aed0(matrix, yaw, matrix);
    FUN_0205aaa4(matrix, wide);
    FUN_0205b16c(translated);
    FUN_0205b1c8(translated, translated, point[0], point[1], point[2]);
    FUN_0205b68c(translated, wide, translated);
    FUN_0205aa80(orientation);
    FUN_0205aed0(orientation, pitch, orientation);
    FUN_0205aed0(orientation, fixed, orientation);
    FUN_0205aed0(orientation, yaw, orientation);
    if (*(int *)(s + 16) == 2) *(unsigned short *)(s + 62) += 4096;
    else *(unsigned short *)(s + 62) -= 4096;
    position[0] = translated[9];
    position[1] = translated[10];
    position[2] = translated[11];
}
