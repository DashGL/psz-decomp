// FUN_020b054c @ 0x020b054c (0x30, thumb) - ported from FUN_02067f58 [banked], verified via tools/match.py (word compare + verify_relocs).
/* FUN_020b054c @ 0x02067f58 — THUMB (stride 2; terminator 38bd
 * pop {r3,r4,r5,pc}). Recorded 0x30 = EXACT body, no pool word: the word
 * after the final `pop` is 0x02067f88, the next function.
 *
 * Bytes (Thumb, 24 halfwords):
 *   02067f58: 38b5     push  {r3, r4, r5, lr}
 *   02067f5a: 051c     adds  r5, r0, #0        ; r5 = self
 *   02067f5c: 0c1c     adds  r4, r1, #0        ; r4 = idx
 *   02067f5e: 11d4     bmi   0x20b0578         ; idx < 0 -> return 0
 *   02067f60: 0c21     movs  r1, #0xc
 *   02067f62: 695e     ldrsh r1, [r5, r1]      ; r1 = (s16)self->count
 *   02067f64: 8c42     cmp   r4, r1
 *   02067f66: 0dda     bge   0x20b0578         ; idx >= count -> return 0
 *   02067f68: 6a68     ldr   r2, [r5, #4]      ; r2 = self->tab8
 *   02067f6a: 2101     lsls  r1, r4, #4        ; idx * 16
 *   02067f6c: 515c     ldrb  r1, [r2, r1]      ; r1 = tab8[idx]
 *   02067f6e: 0029     cmp   r1, #0
 *   02067f70: 08d1     bne   0x20b0578         ; occupied -> return 0
 *   02067f72: 00f009f8 bl    0x2067f88         ; FUN_020b057c(self, 0)
 *   02067f76: ab68     ldr   r3, [r5, #8]      ; r3 = self->tab32
 *   02067f78: a200     lsls  r2, r4, #2        ; idx * 4
 *   02067f7a: 9958     ldr   r1, [r3, r2]      ; r1 = tab32[idx]
 *   02067f7c: 0120     movs  r0, #1
 *   02067f7e: 0143     orrs  r1, r0            ; r1 |= 1
 *   02067f80: 9950     str   r1, [r3, r2]      ; tab32[idx] |= 1
 *   02067f82: 38bd     pop   {r3, r4, r5, pc}   ; -> 1
 *   020b0578: 0020     movs  r0, #0
 *   02067f86: 38bd     pop   {r3, r4, r5, pc}   ; -> 0
 *
 * SEMANTICS FROM THE BYTES: the "claim a free slot" half of a set/clear
 * pair on the same table. Its twin FUN_020b057c (0x2067f88, immediately
 * above in memory) runs the IDENTICAL guard sequence and then does the
 * inverse bit op — `bics r1,r0` with r0=1, i.e. `tab32[idx] &= ~1` — and
 * also returns 1. So this one SETS bit 0 and that one CLEARS it; both
 * first hand the slot to the shared allocator 0x02068188, whose own body
 * (`push {r3,r4,r5,r6,r7,lr} / movs r1,#0 / ldrsh r2,[r0,#0xc] / ... /
 * ldr r7,[r0,#8]`) confirms the count is a SIGNED halfword at +0xc and the
 * bitmask table is a u32 array at +8.
 *
 * The two tables are addressed DIFFERENTLY on purpose: the gate table at
 * +4 is a byte array with a 16-BYTE STRIDE (`lsls #4`), the bitmask table at
 * +8 is u32 with a 4-byte stride (`lsls #2`). Both strides must stay as
 * explicit byte/u32 multiplies — see banked FUN_020a5878, where a scaled
 * pointer type folds the multiply away and changes the instruction mix.
 *
 * GUARD SIGNEDNESS: the count is `ldrsh` and the first test is `bmi`, so
 * BOTH bounds tests are SIGNED (`bge`, not `bhs`) — the index is an s32 and
 * a negative index is rejected before the halfword load. Note the first
 * test reuses the flags of the `adds r4, r1, #0` copy, which is why there
 * is no separate `cmp` for it; that needs no C support, the copy is the
 * parameter materialisation.
 *
 * ONE EXIT PAIR (`movs r0,#0 / pop` at 0x20b0578) shared by all three
 * failures, so per rule F3 this is the NESTED spelling: the positive tests
 * nest and fall through to one `return 0`.
 *
 * ARITY (rule C8, from 0x02067f88's OWN body): it opens
 * `push {r4,lr} / adds r4,r0,#0 / bl 0x2068188` — it forwards r0 AND r1
 * (r1 is never reloaded before the call), so arity 2.
 *
 * THE SECOND ARGUMENT IS THE GATE BYTE, NOT A LITERAL 0. At the `bl` r1
 * still holds the byte loaded at +0x0c, and the preceding `cmp r1,#0 / bne`
 * proves it is 0 — so the target needs no `movs r1,#0`. Passing a literal 0
 * makes the compiler materialise one and costs a halfword: measured, a
 * literal second argument gives 0x32 against the target's 0x30, with the extra
 * word being exactly `movs r1,#0` at +0x1a. Hence the gate byte is bound to
 * a local and forwarded, which also forces the nested guard shape (F3).
 */
typedef unsigned int u32;
typedef signed short s16;
typedef int s32;
typedef unsigned char u8;

extern u32 FUN_020b057c(u8 *self, u32 slot);

u32 FUN_020b054c(u8 *self, s32 idx)
{
    if (idx >= 0 && idx < *(s16 *)(self + 0xc)) {
        u32 b = *(u8 *)(*(u32 *)(self + 4) + idx * 16);
        if (b == 0) {
            FUN_020b057c(self, b);
            *(u32 *)((u8 *)*(u32 *)(self + 8) + idx * 4) |= 1;
            return 1;
        }
    }
    return 0;
}
