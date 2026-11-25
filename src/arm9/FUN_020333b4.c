// flags: -O4,s
typedef struct { unsigned int a, b, flags; } Entry;
extern const Entry DAT_020ec2f8[];
extern void FUN_02033378(void *, void *);
void FUN_020333b4(char *s, int clear) {
    if (clear) *(int *)(s + 0x50) = 0;
    else {
        int n = 0, i, count = *(int *)(s + 0x50);
        for (i = 0; i < count; i++) {
            char *p = s + 16 * i;
            int type = *(int *)(p + 4);
            if (type >= 0 && type < 15 && (DAT_020ec2f8[type].flags & 4)) {
                FUN_02033378(s + 16 * n, p);
                ++n;
            }
        }
        *(int *)(s + 0x50) = n;
    }
}
