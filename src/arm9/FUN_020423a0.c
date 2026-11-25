// FUN_020423a0 @ 0x020423a0 (0x28, thumb) - ported from FUN_02070388 [banked], verified via tools/match.py (word compare + verify_relocs).
/* FUN_020423a0 @ 0x02070388 (0x28, Thumb) - live game-logic leaf
 * bounds-checked dispatch: index must be in [0,5), the slot must be occupied,
 * then forward (slot, arg1, arg2) to FUN_02046a78.
 *
 * Bytes: 10 b5 00 24 43 e4 42 a1 0c dd 05 29 0a da 89 00 40 18
 *       d8 30 00 68 00 28 04 d0 11 1c 1a 1c 00 f0 a7 fd 10 bd
 *       00 20 10 bd
 *   02070388: b510 push   {r4, lr}
 *   0207038a: 2400 movs   r4, #0
 *   0207038c: e443 mvns   r4, r4           ; r4 = -1  (0xffffffff)
 *   0207038e: a142 cmp    r1, r4
 *   02070390: dd0c ble    0x20423c4        ; if (idx <= -1) goto SHARED exit
 *   02070392: 2905 cmp    r1, #5
 *   02070394: da0a bge    0x20423c4        ; if (idx >= 5)  goto SHARED exit
 *   02070396: 0089 lsls   r1, r1, #2        ; idx * 4
 *   02070398: 1840 adds   r0, r0, r1
 *   0207039a: 30d8 adds   r0, #0xcc         ; + 204
 *   0207039c: 6800 ldr    r0, [r0]          ; r0 = *(u32 *)(base + idx*4 + 0xcc)
 *   0207039e: 0028 cmp    r0, #0
 *   020703a0: d004 beq    0x20423c4        ; empty slot -> SHARED exit
 *   020703a2: 1c11 adds   r1, r2, #0        ; r1 = arg1
 *   020703a4: 1c1a adds   r2, r3, #0        ; r2 = arg2
 *   020703a6: fda7f000 bl  0x02070ef8        ; FUN_02046a78(slot, arg1, arg2)
 *   020703aa: bd10 pop    {r4, pc}          ; return its result
 *   020423c4: 2000 movs   r0, #0            ; <-- ONE shared exit arm
 *   020703ae: bd10 pop    {r4, pc}
 *
 * MODE - Thumb. 2-byte stride, b510 push {r4,lr}, bd10 pop, one 32-bit bl.
 *
 * SEMANTICS FROM THE BYTES: base is a pointer; the table lives at byte offset
 * 0xcc (204) with 4-byte elements. The `lsls #2` followed by a SEPARATE
 * `adds #0xcc` is the tell - this is byte arithmetic plus a scaled index, not
 * a struct subscript (which would fold 0xcc into the index). idx is bounds
 * checked SIGNED at both ends (`ble` against -1, `bge` against 5), so the
 * accepted range is 0..4 - five entries. The element pointer is passed in r0
 * itself (not re-based), so the callee receives the element pointer.
 *
 * THE -1 IS MATERIALIZED, NOT AN IMMEDIATE COMPARE: `movs r4,#0; mvns r4,r4`
 * builds 0xffffffff in a callee-saved register and `cmp r1,r4` tests against
 * it. There is no `cmp r1,#0` / `blt` anywhere, so the source did NOT say
 * `idx < 0` - that folds to an immediate compare. It said `idx <= -1`, and
 * MWCC kept the -1 live in r4 rather than folding. Spelling the literal -1 is
 * load-bearing; the `goto` exits exist so that the -1 comparison is not
 * rewritten into a range test.
 *
 * SINGLE SHARED EXIT ARM: all THREE failure tests (ble, bge, beq) branch to
 * the SAME `movs r0,#0 / pop` pair at +0x24. Three separate
 * `if (...) return 0;` statements emit three duplicated `movs/pop` pairs
 * (measured: candidate 0x30, four bytes of duplicated epilogue). The original
 * had a single return-0 tail that all failures reached, which is what the
 * `goto out` spelling below produces.
 *
 * FUN_02046a78's own body starts `push{..}; add r5,r0,#0; add r4,r2,#0;
 * ldr r6,[r5,#0x18]` - three register args (r0,r1,r2), matching the two
 * `adds` shuffles here.
 *
 * Recorded 0x28 is the true size: instructions end at 0x020703b0 after the
 * second bd10. No pool, no pad.
 */
typedef unsigned char u8;
typedef unsigned int u32;
typedef int s32;

extern u32 FUN_02046a78(u32 slot, u32 a1, u32 a2);

u32 FUN_020423a0(u32 base, s32 idx, u32 a1, u32 a2)
{
    u32 slot;

    if (idx <= -1) {
        goto out;
    }
    if (idx >= 5) {
        goto out;
    }
    slot = *(u32 *)((u8 *)base + idx * 4 + 0xcc);
    if (slot == 0) {
        goto out;
    }
    return FUN_02046a78(slot, a1, a2);
out:
    return 0;
}
