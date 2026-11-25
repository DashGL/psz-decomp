// FUN_0209efa8 @ 0x0209efa8 (0x1e, thumb) - ported from FUN_02040478 [banked], verified via tools/match.py (word compare + verify_relocs).
/* NOTE (wave 1017 promotion): the inventory records this
 * span as 0x20, but the real body is 0x1e -- the
 * recorded span over-runs it (trailing inter-function pad /
 * neighbour prologue). Matched at the TRUE size 0x1e.
 */
/* FUN_0209efa8 @ 0x02040478 (true body 0x1e, recorded 0x20, THUMB) — live
 * game logic: resolve a unit table slot index and convert it to a row byte
 * offset.
 *
 * Bytes (Thumb, stride 2; epilogue 10bd pop {r4,pc}):
 *   02040478: 10b5  push {r4, lr}
 *   0204047a: 0c1c  adds r4, r1, #0        ; r4 = arg1 (the s16 table)
 *   0204047c: f82a f001 bl 0x02041984       ; lazy-init; result kept in r0
 *   02040480: 0021  movs r1, #0
 *   02040482: 615e  ldrsh r1, [r4, r1]      ; r1 = (s16)tab[0]
 *   02040484: fc3a f001 bl 0x02041cfc       ; r0 = index of tab[0] in table
 *   02040488: 0221  movs r1, #2
 *   0204048a: 615e  ldrsh r1, [r4, r1]      ; r1 = (s16)tab[1]
 *   0204048c: 4a1e  subs r2, r1, #1        ; r2 = tab[1] - 1
 *   0204048e: 1821  movs r1, #0x18
 *   02040490: 4143  muls r1, r0, r1        ; r1 = idx * 24
 *   02040492: 5018  adds r0, r2, r1        ; r0 = (tab[1]-1) + idx*24
 *   02040494: 10bd  pop  {r4, pc}
 *   02040496: 0000  movs r0, r0   (2-byte inter-function pad)
 *   02040498: next function FUN_02040498 (its own f8b5 push)
 *
 * TRUE SIZE 0x1e; recorded 0x20 over-runs by exactly the 2-byte pad.
 *
 * TWO ARGUMENTS (wave-1017 note, confirmed here): `adds r4, r1, #0` copies
 * the SECOND argument into a callee-saved register and it is read twice AFTER
 * both calls return, so this is genuinely two-argument — the array survives
 * r4 across two opaque calls and the first argument flows straight into
 * FUN_02096488 in r0 with no setup instruction at all.
 *
 * SEMANTICS: FUN_02096488 (banked, `u32 FUN_02096488(void)`) lazily
 * populates the unit table and returns its base pointer; that base and the
 * first s16 of `tab` go to FUN_020967f0, whose own body is a linear scan
 * (`ldr r4,[r0,#4]` count; `ldr r2,[r2,#0xc]` field; `cmp r1,r2; bne`) that
 * returns the matching index — arity 2 (r0 table, r1 value).
 *
 * The two array reads use the MATERIALISED-INDEX form (`movs r1,#0` /
 * `movs r1,#2` then `ldrsh r1,[r4,r1]`) rather than a displacement, and both
 * are SIGNED (615e = ldrsh), so `tab` is s16*. 0x18 = 24 = the unit-record
 * stride. Association is (tab[1]-1) + idx*24: the sub is materialised into r2
 * first and the muls into r1, then a single `adds r0, r2, r1`.
 */
typedef unsigned int u32;
typedef short s16;
typedef int s32;

extern u32 FUN_02096488(void);
extern u32 FUN_020967f0(u32, u32);

s32 FUN_0209efa8(u32 a, s16 *tab)
{
    s32 idx;
    idx = (s32) FUN_020967f0(FUN_02096488(), (u32) tab[0]);
    return (tab[1] - 1) + idx * 0x18;
}
