// FUN_02087138 @ 0x02087138 (0x18, thumb) - ported from FUN_0209f1a8 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,p
/* FUN_02087138 @ 0x0209f1a8 (0x18, Thumb), verified dsi/1.1.
 * Player-record state predicate: signed state at +38 must be nonnegative
 * and below3; busy field at +34 must be zero. Explicit conditional returns
 * reproduce the shared failure block; boolean-expression return materialized
 * a temporary and enlarged the function. Separate signed comparisons retained.
 * Return9f1be ends full18 with no pool or alignment padding.
 * 2026-10-15: full bytes and relocations match -O4,p (also -O4,s/O3,s/O2,s).
 */
typedef unsigned char u8;
typedef int s32;
s32 FUN_02087138(u8 *obj) {
    if (*(s32 *)(obj + 0x38) >= 0 && *(s32 *)(obj + 0x38) < 3 &&
        !*(s32 *)(obj + 0x34))
        return 1;
    return 0;
}
