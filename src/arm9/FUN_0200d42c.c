// flags: -O4,s
int FUN_0200d42c(void *unused, unsigned int value) {
    unsigned int x = value - 1;
    int res = 0;
    if (x > 12) goto done;
    if (!((1u << x) & 0x18c1)) goto done;
    res = 1;
done:
    return res;
}
