// flags: -O4,s
void FUN_02052b1c(unsigned int *out, int *p) {
    long long b = p[1], a = p[0]; *out = (unsigned int)(((unsigned long long)(a * a) + 2048) >> 12) + (unsigned int)(((unsigned long long)(b * b) + 2048) >> 12);
}
