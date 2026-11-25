// FUN_02013464 @ 0x02013464 (0x18, arm) - ported from FUN_0201872c [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_02013464 @ 0x0201872c (0x18, ARM) — "is slot <index> of this u32 table
 * occupied" test: load table[index] and return (value != -1).
 *
 * Bytes: 01 11 90 e7 / 00 00 e0 e3 / 00 00 51 e1 / 01 00 a0 13 /
 *        00 00 a0 03 / 1e ff 2f e1
 *   ldr r1,[r0,r1,lsl #2] ; mvn r0,#0 ; cmp r1,r0 ; movne r0,#1 ;
 *   moveq r0,#0 ; bx lr
 *
 * Arity 2 (r0 base, r1 index) is read off the target: exactly two argument
 * registers are consumed, the load destination REUSES the index register r1,
 * and nothing is ever reloaded — so there is no third argument. Return type
 * int, matching the extern banked caller-side declaration.
 *
 * The register shuffle is the load-bearing detail. The load destination
 * REUSES the index register (r1), r0 (the dead base) then holds the -1
 * sentinel via mvn, and the select's two arms land in that same dying
 * register: movne r0,#1 / moveq r0,#0. Spelling the bool INTO the sentinel
 * slot (`u32 m = (u32)-1; m = table[index] != m;`, lever
 * `select-both-arms-into-m-reg`, AJ1) is what forces the false arm to
 * materialise as moveq #0 instead of folding away.
 *
 * Same accessor cluster as banked FUN_0201871c / FUN_02018724 / FUN_02018764;
 * the `+8`-bias sibling of this exact test is FUN_0201877c.
 *
 * VERSION: this object is CW3-stale, so it needs the 2.0/base override and does
 * NOT match the canonical dsi pin. The dsi compiler folds the compare against
 * -1 into the immediate form `cmn r0,#1` and emits 0x14 bytes; the 2.0/CW3
 * family emits the materialised `mvn r0,#0` + `cmp r1,r0` the ROM has, at the
 * full 0x18. This is lever `version-sweep-near-resolves-stale-pin` verbatim
 * (dsi "folds -1 compares to cmn"; 2.0/CW3 "emits load-per-site + mvn+cmp"),
 * with the same precedent list (FUN_02031284, FUN_02029e74, FUN_0200ebd8,
 * FUN_0202d408). Confirmed by a version sweep, NOT by respell grinding: ten
 * dsi-side spellings all compile to the identical 0x14 `cmn` body.
 */
typedef unsigned int u32;

int FUN_02013464(u32 *table, int index)
{
    u32 m;

    m = (u32)-1;
    m = table[index] != m;
    return m;
}
