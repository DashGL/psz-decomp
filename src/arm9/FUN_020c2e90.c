// FUN_020c2e90 @ 0x020c2e90 (0x36, thumb) - ported from FUN_020a9550 [banked], verified via tools/match.py (word compare + verify_relocs).
/* NOTE (wave 1020 promotion): the inventory records this
 * span as 0x38, but the real body is 0x36 -- the
 * recorded span over-runs it (trailing inter-function pad /
 * neighbour prologue). Matched at the TRUE size 0x36.
 */
/* FUN_020c2e90 @ 0x020a9550 (0x38 rec, THUMB) — wave 1020 w3, iter 4.
 * Sorted sparse SWITCH: callee g_FUN_020c2fc8(mode) returns (s8)-0x10/0/0x10;
 * MWCC's cascade tests -0x10 (materialized movs r1,#0xf; mvns r1,r1), 0,
 * 0x10, with the flat default pop between test3 and the bodies; bodies
 * emitted in source case order A(-0x10), C(0x10), B(0) after it.
 */
typedef unsigned int u32;

extern int g_FUN_020c2fc8(u32 mode);

void FUN_020c2e90(u32 *outA, u32 *outB, int mode) {
    int r = g_FUN_020c2fc8(mode);
    switch (r) {
    case -0x10: *outA = 1; *outB = 1; break;
    case 0x10:  *outA = 1; *outB = 2; break;
    case 0:     *outA = 2; break;
    }
}
