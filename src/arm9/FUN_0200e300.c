// FUN_0200e300 @ 0x0200e300 (0x1c, arm) - ported from FUN_02028930 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_0200e300 @ 0x02028930 (0x1c = 7 ARM words, ARM)
 *
 * Bytes: 08 40 2d e9 | 2c 10 90 e5 | 81 1f a0 e1 | c1 1f b0 e1 |
 *        08 80 bd e8 | 08 27 00 00 eb | 08 80 bd e8
 *   stmdb sp!,{r3,lr} ; ldr r1,[r0,#0x24] ; mov r1,r1,lsl #31 ;
 *   movs r1,r1,asr #31 ; ldmiaeq sp!,{r3,pc} ; bl 0x020289e8 ;
 *   ldmia sp!,{r3,pc}
 *
 * ARM, verified from the encoding: 32-bit ARM prologue (e92d4008) and TWO
 * ARM `ldmia sp!,{r3,pc}` epilogues (e8bd8008); 0x1c = 28 bytes = exactly
 * 7 words, no literal pool.
 *
 * Semantics from the bytes: read the s32 flag word at +0x24 of the object in
 * r0, then squash it to its sign bit with `lsl #31 / asr #31` (result 0 or
 * -1). The `movs` sets the flags off that squash, so `ldmiaeq` - the
 * CONDITIONAL early-return epilogue - fires exactly when the sign bit was
 * clear, i.e. when the flag word was >= 0. On that path r0 is still the
 * caller's object pointer (nothing ever rewrote it) and that pointer is what
 * the function returns. When the flag word is negative the sign-test is
 * skipped and 0x020289e8 is called on the same pointer, its result returned.
 *
 * So this is a dispatcher shim: "if bit31 of field_0x2c is clear, hand the
 * object straight back; otherwise run the 0x020289e8 sub-step and return its
 * result." The flag word is read as a plain 32-bit value at offset 0x24 (a
 * scaled u32 displacement, so the source must use a pointer cast and literal
 * 0x24 rather than a struct field, which would change the addressing mode).
 *
 * The `lsl #31 / movs asr #31` pair is a SIGN-MASK, and reproducing both
 * halves of it is required, not incidental. MEASURED: the natural spelling
 * `if (v >> 31) ...` / `if (!(v >> 31)) ...` emits only the `asr` and lands
 * at 0x18 bytes - one word short - because the compiler folds the shift pair
 * into the single arithmetic shift it actually needs. Writing the mask out as
 * the explicit `(v << 31) >> 31` forces both instructions and matches at
 * 0x1c. The `== 0` comparison against the squashed value is what selects the
 * `ldmiaeq` early-return path, and the direction of that test is load-bearing:
 * the early return fires when the ORIGINAL field was >= 0.
 *
 * Callee arity read off the callee's OWN body: 0x020289e8 opens `mov r4,r0`
 * and closes `mov r0,r4 / bl ... / ldmia sp!,{r3,r4,r5,pc}` - it consumes r0
 * as the object pointer and returns a value, so it is a one-argument,
 * value-returning call.
 *
 * MATCHED 19/24 (all 9 dsi/* + all ten 2.0/*); the whole 1.2/* family
 * misses on SIZE only.
 * No version override needed.
 */

typedef unsigned int u32;
typedef int s32;

extern u32 FUN_0200e3b8(u32 *obj);

u32 *FUN_0200e300(u32 *obj)
{
    s32 v = *(s32 *)((unsigned char *)obj + 0x24);

    if ((v << 31) >> 31 == 0) {
        return obj;
    }
    return (u32 *)FUN_0200e3b8(obj);
}
