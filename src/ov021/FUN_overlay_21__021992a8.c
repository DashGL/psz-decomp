// flags: -O4,s
typedef struct Vec { int x, y, z; } Vec;
typedef struct {
    char pad[0x118];
    int slots[10];
} Self_021992a8;
extern int DAT_020ed09c;
extern int FUN_02074e9c(void *, int, int, int);
extern void *FUN_02075040(void *, int);
extern void *FUN_020991c0(void *, const int *);
void FUN_overlay_21__021992a8(char *self, int scalar, int index) {
    int i = 0, invalid = DAT_020ed09c;
    for (; i < 10; i++) {
        if (invalid == ((Self_021992a8 *)self)->slots[i]) {
            ((Self_021992a8 *)self)->slots[i] = FUN_02074e9c(self, 15, 0, 0);
            if (invalid != ((Self_021992a8 *)self)->slots[i]) {
                char *child = FUN_02075040(self, ((Self_021992a8 *)self)->slots[i]);
                if (child) {
                    Vec position, scale = *(Vec *)(child + 0x50);
                    FUN_020991c0(&scale, &scalar);
                    *(Vec *)(child + 0x50) = scale;
                    if (index == -1) position = *(Vec *)(self + 0x38);
                    else position = *(Vec *)(*(char **)(self + 0xec) + index * 188 + 0x60);
                    *(Vec *)(child + 0x5c) = position;
                }
                break;
            }
        }
    }
}
