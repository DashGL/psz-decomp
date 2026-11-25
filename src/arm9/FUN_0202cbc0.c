// flags: -O4,p -noThumb
int FUN_0202cbc0(const unsigned short *a, const unsigned short *b, unsigned int count) {
    int i;
    for (i = (int)count - 1; i >= 0; i--) {
        if (a[i] > b[i]) return 1;
        if (a[i] < b[i]) return -1;
    }
    return 0;
}
