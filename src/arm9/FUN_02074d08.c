// flags: -O4,s
extern char *FUN_020734f4(void);
extern int FUN_020b3bc8(void *);
int FUN_02074d08(void) {
    int count = 0;
    char *p = FUN_020734f4();
    if (p) {
        int i;
        for (i = 0; i < 4; i++, p += 80)
            if (!FUN_020b3bc8(p)) count++;
    }
    return count;
}
