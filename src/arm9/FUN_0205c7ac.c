// flags: -O4,p -noThumb
int FUN_0205c7ac(const int *a, const int *b) {
    return (int)(((long long)a[0] * b[0] + (long long)a[1] * b[1] + (long long)a[2] * b[2] + (1 << 11)) >> 12);
}
