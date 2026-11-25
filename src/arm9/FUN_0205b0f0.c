// flags: -O4,p -noThumb
void FUN_0205b0f0(const int *a, const int *b, int *c) {
    int x = a[0];
    int y = a[1];
    int z = a[2];
    c[0] = (int)(((long long)x * b[0] + (long long)y * b[3] + (long long)z * b[6]) >> 12);
    c[1] = (int)(((long long)x * b[1] + (long long)y * b[4] + (long long)z * b[7]) >> 12);
    c[2] = (int)(((long long)x * b[2] + (long long)y * b[5] + (long long)z * b[8]) >> 12);
}
