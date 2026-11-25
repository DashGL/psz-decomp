// flags: -O4,s
typedef struct { int x, y, z; } Vec_0209d9f4;
typedef struct { int w[25]; } Desc_0209d9f4;
extern const short UNK_020ed83c[];
extern void FUN_02033658(int, int, Vec_0209d9f4 *), FUN_0203666c(Desc_0209d9f4 *), FUN_02046d94(Desc_0209d9f4 *, int, int), FUN_02044c08(void *, Vec_0209d9f4 *, int), FUN_02099f1c(void *);
void FUN_0209d9f4(char *s, int event) {
    Desc_0209d9f4 first, second;
    Vec_0209d9f4 a, b, zero, c, d;
    if (event == 0) {
        int a2;
        a = *(Vec_0209d9f4 *)(s + 28);
        FUN_02033658(4, 14, &a);
        FUN_0203666c(&first);
        first.w[21] = 15;
        a2 = (*(unsigned short *)(s + 44) >> 4) * 2;
        b = *(Vec_0209d9f4 *)(s + 28);
        b.x += (int)(((long long)UNK_020ed83c[a2] * 2048 + 2048) >> 12);
        b.y += 2048;
        b.z += (int)(((long long)UNK_020ed83c[a2 + 1] * 2048 + 2048) >> 12);
        *(Vec_0209d9f4 *)((char *)&first + 32) = b;
        *(unsigned short *)((char *)&first + 58) = *(unsigned short *)(s + 44);
        FUN_02046d94(&first, 0, 0);
    } else if (event == 1) {
        zero.x = 0;
        zero.y = 0;
        zero.z = 0;
        FUN_02044c08(s + 80, &zero, 1);
    } else if (event == 2) {
        *(int *)(s + 316) = 0;
        *(int *)(s + 320) = 0;
        FUN_0203666c(&second);
        second.w[21] = 9;
        c = *(Vec_0209d9f4 *)(s + 28);
        c.y += 2048;
        *(Vec_0209d9f4 *)((char *)&second + 32) = c;
        FUN_02046d94(&second, 0, 0);
        d = *(Vec_0209d9f4 *)(s + 28);
        FUN_02033658(4, 15, &d);
        FUN_02099f1c(s + 80);
    }
}
