// flags: -O4,p
void *FUN_020c7010(void *key, char *base, int count, int stride, int (*compare)(void *, void *)) {
    int i;
    for (i = 0; i < count; i++) {
        if (!compare(key, base + i * stride)) {
            return base + stride * i;
        }
    }
    return 0;
}
