// flags: -O4,p -noThumb
extern void FUN_0200acf0(char *);
int FUN_0200ad78(int unused, char *buf, unsigned int *len_ptr) {
    unsigned int i = 0;
    unsigned int n = *len_ptr;
    for (; i < n; i++) {
        FUN_0200acf0(buf + i);
    }
    return 0;
}
