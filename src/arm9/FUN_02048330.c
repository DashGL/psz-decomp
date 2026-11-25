// FUN_02048330 @ 0x02048330 (0x12, thumb) - ported from FUN_0204f1cc [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,p
/*
 * FUN_02048330 @ 0x0204f1cc (0x12 true / 0x14 recorded incl. 2-byte pad,
 * Thumb) — triple-null-check virtual dispatch: three `p != 0` terms (the
 * target really emits three separate checks — do not fold), then
 * f = *(fn-ptr*)(*(u32*)p + 4); f(p) — vtable-call idiom via a named
 * function-pointer local.
 * Twin of FUN_02063dc0's shape; independently byte-exact, all 9 dsi +
 * all 10 2.0 builds (1.2 sizes out).
 */
typedef unsigned int u32;

void FUN_02048330(u32 p)
{
    if (p != 0 && p != 0 && p != 0) {
        void (*f)(u32);
        f = (void (*)(u32))*(u32 *)(*(u32 *)p + 4);
        f(p);
    }
}
