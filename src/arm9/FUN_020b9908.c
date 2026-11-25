// flags: -O4,s
extern void FUN_02098a08(void *, int, int), FUN_02098aa4(void *, int, int), FUN_0209882c(void *), FUN_02098bc8(void *);
extern int FUN_020b9810(int), FUN_0203b3e4(void *);
extern void *FUN_020b7c20(int);
void FUN_020b9908(char *s) {
    int state;
    char *context, *actor;
    void *target;
    if (*(short *)(s + 4) != 8) {
        if (*(int *)(s + 8) > 0) {
            --*(int *)(s + 8);
            if (*(int *)(s + 8) <= 0) {
                state = *(short *)(s + 4);
                if (state >= 5 && state <= 7) {
                    *(short *)(s + 4) = state + 1;
                    state = *(short *)(s + 4);
                    context = *(char **)(s + 12);
                    FUN_02098a08(*(void **)(context + 8), *(int *)(context + 12), state);
                    *(int *)(s + 8) = FUN_020b9810(state);
                }
            }
        }
    } else if (*(int *)(s + 8) > 0) {
        context = *(char **)(s + 12);
        actor = *(char **)(context + 8);
        if (*(int *)(actor + 4) == 8) {
            target = FUN_020b7c20(*(int *)(context + 12));
            if (target && !FUN_0203b3e4(target)) {
                context = *(char **)(s + 12);
                *(int *)(*(char **)(context + 8) + 4) = 0;
                *(int *)(s + 8) = 0;
            }
        } else {
            FUN_02098aa4(actor, *(int *)(context + 12), 0);
            context = *(char **)(s + 12);
            *(int *)(*(char **)(context + 8) + 4) = 0;
            FUN_0209882c(*(void **)(*(char **)(s + 12) + 8));
            *(int *)(s + 8) = 0;
        }
    }
    FUN_02098bc8(*(void **)(*(char **)(s + 12) + 8));
    if (*(short *)(s + 6) > 0) {
        --*(short *)(s + 6);
        if (*(short *)(s + 6) <= 0) *(int *)(*(char **)(s + 12) + 48) = 0;
    } else if (*(int *)(*(char **)(*(char **)(s + 12) + 8) + 4) == 0) {
        *(short *)(s + 6) = 15;
    }
}
