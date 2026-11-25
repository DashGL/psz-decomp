// FUN_0200fb94 @ 0x0200fb94 (0x28, arm) - ported from FUN_0202a224 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_0200fb94 @ 0x0202a224 (0x28 = 10 ARM words, ARM) — insert a range into
 * a growable list: append-then-relink one element, then close the array over
 * [arg0, arg0+arg1).
 *
 * Bytes (10 words):
 *   0202a224: 38 40 2d e9   stmdb sp!, {r3, r4, r5, lr}
 *   0202a228: 01 40 a0 e1   mov   r4, r1
 *   0202a22c: 02 10 a0 e1   mov   r1, r2
 *   0202a230: 00 50 a0 e1   mov   r5, r0
 *   0202a234: 03 20 a0 e1   mov   r2, r3
 *   0202a238: e3 ff ff eb   bl    0x0202a1cc
 *   0202a23c: 05 00 a0 e1   mov   r0, r5
 *   0202a240: 04 10 85 e0   add   r1, r5, r4
 *   0202a244: eb 19 00 eb   bl    0x020309f8
 *   0202a248: 38 80 bd e8   ldmia sp!, {r3, r4, r5, pc}
 *
 * Semantics re-derived from the target bytes:
 *  - FOUR register arguments, shuffled. Incoming (r0,r1,r2,r3) is moved to
 *    (r5, r4, r1, r2), i.e. the callee sees
 *    (arg0, arg2, arg3) — arg1 is SKIPPED entirely and consumed by nothing.
 *    This is the same register-shuffle idiom as banked FUN_0202a2ac, which
 *    forwards (arg0, arg2, arg3) to this very callee; here it is fused with
 *    the second call instead of following it. So the C needs a FOUR-
 *    parameter signature with the second one unused.
 *  - arg1 is NOT dead: it is recovered from r4 after the first call and
 *    used for the pointer arithmetic `add r1, r5, r4`, i.e. arg0+arg1 is
 *    the END of the range. So the source is
 *    `FUN_0200fb3c(arg0, arg2, arg3); FUN_020697f0(arg0, arg0 + arg1);`
 *  - the second callee receives r0 = arg0 and r1 = arg0+arg1, and its own
 *    body (`mov r2,r1 ; mov r3,#0 ; mov r1,r0 ; mov r0,#0x1e ; str r3,[sp]`)
 *    confirms it takes TWO arguments and forwards a fifth on the stack.
 *
 * ARITY (rule C8, from the callees' own bodies): 0x0202a1cc opens
 * `push {r3,r4,r5,r6,r7,lr}` and does `mov r4,r1 / mov r7,r0 / mov r6,r2`
 * plus `popeq` on the incoming condition — three register arguments,
 * agreeing with the shuffle. 0x020309f8 moves r1 and r0 into r2 and r1 and
 * passes a stack slot, so it takes two register arguments.
 *
 * CLASSIFICATION — REPORTED MATCH BUT NOTED AS ALLOCATOR PLUMBING: this is
 * the allocator-adjacent cluster banked FUN_0202a2ac was rejected for.
 * 0x0202a1cc brackets its work in CPSR critical sections and calls
 * 0x02029190 / 0x02029670 / 0x02029698, which the census marks `demoted`
 * with `lit:ram` evidence (heap bookkeeping), and 0x020309f8 forwards a
 * 0x1e-size block request with a stack slot — a heap block descriptor write.
 * There is no game-side comparison, no field test and no library symbol in
 * this body. The byte match is genuine and is banked as a decompilation
 * result; the coordinator may still want to demote it from the PORT metric
 * on the same grounds as FUN_0202a2ac.
 *
 * 0x28 = exactly the ten words above; the next word at 0x0202a24c is a
 * fresh `push {r3,r4,r5,lr} / mov r4,r1` prologue — and is the byte-for-byte
 * first half of this very function's own prologue, so the span is exact.
 */
typedef unsigned int u32;

extern void FUN_0200fb3c(u32 a, u32 b, u32 c);
extern void FUN_020697f0(u32 a, u32 b);

void FUN_0200fb94(u32 arg0, u32 arg1, u32 arg2, u32 arg3)
{
    FUN_0200fb3c(arg0, arg2, arg3);
    FUN_020697f0(arg0, arg0 + arg1);
}
