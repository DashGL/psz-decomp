// flags: -O4,s
typedef struct {
    unsigned int x;
    unsigned int y;
    unsigned int z;
} Vec3;

extern void FUN_020473e8(void *, void *, int);
extern unsigned int FUN_02035b60(unsigned int);
#pragma thumb off
extern int FUN_0200a3a0(int, int);
#pragma thumb on

void FUN_02048234(char *s, char *p, int kind) {
    Vec3 v;
    Vec3 out;
    unsigned int factor;
    unsigned int mult;
    unsigned int value;
    unsigned int val;

    FUN_020473e8(s, p, 1);
    v = *(Vec3 *)(p + 0x2c);
    val = v.x + FUN_02035b60(0x1000);
    out.x = val;
    out.y = val;
    out.z = val;
    *(Vec3 *)(s + 0x50) = out;
    factor = 1;
    mult = 1;
    if (kind == 1) {
        factor = 16;
        mult = 8;
    }
    value = FUN_02035b60(3) + 5;
    *(unsigned int *)(s + 0x48) = factor * (value * *(unsigned int *)(s + 0x4c));
    *(unsigned int *)(s + 0x104) = mult << 7;
    *(int *)(s + 0x108) = FUN_0200a3a0(0x1f, value);
    *(int *)(s + 0xa8) = 0x1f;
}
