// flags: -O4,s
typedef unsigned long long u64;
extern int FUN_020748ec(void *);
extern int FUN_02073fd8(void *);
extern void FUN_020c09bc(int, u64);

typedef struct {
    unsigned char pad0[0x160];
    unsigned char modes[4];
} Obj;

int FUN_0207472c(Obj *self, int index, unsigned char mode) {
    if (FUN_020748ec(self) == 1 && index >= 0 && index < 4 && index != FUN_02073fd8(self)) {
        self->modes[index] = mode;
        FUN_020c09bc(mode, *(u64 *)((char *)self + index * 0x3c + 0x74));
        return 1;
    }
    return 0;
}
