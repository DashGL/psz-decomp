// flags: -O4,s
extern char UNK_020fc88c[];
extern void FUN_020b9e9c(void *);
void *FUN_020b9e28(char *s) {
    char *owner, *prev, *next;
    *(void **)s = UNK_020fc88c;
    {
        int destroyed = !!(*(int *)(s + 4) & 64);
        if (destroyed == 0) {
            *(int *)(s + 4) |= 64;
            FUN_020b9e9c(s);
            owner = *(char **)(s + 24);
            if (owner) {
                prev = *(char **)(s + 16);
                if (prev == s) {
                    *(void **)(owner + 28) = 0;
                } else if (*(char **)(owner + 28) == s) {
                    *(void **)(owner + 28) = *(void **)(s + 20);
                    *(void **)(*(char **)(s + 16) + 20) = 0;
                    next = *(char **)(s + 20);
                    if (next)
                        *(void **)(next + 16) = *(void **)(s + 16);
                } else {
                    *(void **)(prev + 20) = *(void **)(s + 20);
                    next = *(char **)(s + 20);
                    if (next)
                        *(void **)(next + 16) = *(void **)(s + 16);
                    else
                        *(void **)(*(char **)(*(char **)(s + 24) + 28) + 16) = *(void **)(s + 16);
                }
            }
        }
    }
    return s;
}
