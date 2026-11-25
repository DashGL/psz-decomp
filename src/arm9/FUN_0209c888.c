// flags: -O4,s
extern int FUN_020b7c5c(int);
int FUN_0209c888(void *self, int fallback, int id, signed char *desc) {
    signed char *p = desc + 4;
    int type = p[0];
    if (type == 1) goto ok;
    if (type == 2) goto ok;
    if (type == 3) goto ok;
    if (type == 5) {
        if (p[1] != 0) goto fail;
    } else {
        goto fail;
    }
ok:
    if (!FUN_020b7c5c(id)) id = -1;
    return id;
fail:
    return fallback;
}
