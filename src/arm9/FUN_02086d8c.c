// FUN_02086d8c @ 0x02086d8c (0x26, thumb) - ported from FUN_02045d84 [banked], verified via tools/match.py (word compare + verify_relocs).
/* NOTE (wave 1015 promotion): the inventory records this
 * span as 0x28, but the real body is 0x26 -- the
 * recorded span over-runs it (trailing inter-function pad /
 * neighbour prologue). Matched at the TRUE size 0x26.
 */
/* FUN_02086d8c @ 0x02045d84 (true body 0x26 of a recorded 0x28, THUMB) -
 * live game-logic percentage roll: clamp the ends, then roll once in the middle.
 *
 * Bytes: 10 b5 04 1c 64 2c 01 db 01 20 10 bd 00 2c 01 dc 00 20 10 bd
 *       64 20 f8 f7 6b fd a0 42 01 d2 01 20 10 bd 00 20 10 bd 00 00
 *   02045d84: 10b5     push  {r4, lr}
 *   02045d86: 041c     adds  r4, r0, #0        ; r4 = pct
 *   02045d88: 642c     cmp   r4, #0x64
 *   02045d8a: 01db     blt   02086d98
 *   02045d8c: 0120     movs  r0, #1
 *   02045d8e: 10bd     pop   {r4, pc}          ; pct >= 100 -> always true
 *   02086d98: 002c     cmp   r4, #0
 *   02045d92: 01dc     bgt   02086da0
 *   02045d94: 0020     movs  r0, #0
 *   02045d96: 10bd     pop   {r4, pc}          ; pct <= 0 -> always false
 *   02086da0: 6420     movs  r0, #0x64
 *   02045d9a: f8f76bfd bl    02035b60          ; FUN_02035b60(100)
 *   02045d9e: a042     cmp   r0, r4
 *   02045da0: 01d2     bhs   02086dae          ; roll >= pct -> false
 *   02045da2: 0120     movs  r0, #1
 *   02045da4: 10bd     pop   {r4, pc}          ; roll <  pct -> true
 *   02086dae: 0020     movs  r0, #0
 *   02045da8: 10bd     pop   {r4, pc}
 *   02045daa: 0000     movs  r0, r0            ; 2-byte inter-function pad
 *
 * MODE - THUMB by stride: 16-bit body, Thumb-2 `bl`, 10bd terminator. No
 * marker. The 4-aligned recorded size does NOT imply ARM here.
 *
 * TRUE SIZE 0x26, recorded 0x28 - the trailing `0000` is the align pad and
 * FUN_02045dac starts at 0x02045dac. Match at 0x26.
 *
 * SEMANTICS FROM THE BYTES: the two end clamps are SEPARATE early-return
 * blocks, each with its own `movs`+`pop` pair, and the roll's own test gets a
 * third. Three sibling `return` statements in that order is the only spelling
 * that yields this layout - an if/else chain reuses one tail and would be two
 * words shorter. The comparison is `bhs` (unsigned >=) against the roll, so the
 * predicate is `roll < pct`, i.e. the strict form; spelling it `roll <= pct`
 * or `pct > roll` changes the branch and does not match.
 *
 * FUN_02035b60 is the title's bounded RNG (see FUN_02045d5c): `roll = rand() %
 * 100`, which is why the argument is the literal 0x64 rather than pct.
 */
typedef unsigned int u32;
typedef int s32;

extern u32 FUN_02035b60(u32 n);

u32 FUN_02086d8c(s32 pct)
{
    s32 r4 = pct;
    if (pct >= 0x64) { return 1; }
    if (pct <= 0) { return 0; }
    if (FUN_02035b60(0x64) < (u32)pct) { return 1; }
    return 0;
}
