// flags: -O4,s
typedef unsigned int u32;
#pragma thumb off
extern u32 FUN_0205e2d4(void), FUN_0205e328(void), FUN_0205e37c(void), FUN_0205e40c(void);
extern u32 FUN_0205e308(void), FUN_0205e35c(void), FUN_0205e3cc(void), FUN_0205e464(void);
extern u32 FUN_0205e03c(void), FUN_0205e090(void), FUN_0205e0e4(void), FUN_0205e1dc(void);
extern u32 FUN_0205e070(void), FUN_0205e0c4(void), FUN_0205e168(void), FUN_0205e260(void);
#pragma thumb on
extern void FUN_02017d14(void *, u32, int, int, int);
extern void FUN_02017dc8(u32, int, int, int, int, int, int, int);
#pragma thumb on
//(void *, int, int);
extern void *FUN_020c3a1c(void);
extern void *FUN_020c39b4(void *);
void FUN_020c35d4(char *self, int *desc) {
    u32 chars[2][4], maps[2][4];
    int x, y, w, h;
    chars[0][0] = FUN_0205e2d4();
    chars[0][1] = FUN_0205e328();
    chars[0][2] = FUN_0205e37c();
    chars[0][3] = FUN_0205e40c();
    chars[1][0] = FUN_0205e308();
    chars[1][1] = FUN_0205e35c();
    chars[1][2] = FUN_0205e3cc();
    chars[1][3] = FUN_0205e464();
    maps[0][0] = FUN_0205e03c();
    maps[0][1] = FUN_0205e090();
    maps[0][2] = FUN_0205e0e4();
    maps[0][3] = FUN_0205e1dc();
    maps[1][0] = FUN_0205e070();
    maps[1][1] = FUN_0205e0c4();
    maps[1][2] = FUN_0205e168();
    maps[1][3] = FUN_0205e260();
    x = desc[3]; *(int *)(self + 0x2c) = x % 8;
    y = desc[4]; *(int *)(self + 0x30) = y % 8;
    w = FUN_020c38c8(self, desc[1], desc[3]);
    h = FUN_020c38c8(self, desc[2], desc[4]);
    { u32 base = chars[desc[7]][desc[6]]; FUN_02017d14(self + 4, base + (u32)desc[0] * 32, w, h, 4); }
    { void *p = FUN_020c39b4(FUN_020c3a1c()); *(void **)(self + 0x1c) = self + 4; *(void **)(self + 0x20) = p; }
    *(u32 *)(self + 0x24) = 0; *(u32 *)(self + 0x28) = 1;
    FUN_02017dc8(maps[desc[7]][desc[6]], w, h, x / 8, y / 8, 32, desc[0], 0);
    *(int *)(self + 0x38) = desc[5];
}