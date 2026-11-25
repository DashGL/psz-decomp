// FUN_02054c4c @ 0x02054c4c (0x48, arm) - ported from FUN_020364c8 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_02054c4c @ 0x020364c8 (0x48, ARM), verified 2.0/base. */
typedef unsigned short u16;
extern void FUN_02053508(u16, int, int);

int FUN_02054c4c(int a0) {
    if (a0 == 0) {
        return 6;
    }
    if (*(u16 *)(a0 + 0x80e) == 0) {
        return 3;
    }
    FUN_02053508(*(u16 *)(a0 + 0x816), 0, 0);
    *(u16 *)(a0 + 0x80e) = 0;
    *(u16 *)(a0 + 0x81c) = 0;
    return 0;
}
