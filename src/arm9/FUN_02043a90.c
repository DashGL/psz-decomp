// flags: -O4,s
enum { E0 = 0, E1 = 1 };
typedef struct { unsigned int x, y, z; } V;
extern void *DAT_02108c84;
extern void *DAT_02108d5c;
extern V DAT_020fc958;
extern void FUN_02043c58(void);
#pragma thumb off
extern void *FUN_0200c2dc(unsigned int, unsigned int, unsigned int, void *, unsigned int);
extern void FUN_0205aa80(void *);
#pragma thumb on
extern unsigned int FUN_0203ff7c(void *, int, int);
extern void *FUN_02033ce0(void *, unsigned int, int, unsigned int);
extern void *FUN_02033d60(void *, unsigned int, int, unsigned int);
extern void FUN_02044ec4(void *, void *, int);
extern void FUN_02035408(V *, unsigned int, unsigned int, unsigned int);
extern void FUN_020426d8(void *, V *);
extern void FUN_02043ea4(void *, int, int);
#define W(n) (*(unsigned int *)(s + (n)))
#define P(n) (*(char **)(s + (n)))
void FUN_02043a90(char *s) {
    void *manager = DAT_02108c84;
    char *data = P(20);
    int i, j;
    V v1, v2;
    W(156) = *(unsigned int *)(data + 12);
    P(152) = FUN_0200c2dc(W(156), 112, 0, (void *)FUN_02043c58, 0);
    for (i = 0; i < (int)W(156); i++) {
        char *spec = *(char **)(data + 8) + 20 * i;
        char *part = P(152) + 112 * i;
        unsigned int id, scale;
        void *handle;
        *(int *)part = 0;
        *(int *)(part + 4) = 1;
        *(int *)(part + 8) = 0;
        *(int *)(part + 12) = 0;
        *(V *)(part + 16) = DAT_020fc958;
        FUN_0205aa80(part + 28);
        *(short *)(part + 64) = 0;
        *(short *)(part + 66) = 0;
        *(short *)(part + 68) = 0;
        *(short *)(part + 70) = 0;
        for (j = 0; j < 5; j++) {
            *(unsigned short *)(part + 72 + 8 * j) = 65535;
            *(short *)(part + 74 + 8 * j) = 0;
            *(int *)(part + 76 + 8 * j) = 4096;
        }
        id = FUN_0203ff7c(DAT_02108d5c, **(signed char **)(P(20)), *(signed char *)spec);
        if (*(signed char *)(spec + 2) == 2) {
            handle = FUN_02033ce0(manager, id, 7, 65535);
            FUN_02044ec4(handle, *(void **)(P(152) + 112 * *(signed char *)(spec + 3)), *(signed char *)(spec + 4));
            *(void **)part = handle;
        } else {
            *(void **)part = FUN_02033d60(manager, id, 7, 65535);
        }
        scale = *(unsigned int *)(*(char **)P(20) + 24);
        if (scale != 4096) {
            FUN_02035408(&v1, scale, scale, scale);
            *(V *)(s + 76) = v1;
            FUN_020426d8(*(void **)part, (V *)(s + 76));
        }
        switch (*(signed char *)(spec + 2)) {
        case 0:
            *(int *)(part + 4) = 0;
            FUN_02035408(&v2, *(unsigned int *)(spec + 8), *(unsigned int *)(spec + 12), *(unsigned int *)(spec + 16));
            *(V *)(part + 16) = v2;
            *(unsigned short *)(part + 66) = *(unsigned short *)(spec + 6);
            break;
        case 1:
            *(int *)(part + 4) = 1;
            break;
        case 2:
            *(int *)(part + 4) = 2;
            *(int *)(part + 8) = *(signed char *)(spec + 3);
            *(int *)(part + 12) = *(signed char *)(spec + 4);
            break;
        }
        if (((*(signed char *)(spec + 1) & 2) ? E1 : E0) != E0) *(short *)(part + 70) |= 2;
        FUN_02043ea4(s, i, (*(signed char *)(spec + 1) & 1) != 0);
    }
}
