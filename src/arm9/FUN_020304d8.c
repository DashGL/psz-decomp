// FUN_020304d8 @ 0x020304d8 (0xe, thumb) - ported from FUN_020719c4 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,p
/*
 * FUN_020304d8 @ 0x020719c4 (0xe, Thumb) — poll wrapper: v = node->[+0x10];
 * if (v != 0) FUN_02044d70(v, <arg2>) — the loaded value is arg1; arg2 is
 * the r1 value still live from the CALLER (target leaves r1 untouched
 * before the bl) — spelled via the MSL unprototyped-call lever
 * (extern int FUN_02044d70(); called with one arg).
 * Twin of FUN_020a9384's shape; independently byte-exact, all 19 dsi+2.0
 * builds (1.2 sizes out).
 */
typedef unsigned int u32;

extern int FUN_02044d70();
void FUN_020304d8(u32 *node)
{
    u32 *next = (u32 *)node[4];
    if (next != 0)
        FUN_02044d70(next);
}
