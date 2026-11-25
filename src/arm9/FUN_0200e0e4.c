// FUN_0200e0e4 @ 0x0200e0e4 (0x28, arm) - ported from FUN_02028714 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_0200e0e4 @ 0x02028714 (0x28 = 10 ARM words, ARM) — clear a two-word
 * handle pair on an object, but only if the first word is non-NULL.
 *
 * Bytes (10 words):
 *   02028714: 10 40 2d e9   stmdb sp!, {r4, lr}
 *   02028718: 00 40 a0 e1   mov   r4, r0
 *   0202871c: 4c 00 94 e5   ldr   r0, [r4, #0x44]
 *   02028720: 00 00 50 e3   cmp   r0, #0
 *   02028724: 10 72 bd 08   popeq {r4, pc}
 *   02028728: 24 fd ff eb   bl    0x02027bc0
 *   0202872c: 00 00 a0 e3   mov   r0, #0
 *   02028730: 4c 00 84 e5   str   r0, [r4, #0x44]
 *   02028734: 50 00 84 e5   str   r0, [r4, #0x48]
 *   02028738: 10 72 bd e8   ldmia sp!, {r4, pc}
 *
 * Semantics re-derived from the target bytes:
 *  - arg0 is parked in r4 (hence {r4,lr}) because the callee clobbers r0
 *    and both stores need arg0 again.
 *  - `[arg0 + 0x44]` is loaded into r0 and tested; if it is zero the
 *    function returns through the SAME epilogue via a CONDITIONAL POP
 *    (`popeq {r4,pc}`, no branch) — the merged-exit shape again, so the
 *    source is a bare early `return;` inside an `if`.
 *  - the loaded value is passed to the callee UNCHANGED — r0 is not
 *    reloaded from r4 before the `bl`, so the callee receives the handle
 *    that was loaded from +0x44, not arg0 itself.
 *  - then ONE zero is materialised and stored to BOTH +0x44 and +0x48, so
 *    the source reuses a single literal (MWCC emits `mov r0,#0` once and
 *    two predicated-free `str`s). Writing `*p = 0; *q = 0;` with two
 *    separate zero expressions may still CSE, but the single `mov` is what
 *    the bytes license.
 *
 * ARITY (rule C8, read off the callee's OWN body): 0x02027bc0 opens
 * `push {r4,lr} / movs r4,r0 / popeq {r4,pc}` — it branches on its FIRST
 * ARGUMENT being zero, so it takes exactly one register argument (the
 * handle). That is consistent with the call site setting nothing.
 *
 * Not CRT: no loop, no fill/compare shape, no library symbol; the callee
 * clears a bit in a global flag word (`ldr r2,[r0+8] ; and r1,r2,~r4 ;
 * str r1,[r0+8]`) using the handle as a bit mask, which is game object
 * teardown.
 *
 * 0x28 = exactly the ten words above; the next word at 0x0202873c is a
 * fresh `push {r4,r5,r6,r7,r8,sb,sl,fp,lr}` prologue, so the recorded span
 * is the TRUE size.
 */
typedef unsigned int u32;

extern void FUN_0200d5b0(u32 handle);

void FUN_0200e0e4(u32 p)
{
    u32 handle = *(u32 *)(p + 0x44);

    if (handle == 0) {
        return;
    }
    FUN_0200d5b0(handle);
    *(u32 *)(p + 0x44) = 0;
    *(u32 *)(p + 0x48) = 0;
}
