// flags: -O4,s
extern int FUN_0204d784(void *, void *);
int FUN_0204c684(char *self, void *arg) {
    int result = 0;
    if (*(void **)(self + 0x11c)) result = FUN_0204d784(*(void **)(self + 0x11c), arg);
    return result;
}
