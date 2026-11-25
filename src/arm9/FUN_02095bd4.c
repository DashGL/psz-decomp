// flags: -O4,s
enum { E0 = 0, E1 = 1 };
typedef struct { int x, y, z; } Vec;
extern void FUN_0203ab7c(void *);
extern void FUN_020958c8(void *);
extern void FUN_02052878(void *, void *, unsigned int);
extern void FUN_02094fac(void *);
extern void FUN_02095120(void *);
extern void FUN_0203ac14(void *);
extern void FUN_02095af0(void *);
extern void FUN_020397d4(void *);
extern void FUN_020345f0(void *, void *);

void FUN_02095bd4(char *s) {
    int state;
    Vec v;
    if (((*(int *)(s + 0xf8) & 8) ? E1 : E0) == 0) return;
    state = *(int *)(s + 576);
    if (state == 3) {
        FUN_0203ab7c(s);
        FUN_020958c8(s);
    } else if ((unsigned int)(state - 5) <= 1) {
        FUN_020958c8(s);
    } else {
        *(int *)(s + 692) &= ~1;
        *(int *)(s + 692) &= ~2;
        *(int *)(s + 696) = 0;
    }
    if (*(void **)(s + 592)) {
        FUN_02052878(*(void **)(s + 592), s + 156, *(unsigned short *)(s + 192));
    }
    FUN_02094fac(s);
    FUN_02095120(s);
    FUN_0203ac14(s);
    FUN_02095af0(s);
    FUN_020397d4(s);
    FUN_020345f0(&v, s + 156);
    *(Vec *)(s + 784) = v;
}
