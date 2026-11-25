// flags: -O4,s
extern void *DAT_0211a1f4;
extern int FUN_0206e930(void *, int, void *);
int FUN_0206e8e8(void *unused, unsigned char *out) {
    int result, i;
    if (DAT_0211a1f4) {
        result = FUN_0206e930(unused, 1, out);
        *(unsigned int *)out = 0;
        *(unsigned int *)(out + 8) = 0;
        out[0x2a] = 1;
        for (i = 0; i < 5; ++i) out[0x1d + i] = 0;
        for (i = 0; i < 8; ++i) out[0x22 + i] = 0;
        return result;
    }
    return 0;
}
