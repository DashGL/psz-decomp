// flags: -O4,s
typedef struct { int x, y, z; } Vec;
extern char UNK_020fb814[], UNK_020fb838[];
extern void FUN_0203020c(void *, void *, int), FUN_02076574(void *, int, int), FUN_020306e4(void *, void *, int, int), FUN_0203666c(void *);
extern int FUN_0203068c(void *);
extern unsigned char *FUN_02030dd0(void *);
extern char *FUN_02046d94(void *, int, int);

char *FUN_0209f60c(char *s, void *input) {
    int effect[25];
    int flag;
    FUN_0203020c(s, input, 21);
    FUN_02076574(s + 48, FUN_0203068c(s), 6);
    *(void **)s = UNK_020fb814;
    *(void **)(s + 48) = UNK_020fb838;
    *(void **)(s + 68) = **(void ***)(s + 4);
    *(void **)(s + 72) = FUN_02030dd0(s);
    FUN_020306e4(s + 76, *(char **)(s + 68) + 16, 1, 1);
    FUN_020306e4(s + 84, *(char **)(s + 68) + 24, 1, 0);
    FUN_020306e4(s + 92, *(char **)(s + 68) + 8, 1, 1);
    *(int *)(s + 100) = 0;
    *(int *)(s + 104) = 0;
    *(int *)(s + 108) = 0;
    flag = 0;
    if (**(unsigned char **)(s + 72) & 1) flag = 1;
    if (!flag) {
        FUN_0203666c(effect);
        *(Vec *)((char *)effect + 32) = *(Vec *)(s + 28);
        *(unsigned short *)((char *)effect + 58) = *(unsigned short *)(s + 44);
        effect[21] = 48;
        effect[22] = FUN_0203068c(s);
        *(char **)(s + 100) = FUN_02046d94(effect, 0, 0);
        if (*(char **)(s + 100)) {
            *(int *)(*(char **)(s + 100) + 228) |= 2;
            *(int *)(*(char **)(s + 100) + 228) |= 1;
        }
    }
    *(short *)(s + 64) = 0;
    *(short *)(s + 66) = 12;
    return s;
}
