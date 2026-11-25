// flags: -O4,s
typedef struct {
    int x;
    int y;
    int z;
} Vec;

extern int FUN_02033704(void);
extern int FUN_02030700(void *);
extern void FUN_02033658(int, int, void *);
extern void FUN_02030808(void *, int, int);

void FUN_020a3a58(char *s, int mode) {
    if (FUN_02033704() == 0) {
        if (mode == 0) {
            Vec v = *(Vec *)(s + 0x1c);
            FUN_02033658(4, 2, &v);
        } else if (mode == 1) {
            Vec v = *(Vec *)(s + 0x1c);
            FUN_02033658(4, 3, &v);
        }
    }
    if (mode == 0) {
        *(int *)(s + 0x68) = 0;
    } else if (mode != 0 && mode == 2) {
        if (FUN_02030700(s + 0x58) == 0) {
            FUN_02030808(s + 0x58, 1, 0);
        }
    }
}
