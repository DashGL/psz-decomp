// FUN_02037d20 @ 0x02037d20 (0x2c, thumb) - ported from FUN_020a5878 [banked], verified via tools/match.py (word compare + verify_relocs).
/* FUN_02037d20 @ 0x020a5878 — THUMB (stride 2; epilogue 38bd pop {r3,r4,r5,pc}
 * on BOTH exits). Recorded 0x2c = exact body, no pool word.
 *
 * Bytes (Thumb):
 *   020a5878: 38b5     push  {r3, r4, r5, lr}
 *   020a587a: 051c     adds  r5, r0, #0        ; r5 = self (base ptr)
 *   020a587c: 288a     ldrh  r0, [r5, #0x12]  ; r0 = self->count (u16)
 *   020a587e: 8142     cmp   r1, r0
 *   020a5880: 0ed2     bhs   0x2037d48       ; idx >= count -> return 0
 *   020a5882: 1c20     movs  r0, #0x14
 *   020a5884: 0c1c     adds  r4, r1, #0       ; r4 = idx
 *   020a5886: 4443     muls  r4, r0, r4       ; r4 = idx * 0x14
 *   020a5888: 6868     ldr   r0, [r5, #8]     ; r0 = self->tab
 *   020a588a: 0019     adds  r0, r0, r4       ; r0 = &tab[idx]  (byte arith)
 *   020a588c: fff7ecff bl    0x020a5868       ; r0 = FUN_02037d10(elem)
 *   020a5890: 0128     cmp   r0, #1
 *   020a5892: 05d1     bne   0x2037d48       ; not 1 -> return 0
 *   020a5894: 6868     ldr   r0, [r5, #8]     ; RELOAD the base
 *   020a5896: 0019     adds  r0, r0, r4       ; recompute &tab[idx]
 *   020a5898: cbf79cf8 bl    0x020709d4       ; FUN_020379b4(elem)
 *   020a589c: 0120     movs  r0, #1
 *   020a589e: 38bd     pop   {r3, r4, r5, pc}
 *   02037d48: 0020     movs  r0, #0
 *   020a58a2: 38bd     pop   {r3, r4, r5, pc}
 *
 * SEMANTICS FROM THE BYTES: a bounds-checked element release. The count at
 * self+0x12 is a HALFWORD (`ldrh`), so the guard is unsigned (`bhs`) against a
 * u16 count; the index is u32. Element stride is 0x14 bytes (20), computed as
 * a 32-bit multiply then a BYTE add onto the table base — so the table is a
 * byte-addressed array of 0x14-byte records, and the multiply must NOT be
 * scaled again by the pointer type (writing `Elem *tab` with a 0x14 struct
 * would make the compiler fold the scale into the index and emit a different
 * instruction mix).
 *
 * The table base at self+8 is loaded TWICE (0x5888 and 0x5894) with the first
 * `bl` in between, and `idx*0x14` survives in the callee-saved r4 across that
 * call. That is a straightforward two-use-of-an-expression lowering, not a
 * cached pointer: the natural C names the element expression twice, so the
 * reload is automatic. (If a first draft caches it in a local and hoists the
 * load, that is where `volatile` on the base would come in — rule E1.)
 *
 * Both failure arms branch to the SAME 0x2037d48 tail, so the C is two
 * separate early-exit guards sharing one `return 0` block, not one merged
 * condition.
 *
 * CALLEE ARITY (rule C8, from their OWN bodies):
 *   FUN_02037d10 @ 0x020a5868 is 8 instructions: `ldr r0,[r0,#0xc] / cmp #0 /
 *   beq / movs r0,#1 / bx lr` — arity 1, returns `elem->field_0x0c != 0`.
 *   FUN_020379b4 @ 0x020709d4 is the banked refcount release (src/arm9/
 *   FUN_020379b4.c) — arity 1, `void *self`, always returns 0.
 * The `cmp r0,#1` is an exact equality against the callee's BOOLEAN return,
 * not a truthiness test — hence `!= 1` rather than `== 0` in C.
 */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;

extern u32 FUN_02037d10(u8 *elem);
extern u32 FUN_020379b4(u8 *elem);

u32 FUN_02037d20(u8 *self, u32 idx)
{
    if (idx < *(u16 *)(self + 0x12)) {
        if (FUN_02037d10(*(u32 *)(self + 8) + idx * 0x14) == 1) {
            FUN_020379b4(*(u32 *)(self + 8) + idx * 0x14);
            return 1;
        }
    }
    return 0;
}
