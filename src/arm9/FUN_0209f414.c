// flags: -O3,s
extern char UNK_020fc958[];
extern int FUN_0208546c(void);
extern int FUN_02098ed0(void *, void *);
extern void FUN_02098d9c(void *, void *);

void FUN_0209f414(char *s) {
    char *state = *(char **)(s + 12);
    int owner = *(int *)(state + 12);
    int v[3];
    if (owner == FUN_0208546c()) {
        char *ring;
        char *position;
        int index;
        state = *(char **)(s + 12);
        ring = *(char **)(state + 4) + 240;
        index = *(int *)ring;
        if (index >= 0 && index < *(int *)(ring + 4)) {
            index--;
            if (index < 0) {
                index += *(int *)(ring + 4);
            }
            position = ring + 8 + 12 * index;
        } else {
            position = UNK_020fc958;
        }
        FUN_02098d9c(*(void **)(state + 8), position);
    } else if (FUN_02098ed0(s, v)) {
        FUN_02098d9c(*(void **)(*(char **)(s + 12) + 8), v);
    }
    *(int *)(*(char **)(s + 12) + 48) = 0;
}
