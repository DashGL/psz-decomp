// FUN_020557f8 @ 0x020557f8 (0x78, arm) - ported from FUN_02036a58 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_020557f8 @ 0x02036a58 (0x78, ARM), verified 2.0/base. */
typedef unsigned int u32;
typedef unsigned short u16;
extern void FUN_02052f70(void);
extern int FUN_02052fe4(int, int);
extern void FUN_02052de4(int, u32);
extern int FUN_02052f00(u16 *, int);

int FUN_020557f8(u32 a0, u16 a1, u16 a2, u16 a3, u16 a4) {
    u16 stk[5];
    FUN_02052f70();
    int r = FUN_02052fe4(1, 2);
    if (r != 0) {
        return r;
    }
    FUN_02052de4(0x1e, a0);
    stk[0] = 0x1e;
    stk[1] = a1;
    stk[2] = a2;
    stk[3] = a3;
    stk[4] = a4;
    r = FUN_02052f00(stk, 10);
    if (r == 0) {
        r = 2;
    }
    return r;
}
