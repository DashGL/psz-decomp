// flags: -O4,s
struct G_211dbd8 { unsigned int f0, f4, f8; };
extern struct G_211dbd8 DAT_0211dbd8;
extern void FUN_020656b8(unsigned int, unsigned int, unsigned int);
extern unsigned int FUN_02065774(unsigned int, unsigned int, unsigned int);
unsigned int FUN_020ddbe8(unsigned int out) {
    int status;
    unsigned int result;
    if (!DAT_0211dbd8.f8) FUN_020656b8(out, 0, 452);
    FUN_02065774(DAT_0211dbd8.f8 + 0x1008, out, 452);
    status = *(int *)out;
    if (status < 20000 || status >= 30000) *(unsigned int *)out = 0x5206;
    status = *(int *)out;
    result = 20100;
    if (status >= 20100) {
        result = 0u - (unsigned int)status;
        *(unsigned int *)out = result;
    }
    return result;
}
