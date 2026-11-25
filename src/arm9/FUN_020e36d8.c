// flags: -O4,s
typedef unsigned int u32;
typedef unsigned long long u64;
extern char *FUN_020e961c(void), *FUN_020e05ac(int, u32);
extern struct { char *record; unsigned char pad[24], flag, reset; } DAT_0211de64;
#pragma thumb off
extern u64 FUN_02067e0c(void);
#pragma thumb on

int FUN_020e36d8(int kind, unsigned char *input) {
    u64 now;
    char *p;
    if (!FUN_020e961c()) return 1;
    if (!input) return 3;
    switch (kind) {
    case 0:
        if (*(u32 *)(FUN_020e961c() + 416) == 19) return 1;
        if (input[0] && input[1] <= 1) return 3;
        p = DAT_0211de64.record;
        if (!p) {
            p = FUN_020e05ac(4, 32);
            DAT_0211de64.record = p;
            if (!p) return 4;
        }
        p[0] = input[0];
        DAT_0211de64.record[1] = input[1];
        DAT_0211de64.record[2] = 0;
        DAT_0211de64.record[3] = 0;
        *(u32 *)(DAT_0211de64.record + 4) = *(u32 *)(input + 4);
        *(u32 *)(DAT_0211de64.record + 8) = 0;
        *(u32 *)(DAT_0211de64.record + 12) = 0;
        now = FUN_02067e0c();
        *(u64 *)(DAT_0211de64.record + 16) = now;
        now = FUN_02067e0c();
        *(u64 *)(DAT_0211de64.record + 24) = now;
        return 0;
    case 1:
        if (*(u32 *)input != 0)
            DAT_0211de64.flag = 1;
        else
            DAT_0211de64.flag = 0;
        DAT_0211de64.reset = 0;
        return 0;
    }
    return 2;
}
