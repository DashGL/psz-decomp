// FUN_02005920 @ 0x02005920 (0x1c, arm) - ported from FUN_0203b61c [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_02005920 @ 0x0203b61c (0x1c body + 2×2B tails of following ARM fns =
 * recorded 0x28 span) — wide-char strlen (MSN): n = -1; do { c = *s++; n++; }
 * while (c); mvn/add/cmp-bne do-while with post-inc ldrh. Called by boss near
 * FUN_0203abf8 (vsnprintf) and wide-strchr bank FUN_0203b658's callers. */
typedef unsigned int u32;
typedef int s32;
typedef unsigned short u16;

s32 FUN_02005920(u16 *s) {
    u32 n = -1;
    u16 c;
    do { c = *s++; n++; } while (c != 0);
    return n;
}
