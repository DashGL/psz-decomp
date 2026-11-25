// flags: -O4,s
struct S87748 {
    unsigned short f0;
    unsigned short f2;
    unsigned short f4[5];
    unsigned short fe;
    int f10;
    int f14;
    int f18;
    int f1c;
    int f20[3];
    int f2c[3];
    unsigned short f38;
    unsigned short f3a;
    unsigned short f3c;
    unsigned short f3e;
    int f40;
    int f44;
    int f48;
    int f4c;
    int f50;
    int f54;
    int f58;
    int f5c;
    int f60;
};
extern int DAT_0211a540[];
extern void FUN_02035408(void *, int, int, int);
extern void FUN_020472cc(void *, int);
extern void FUN_020456bc(void *, int);
extern void FUN_020877fc(void *, int, int);

void FUN_02087748(int param_1, int param_2, int param_3, int param_4) {
    struct S87748 s;
    int i;
    int ptr = DAT_0211a540[param_2];
    if (ptr != 0) {
        *(int *)(ptr + 0x140) = 1;
    }
    s.f0 = 0xffff;
    s.f2 = 0xffff;
    for (i = 0; i < 5; i++) {
        s.f4[i] = 0xffff;
    }
    s.f10 = -1;
    s.f14 = -1;
    s.f18 = 0x1000;
    s.f1c = 0;
    FUN_02035408(s.f20, 0, 0, 0);
    FUN_02035408(s.f2c, 0x1000, 0x1000, 0x1000);
    s.f38 = 0;
    s.f3a = 0;
    s.f3c = 0;
    s.f3e = 0;
    s.f58 = -1;
    s.f1c |= 2;
    s.f50 = 0;
    s.f54 = 0x95;
    s.f5c = 0;
    s.f60 = 0;
    s.f40 = -1;
    s.f44 = -1;
    s.f48 = -1;
    s.f4c = -1;
    s.f54 = param_4 + 2;
    s.f58 = param_2;
    FUN_020472cc(&s, param_4 + 2);
    FUN_020456bc(&s, s.f54);
    FUN_020877fc(&s, param_3, param_4);
}
