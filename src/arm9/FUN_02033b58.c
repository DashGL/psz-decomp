// FUN_02033b58 @ 0x02033b58 (0xe, thumb) - ported from FUN_02070c8c [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,p
/*
 * FUN_02033b58 @ 0x02070c8c (0xe, Thumb) — poll wrapper: v = node->[+0x04];
 * if (v != 0) FUN_0206e6a4(v) — the LOADED FIELD VALUE is the callee's
 * first arg (target ldr r0,[r0,#4] then bl, r0 = the load).
 * FUN_0206e6a4 = recursive completion drainer (drains node->next chains).
 * Twin of FUN_020a9384's shape; independently byte-exact, all 19 dsi+2.0
 * builds (1.2 sizes out).
 */
typedef unsigned int u32;

extern void FUN_0206e6a4(u32 *n);
void FUN_02033b58(u32 *node)
{
    u32 *next = (u32 *)node[1];
    if (next != 0)
        FUN_0206e6a4(next);
}
