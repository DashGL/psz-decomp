// flags: -O4,s
typedef unsigned long long U64;
extern int FUN_020bbf6c(unsigned);
extern int FUN_020c2e14(int);
extern int FUN_020c2d94(int, int, int);
extern void FUN_02079308(int);
extern void FUN_020c38f0(void *, unsigned);
extern U64 FUN_0200d058(void);
extern int FUN_overlay_16__02120b5c(void *, void *);
#pragma thumb off
extern U64 FUN_02067e0c(void);
#pragma thumb on

void FUN_overlay_16__021201b8(char *self) {
    U64 now, elapsed;
    int duration;
    if (FUN_020bbf6c(1) == 1) {
        FUN_02079308(1);
        return;
    }
    if (*(unsigned *)self) return;
    now = (FUN_02067e0c() << 6) / 33514;
    *(U64 *)(self + 12) += (FUN_0200d058() << 6) / 33514;
    elapsed = now - *(U64 *)(self + 12);
    if (!FUN_020c2e14(2)) return;
    if (elapsed < *(U64 *)(self + 20)) return;
    if (*(unsigned *)(self + 8) != 2) {
        *(unsigned *)(self + 8) = 2;
        FUN_020c2d94(2, 2, 1);
        return;
    }
    FUN_020c38f0(*(void **)(self + 4), 0);
    duration = FUN_overlay_16__02120b5c(self + 32, *(void **)(self + 4));
    *(U64 *)(self + 20) = elapsed + (U64)(long long)duration;
    if (duration == -1) {
        *(unsigned *)self = 1;
        return;
    }
    *(unsigned *)(self + 8) = 1;
    FUN_020c2d94(2, 1, 1);
}
