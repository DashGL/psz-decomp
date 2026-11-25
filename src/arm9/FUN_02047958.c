// flags: -O4,s
typedef struct { unsigned int x, y, z; } Vector;
extern short DAT_020ed83c[];
extern int FUN_02047440(void *), FUN_0204771c(void *), FUN_0204a9cc(void *);
extern void FUN_02035408(void *, unsigned int, unsigned int, unsigned int);
extern void FUN_020bf680(void *, void *, unsigned int);
extern void FUN_020be5d4(void *, unsigned int, int, void *);
extern void *FUN_020be450(void), *FUN_02034b8c(void *, unsigned int), *FUN_02047ae8(void *);
extern unsigned int FUN_0204daa8(int);
#define W(n) (*(unsigned int *)(s + (n)))
int FUN_02047958(char *s) {
    int result = FUN_02047440(s);
    if (!result && FUN_0204771c(s)) {
        unsigned int query[13];
        Vector position;
        unsigned int plane[2];
        int index = (int)*(unsigned short *)(s + 106) >> 4;
        int x = DAT_020ed83c[index * 2] * (int)W(260);
        int z = DAT_020ed83c[index * 2 + 1] * (int)W(260);
        FUN_02035408(&position, (x >> 12) + W(92), W(96), (z >> 12) + W(100));
        *(Vector *)(s + 92) = position;
        if (W(360) != ~0u) {
            char *object;
            int hit;
            plane[0] = W(92);
            plane[1] = W(100);
            FUN_020bf680(s + 272, plane, W(284));
            FUN_020be5d4(FUN_020be450(), W(360), 0, s + 272);
            if ((W(228) & 0x1000) || (W(228) & 0x400000)) {
                if (!FUN_02034b8c(s + 92, 256)) {
                    if (W(228) & 0x1000) return 1;
                    if (W(228) & 0x400000) W(264) = 1;
                } else if ((W(228) & 0x400000) && W(264)) {
                    W(268) = 1;
                }
            }
            if ((int)W(256) >= 7 && (int)W(256) <= 15) W(268) = 0;
            object = (char *)FUN_0204daa8((int)W(232));
            if (object) object[329] = W(268);
            FUN_02047ae8(query);
            query[0] = W(232);
            query[1] = W(360);
            query[2] = W(96);
            query[3] = W(256);
            if (W(228) & 0x800) query[7] = 1;
            hit = FUN_0204a9cc(query);
            if (object) object[329] = 0;
            if (hit && (W(228) & 0x800)) return 1;
        }
    }
    return result;
}
