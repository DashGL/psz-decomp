// flags: -O4,s -noThumb
extern void FUN_0205c6d8(int, int);
extern int FUN_0205c600(void);
int FUN_0201fde0(unsigned int out, unsigned int material) {
    unsigned int width = *(unsigned short *)(material + 44), height = *(unsigned short *)(material + 46), wf = width << 12, hf = height << 12;
    int a, b, q, result, sine, cosine, sx, sy, s, c, t, d;
    unsigned long long value;
    FUN_0205c6d8((int)hf, (int)wf);
    cosine = *(short *)(material + 34);
    sx = *(int *)(material + 24);
    sine = *(short *)(material + 32);
    sy = *(int *)(material + 28);
    c = (int)((unsigned long long)((long long)sx * cosine) >> 12);
    s = (int)((unsigned long long)((long long)sx * sine) >> 12);
    d = (int)((unsigned long long)((long long)sy * cosine) >> 12);
    t = (int)((unsigned long long)((long long)sy * sine) >> 12);
    *(int *)out = c;
    *(int *)(out + 20) = d;
    q = FUN_0205c600();
    *(int *)(out + 4) = (int)((unsigned int)t * (unsigned int)q) >> 12;
    FUN_0205c6d8((int)wf, (int)hf);
    width = *(unsigned short *)(material + 44);
    height = *(unsigned short *)(material + 46);
    a = (-(int)width) << 11;
    b = (-(int)height) << 11;
    value = (unsigned long long)((long long)c * a) - (unsigned long long)((long long)s * b);
    *(unsigned int *)(out + 48) = (unsigned int)(value >> 8) + (width << 15);
    height = *(unsigned short *)(material + 46);
    value = (unsigned long long)((long long)t * a) + (unsigned long long)((long long)d * b);
    *(unsigned int *)(out + 52) = (unsigned int)(value >> 8) + (height << 15);
    q = FUN_0205c600();
    result = (int)((0u - (unsigned int)s) * (unsigned int)q) >> 12;
    *(int *)(out + 16) = result;
    return result;
}