// FUN_02099498 @ 0x02099498 (0x12, thumb) - ported from FUN_02040f88 [banked], verified via tools/match.py (word compare + verify_relocs).
/* NOTE (wave 1015 promotion): the inventory records this
 * span as 0x14, but the real body is 0x12 -- the
 * recorded span over-runs it (trailing inter-function pad /
 * neighbour prologue). Matched at the TRUE size 0x12.
 */
/* FUN_02099498 @ 0x02040f88 (recorded 0x14, THUMB) — null-guarded forward to
 * FUN_020c13ec.
 *
 * Bytes (08 b5 / 00 68 / 00 28 / 03 d0 / 00 29 / 01 d0 / 6a f0 5e fa / 08 bd):
 *   02040f88: 08 b5       push  {r3, lr}
 *   02040f8a: 00 68       ldr   r0, [r0]        ; r0 = obj->field_0
 *   02040f8c: 00 28       cmp   r0, #0
 *   02040f8e: 03 d0       beq   0x20994a8       ; null -> skip call
 *   02040f90: 00 29       cmp   r1, #0
 *   02040f92: 01 d0       beq   0x20994a8       ; arg2 null -> skip call
 *   02040f94: 6a f0 5e fa bl    0x020ab454      ; forward (r0, r1) unchanged
 *   020994a8: 08 bd       pop   {r3, pc}
 *   02040f9a: 00 00       (align pad, inside the recorded 0x14)
 *
 * Semantics from the bytes: a two-guard delegator. It dereferences the FIRST
 * word of the object into r0 and calls FUN_020c13ec with r0 (the loaded
 * pointer) and r1 (the caller's second argument, untouched) — so the callee's
 * first parameter is obj->field_0, NOT the object itself. Both the loaded
 * pointer and the second argument must be non-null or the call is skipped and
 * the function returns void (no return value is ever produced: the epilogue is
 * `pop {r3,pc}` with nothing in r0). Callee arity taken from FUN_020c13ec's
 * OWN body, which saves r4/r5/r6 and consumes r0 via `add r5,r0,#0` and r1 via
 * `add r4,r1,#0` — i.e. exactly two live arguments, matching the two that
 * survive here.
 *
 * ARM/Thumb: THUMB, from the bytes — `push {r3,lr}` in the 16-bit encoding
 * (0xb508) and the 4-byte `bl` (0xf05efa6a) with the Thumb bit pattern; the
 * same bytes read as ARM give `stmdavs` garbage. Recorded 0x14 is 4-aligned
 * and would misread as ARM; real extent is 0x12 + 2 pad.
 */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;

extern void FUN_020c13ec(void *a, void *b);

void FUN_02099498(void *a, void *b) {
    void *p = *(void **)a;
    if (p != 0 && b != 0) {
        FUN_020c13ec(p, b);
    }
}
