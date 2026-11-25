// flags: -O4,s
typedef struct { int x, y, z; } Vec;
typedef union { int align; char b[100]; } Effect;
extern char UNK_020fa1dc[], UNK_020fa204[];
extern signed char UNK_020f2894[];
extern void FUN_0203020c(void *, void *, int), FUN_02076574(void *, int, int), FUN_0207734c(void *), FUN_0203666c(void *), FUN_020302e8(void *, void *), FUN_0203647c(void *, void *, void *), FUN_020304b8(void *, void *), FUN_020304d8(void *), FUN_02076c58(void *, int, int);
extern int FUN_0203068c(void *), FUN_02077664(void *);
extern char *FUN_02046d94(void *, int, int);
char *FUN_02077370(char *s, void *input) {
    Effect e;
    Vec offset, out, p, motion;
    int type;
    char *effect;
    FUN_0203020c(s, input, 7);
    FUN_02076574(s + 48, FUN_0203068c(s), 4);
    *(void **)s = UNK_020fa1dc;
    *(void **)(s + 48) = UNK_020fa204;
    *(void **)(s + 68) = **(void ***)(s + 4);
    *(int *)(s + 72) = 0;
    FUN_0207734c(s + 76);
    *(int *)(s + 100) = 0;
    FUN_0203666c(e.b);
    offset.x = 0; offset.y = 205; offset.z = 0;
    *(int *)(e.b + 84) = 5;
    FUN_020302e8(&p, s);
    FUN_0203647c(&out, &p, &offset);
    *(Vec *)(e.b + 32) = out;
    if (FUN_02077664(s)) { *(int *)(s + 60) = 10; *(int *)(s + 72) = 0; }
    else { effect = FUN_02046d94(e.b, 0, 0); *(char **)(s + 72) = effect; if (effect) *(int *)(effect + 228) |= 1; }
    if (**(int **)(s + 68) >= 0 || FUN_02077664(s)) { motion.x = 0; motion.y = 4096; motion.z = 0; FUN_020304b8(s, &motion); }
    else FUN_020304d8(s);
    type = *(signed char *)(*(char **)(s + 4) + 18);
    if (type >= 0 && type < 22) FUN_02076c58(s + 48, 1, UNK_020f2894[type]);
    return s;
}
