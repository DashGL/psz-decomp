// FUN_020121ac @ 0x020121ac (0x30, arm) - ported from FUN_02016cec [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/*
 * FUN_020121ac @ 0x02016cec (TRUE size 0x30, ARM; next fn at 02016d1c).
 * The DSP send primitive behind all three banked submit wrappers (ab528/
 * ab550/ab608) — the handoff's "real prize". Ghidra's 4th param = phantom
 * pushed-r3 slot (4th occurrence of that pattern). Body: len normalization
 * (len==0 -> 1, then (len+3)&~3 = add #3 / bic #3 with cmp r2,#0 scheduled
 * between), then sign-dispatch on the 3rd arg. ARM ORDER IS LOAD-BEARING:
 * the target keeps the POSITIVE call in-line (if (delta >= 0) return
 * FUN_02011f14(...)) and jumps over the negative arm via blt — the
 * negative-first spelling flips the door to bge and lands 3 words off.
 * Return value = callee's r0 through the pop. Match 19/24 (dsi/1.1 +
 * all 2.0/*), first try after the arm-order flip.
 */
typedef unsigned int u32;

extern int FUN_02011f14(int *p, int len, int delta);
extern int FUN_02011fc8(int *p, int len, int delta);

int FUN_020121ac(int *p, int len, int delta) {
    if (len == 0)
        len = 1;
    len = (len + 3) & ~3;
    if (delta >= 0)
        return FUN_02011f14(p, len, delta);
    return FUN_02011fc8(p, len, -delta);
}
