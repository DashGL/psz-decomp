// flags: -O4,s
extern int FUN_020baa40(void *);
#pragma thumb off
extern void FUN_02065774(void *, void *, int);
#pragma thumb on

int FUN_020ba9d8(char *s, char *source, int size) {
    int remaining, offset, used;
    if (size <= 0) return 1;
    used = FUN_020baa40(s);
    if (size > *(volatile int *)(s + 8) - used) return 0;
    offset = *(int *)(s + 16);
    remaining = *(int *)(s + 8) - offset;
    if (size < remaining) {
        FUN_02065774(source, *(char **)(s + 4) + offset, size);
        *(int *)(s + 16) += size;
    } else {
        if (remaining > 0) {
            FUN_02065774(source, *(char **)(s + 4) + offset, remaining);
            size -= remaining;
        }
        *(int *)(s + 16) = 0;
        if (size > 0) {
            FUN_02065774(source + remaining, *(void **)(s + 4), size);
            *(int *)(s + 16) = size;
        }
    }
    return 1;
}
