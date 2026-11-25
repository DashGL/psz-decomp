// FUN_0200fc1c @ 0x0200fc1c (0x20, arm) - ported from FUN_0202a2ac [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_0200fc1c @ 0x0202a2ac (0x20, ARM) — live, census game.
 *
 * MODE: ARM — `stmdb sp!,{r4,lr}` prologue, 4-byte encodings, 0x20 = 8 words.
 *
 * Bytes (8 instructions = 0x20):
 *   0202a2ac: 10 40 2d e9   stmdb sp!, {r4, lr}
 *   0202a2b0: 02 10 a0 e1   mov   r1, r2         ; arg2 -> 2nd param
 *   0202a2b4: 00 40 a0 e1   mov   r4, r0         ; stash arg0
 *   0202a2b8: 03 20 a0 e1   mov   r2, r3         ; arg3 -> 3rd param
 *   0202a2bc: c2 ff ff eb   bl    0x0202a1cc      ; (decoded: see the note below)
 *   0202a2c0: 04 00 a0 e1   mov   r0, r4         ; restore arg0
 *   0202a2c4: f9 1c 00 eb   bl    0x020316b0      ; (decoded)
 *   0202a2c8: 10 80 bd e8   ldmia sp!, {r4, pc}
 *
 * Semantics: `FUN_0200fb3c(arg0, arg2, arg3); FUN_0206a488(arg0);` — a
 * three-argument call whose middle argument is arg1 SKIPPED, followed by a
 * one-argument release on arg0.
 *
 * The parameter shuffle is the interesting part and it is exact: r1 receives
 * arg2 and r2 receives arg3, so the callee sees (arg0, arg2, arg3). arg1 is
 * consumed by nothing. This is NOT a straight `F(a,b,c,d)` pass-through; the
 * source really did drop one argument, so the C has to name it and ignore it
 * (a 4-parameter signature with the second one unused) to reproduce the
 * register moves.
 *
 * A NOTE ON A TOOLING HAZARD: Ghidra's disassembly renders the second call as
 * `bl 0x020316b0`, but hand-decoding the BL immediates (a WORD count, not a
 * byte count) from the bytes gives
 *     0202a2bc: c2 ff ff eb  ->  0x0202a1cc
 *     0202a2c4: f9 1c 00 eb  ->  0x020316b0
 * 0x0202a1cc matches the census `faithful_callees` field exactly, confirming
 * the decode method. Always cross-check a decoded BL against
 * config/arm9/symbols.txt — decoding the offset as bytes lands in a
 * neighbouring function and silently produces the wrong callee.
 *
 * CALLEE ARITY (trap 5): 0x0202a1cc's own body saves r0/r1/r2 into r7/r4/r6
 * and branches on them, so it takes three register arguments — consistent with
 * the (arg0, arg2, arg3) shuffle. 0x020316b0 walks a list at [arg0+0x18] and
 * frees each 8-byte block, so it takes one.
 *
 * CLASSIFICATION (see REPORT.md): both callees sit in the NitroSDK heap
 * cluster. 0x0202a1cc brackets its work between 0x0202ec00/0x0202ec14
 * (already-banked critical sections) and calls 0x02029190 / 0x02029670 /
 * 0x02029698, which the census marks `demoted` with `lit:ram` evidence — RAM
 * literals, i.e. heap bookkeeping. This is allocator plumbing, so it is
 * reported REJECT for the port budget.
 */
typedef unsigned int u32;

extern void FUN_0200fb3c(u32 a, u32 b, u32 c);
extern void FUN_0206a488(u32 a);

void FUN_0200fc1c(u32 arg0, u32 arg1, u32 arg2, u32 arg3)
{
    (void)arg1;
    FUN_0200fb3c(arg0, arg2, arg3);
    FUN_0206a488(arg0);
}
