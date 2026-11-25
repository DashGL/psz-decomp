// FUN_02010980 @ 0x02010980 (0x38, arm) - ported from FUN_0202b03c [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_02010980 @ 0x0202b03c (0x38, ARM), verified dsi/1.1. */
extern int FUN_0200e084(void *, int, int);
int FUN_02010980(char *a0, int a1, int a2) {
    if (*(int *)(a0 + 0x120) == 0) {
        if (!FUN_0200e084(a0, a1, a2)) {
            return 0;
        }
    }
    *(int *)(a0 + 0x120) += 1;
    return 1;
}
