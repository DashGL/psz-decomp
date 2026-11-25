// flags: -O4,p -noThumb
extern void FUN_0205c6d8(int, int);
extern int FUN_0205c600(void);

int FUN_0201fc30(unsigned char *out, unsigned char *mat) {
    int width = *(unsigned short *)(mat + 0x2c);
    int height = *(unsigned short *)(mat + 0x2e);
    int wf = width << 12;
    int hf = height << 12;
    int a, b, q, res;

    FUN_0205c6d8(hf, wf);
    *(int *)(out + 0x00) = *(short *)(mat + 0x22);
    *(int *)(out + 0x14) = *(short *)(mat + 0x22);
    q = FUN_0205c600();
    *(int *)(out + 0x04) = (*(short *)(mat + 0x20) * q) >> 12;

    FUN_0205c6d8(wf, hf);
    width = *(unsigned short *)(mat + 0x2c);
    height = *(unsigned short *)(mat + 0x2e);
    b = *(int *)(mat + 0x28) * height + ((-height) << 11);
    a = ((-width) << 11) - *(int *)(mat + 0x24) * width;
    *(int *)(out + 0x30) = (int)((unsigned long long)((long long)*(short *)(mat + 0x22) * a - (long long)*(short *)(mat + 0x20) * b) >> 8) + (width << 15);
    *(int *)(out + 0x34) = (int)((unsigned long long)((long long)*(short *)(mat + 0x20) * a + (long long)*(short *)(mat + 0x22) * b) >> 8) + (*(unsigned short *)(mat + 0x2e) << 15);

    q = FUN_0205c600();
    res = (-(*(short *)(mat + 0x20)) * q) >> 12;
    *(int *)(out + 0x10) = res;
    return res;
}
