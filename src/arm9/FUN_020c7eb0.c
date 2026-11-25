// flags: -O4,p
extern char *FUN_020c7e54(void *);
extern int FUN_020c6e0c(void *);
extern char *FUN_020c6e10(void *, int);

void FUN_020c7eb0(void *object) {
    int i;
    char *state;
    int count;
    void (*notify)(int, void *);
    state = FUN_020c7e54(object);
    notify = *(void (**)(int, void *))(state + 0x24);
    if (notify) notify(3, *(void **)(state + 0x2c));
    count = FUN_020c6e0c(*(void **)(state + 8));
    for (i = 0; i < count; i++) {
        char *entry = FUN_020c6e10(*(void **)(state + 8), i);
        notify = *(void (**)(int, void *))(entry + 0x34);
        if (notify) notify(3, *(void **)(entry + 0x38));
    }
}
