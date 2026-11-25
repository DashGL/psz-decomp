// flags: -O4,s -noThumb
extern void FUN_0205c6d8(int, int);
extern int FUN_0205c600(void);
int FUN_0201fed8(unsigned int out, unsigned int material) {
    unsigned int width = *(unsigned short *)(material + 44), height = *(unsigned short *)(material + 46), wf = width << 12, hf = height << 12;
    int a, b, q, result, sine, cosine;
    unsigned long long value;
    FUN_0205c6d8((int)hf, (int)wf);
    *(int *)out = *(short *)(material + 34);
    *(int *)(out + 20) = *(short *)(material + 34);
    q = FUN_0205c600();
    result = (int)((unsigned int)(int)*(short *)(material + 32) * (unsigned int)q) >> 12;
    *(int *)(out + 4) = result;
    FUN_0205c6d8((int)wf, (int)hf);
    width = *(unsigned short *)(material + 44);
    height = *(unsigned short *)(material + 46);
    a = (-(int)width) << 11;
    b = (-(int)height) << 11;
    cosine = *(short *)(material + 34);
    sine = *(short *)(material + 32);
    value = (unsigned long long)((long long)cosine * a) - (unsigned long long)((long long)sine * b);
    *(unsigned int *)(out + 48) = (unsigned int)(value >> 8) + (width << 15);
    *(unsigned int *)(out + 52) = (unsigned int)(((unsigned long long)((long long)*(short *)(material + 32) * a) + (unsigned long long)((long long)*(short *)(material + 34) * b)) >> 8) + (*(unsigned short *)(material + 46) << 15);
    q = FUN_0205c600();
    result = (int)((0u - (unsigned int)(int)*(short *)(material + 32)) * (unsigned int)q) >> 12;
    *(int *)(out + 16) = result;
    return result;
}