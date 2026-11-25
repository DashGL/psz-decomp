// flags: -O4,p
extern int FUN_020c6e0c(void *);
extern void **FUN_020c6e10(void *, int);
extern int FUN_020d8244(void *);
extern int FUN_020d8260(void *);

int FUN_020d8f78(void **s, int ip, unsigned short port) {
    int count;
    void *p;
    int i;
    count = FUN_020c6e0c(s[1]);
    for (i = 0; i < count; i++) {
        p = *FUN_020c6e10(s[1], i);
        if (ip == FUN_020d8244(p) && port == FUN_020d8260(p)) {
            return i;
        }
    }
    return -1;
}
