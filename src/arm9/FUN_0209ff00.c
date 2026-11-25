// flags: -O4,s
extern void FUN_02030808(void *, int, int);
extern void *FUN_02086e3c(void);
extern char *FUN_020870c4(void *);

void FUN_0209ff00(char *s) {
    if (!(*(int *)(s + 96) & 1)) {
        char *save;
        int index;
        *(int *)(s + 96) |= 1;
        FUN_02030808(s + 88, 1, 0);
        save = FUN_020870c4(FUN_02086e3c());
        index = *(int *)(*(char **)(s + 68) + 24);
        if (index >= 0) {
            unsigned int valid;
            if (index < 0) valid = 0;
            else if (index >= 256) valid = 0;
            else valid = 1;
            if (valid) {
                ((unsigned int *)(save + 3404))[index / 32] |= 1U << (index % 32);
            }
        }
    }
}
