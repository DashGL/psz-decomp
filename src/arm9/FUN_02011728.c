// FUN_02011728 @ 0x02011728 (0x74, arm) - ported from FUN_0202bdf0 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
typedef unsigned int u32;
typedef struct { u32 a, b; } Pair;
extern int FUN_0200eef8(int, int, int, int);
extern void FUN_0200efc0(Pair *);
extern int FUN_02059f44(int, Pair);
extern int FUN_0200eea8(int);

int FUN_02011728(int a0, int a1) {
    Pair p;
    if (FUN_0200eef8(a1, a0 + 0xa8, 0x40, 0) != 0x40) {
        return 0;
    }
    FUN_0200efc0(&p);
    if (FUN_02059f44(a0 + 0x5c, p) == 0) {
        return 0;
    }
    *(int *)(a0 + 0xa4) = FUN_0200eea8(a1);
    return 1;
}
