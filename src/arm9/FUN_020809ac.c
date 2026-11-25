//cpp
// flags: -O4,s
extern "C" {
extern char *FUN_0208555c(int);
extern void FUN_02080af4(void *, int);
extern int FUN_02042520(void *, int);
extern void *FUN_020ba894(int);
extern void FUN_02080578(void *, void *, void *, void *, void *, void *, int, void *);
}

static inline int is_done(unsigned char *event) {
    return (event[0] != 0) ? 1 : 0;
}

extern "C" void FUN_020809ac(unsigned char *s) {
    int index;
    char *actor, *data, *event, *base, *descriptor, *params;
    int count, i, frame;
    void *memory;
    if (!s[20])
        return;
    actor = FUN_0208555c(*(signed char *)(s + 19));
    if (!actor) {
        FUN_02080af4(s, 1);
        return;
    }
    if (!*(void **)(actor + 140)) {
        FUN_02080af4(s, 1);
        return;
    }
    if (FUN_02042520(*(void **)(actor + 140), 0))
        *(int *)(s + 8) += *(int *)(actor + 212);
    s[20] = 0;
    descriptor = *(char **)(s + 4) + 2 * *(signed char *)(s + 18);
    count = *(signed char *)(descriptor + 1);
    frame = *(int *)(s + 8) >> 12;
    for (i = 0; i < count; ++i) {
        signed char *slot = (signed char *)(s + 12 + i);
        if (*slot == -1)
            continue;
        s[20] = 1;
        for (;;) {
            data = *(char **)(s + 4);
            event = *(char **)(data + 8) + 8 * (*slot);
            if ((unsigned int)frame < (unsigned char)event[1])
                break;
            base = *(char **)(data + 12);
            index = 3 * (*(signed char *)descriptor + i);
            memory = FUN_020ba894(272);
            if (memory) {
                params = *(char **)(s + 4);
                FUN_02080578(memory, event, base + index,
                    *(char **)(params + 16) + 6 * *(signed char *)(event + 5),
                    *(char **)(params + 20) + 6 * *(signed char *)(event + 6),
                    *(char **)(params + 24) + 6 * *(signed char *)(event + 7),
                    *(signed char *)(s + 19), s + 22);
            }
            if (!is_done((unsigned char *)event)) {
                ++(*slot);
            } else {
                *slot = -1;
                break;
            }
        }
    }
}
