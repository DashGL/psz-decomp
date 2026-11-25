// FUN_020662b4 @ 0x020662b4 (0x28, arm) - ported from FUN_02033ac4 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
typedef char *va_list;
#define __va_start(parm) ((va_list)(((unsigned int)(&parm) & ~3u) + 4u))

extern int FUN_020662dc(void *a, int b, const char *fmt, va_list ap);

int FUN_020662b4(void *a, int b, const char *fmt, ...) {
    return FUN_020662dc(a, b, fmt, __va_start(fmt));
}
