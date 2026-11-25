// flags: -O4,p
extern signed char *DAT_0211dba0;
signed char *FUN_020d82d4(signed char *input, int delimiter) {
    signed char *start, *p;
    int c;
    if (input) DAT_0211dba0 = input;
    start = DAT_0211dba0;
    p = start;
    while ((c = *p) != 0 && c != delimiter) {
        p++;
        DAT_0211dba0 = p;
    }
    if (p == start) start = 0;
    if (c) {
        DAT_0211dba0++;
        *p = 0;
    }
    return start;
}
