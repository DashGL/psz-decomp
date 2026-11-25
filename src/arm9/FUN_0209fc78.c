// flags: -O4,s
typedef struct { int v[3]; } Vec;
extern int FUN_02033704(void);
extern int FUN_02030700(void *);
extern void FUN_02033658(int, int, void *);
extern void FUN_02030808(void *, int, int);

void FUN_0209fc78(char *s, int mode) {
    switch (mode) {
    case 0:
        if (!FUN_02033704()) {
            Vec a = *(Vec *)(s + 28);
            FUN_02033658(4, 2, &a);
        }
        break;
    case 1:
        if (!FUN_02033704()) {
            Vec b = *(Vec *)(s + 28);
            FUN_02033658(4, 3, &b);
        }
        break;
    case 2:
        if (!FUN_02030700(s + 68)) {
            FUN_02030808(s + 68, 1, 0);
        }
        break;
    }
}
