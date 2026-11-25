// flags: -O4,s
typedef struct { unsigned int x, y, z; } Vector;
extern const short DAT_020ed83c[];
extern int FUN_020446f8(void *, Vector *);
extern void FUN_0203647c(Vector *, void *, Vector *);
extern void FUN_02036384(void *, Vector *);
extern void FUN_02036a4c(void *, int);
extern void FUN_02036a88(void *, int);

void FUN_020363c4(char *s) {
    Vector input, step, first, second;
    if (FUN_020446f8(s, &input)) {
        FUN_0203647c(&first, s + 56, &input);
        FUN_02036384(s, &first);
    }
    if (*(int *)(s + 92) > 0) {
        int angle = *(unsigned short *)(s + 88) >> 4;
        step.x = (unsigned int)(((long long)DAT_020ed83c[2 * angle] * 1024 + 2048) >> 12);
        step.y = 0;
        step.z = (unsigned int)(((long long)DAT_020ed83c[2 * angle + 1] * 1024 + 2048) >> 12);
        FUN_0203647c(&second, s + 56, &step);
        FUN_02036384(s, &second);
        *(int *)(s + 92) -= 1024;
    }
    if (*(int *)(s + 96) > 0) {
        *(int *)(s + 96) -= 1;
        FUN_02036a4c(s, 2);
    } else {
        FUN_02036a88(s, 2);
    }
}
