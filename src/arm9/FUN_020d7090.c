// flags: -O4,p
int FUN_020d7090(char *s, int key) {
    int i = 0;
    char *p = s;
    for (; i < 10; i++, p += 4) {
        if (key == *(int *)(p + 216)) return 1;
    }
    *(int *)(s + 256) = (*(int *)(s + 256) + 1) % 10;
    *(int *)(s + 216 + *(int *)(s + 256) * 4) = key;
    return 0;
}
