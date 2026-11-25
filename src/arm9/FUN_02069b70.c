// FUN_02069b70 @ 0x02069b70 (0x88, arm) - ported from FUN_02030d98 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/*
 * FUN_02069b70 — subsystem sync/flush dispatcher (ARM, 0x88). Census:
 * 9.7/s live (idle area), 6.3/s live (second area 2026-09-07); r0 = 1
 * in every observed hit (flag arg). Flow: gate via FUN_0206a05c (else
 * return 0), try a pop via FUN_0206a014 (return node if non-0), then
 * if flag&1: drain — count = FUN_02069f4c(); if count<=0 call
 * FUN_02069c30(1), else loop FUN_02069a60(0) until 0 and re-pop;
 * finally FUN_02069fec() then loop FUN_02069a60(1)/FUN_0206a014 until
 * a pop lands; return it. mode is a loop-carried variable (r4 reused
 * after the flag test: 0 in the drain loop, 1 in the wait loop).
 */
typedef unsigned int u32;

extern int FUN_0206a05c(void);
extern int FUN_0206a014(void);
extern int FUN_02069f4c(void);
extern int FUN_02069a60(u32 mode);
extern int FUN_02069c30(u32 flag);
extern void FUN_02069fec(void);

int FUN_02069b70(u32 flag)
{
    int res;
    int mode;

    if (FUN_0206a05c() == 0) {
        return 0;
    }
    res = FUN_0206a014();
    if (res != 0) {
        return res;
    }
    if ((flag & 1) == 0) {
        return 0;
    }
    if (FUN_02069f4c() > 0) {
        mode = 0;
        do {
        } while (FUN_02069a60(mode) != 0);
        res = FUN_0206a014();
        if (res != 0) {
            return res;
        }
    } else {
        FUN_02069c30(1);
    }
    FUN_02069fec();
    mode = 1;
    do {
        FUN_02069a60(mode);
        res = FUN_0206a014();
    } while (res == 0);
    return res;
}
