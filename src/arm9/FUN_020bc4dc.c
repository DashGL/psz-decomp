// FUN_020bc4dc @ 0x020bc4dc (0x2c, thumb) - ported from FUN_020aa888 [banked], verified via tools/match.py (word compare + verify_relocs).
/* FUN_020bc4dc @ 0x020aa888 — THUMB (stride 2; epilogue 10bd pop {r4,pc} on
 * all three exits). Recorded 0x2c = exact body, no pool word.
 *
 * Bytes (Thumb):
 *   020aa888: 10b5     push  {r4, lr}
 *   020aa88a: 041c     adds  r4, r0, #0       ; r4 = self (live across the call)
 *   020aa88c: 6068     ldr   r0, [r4, #4]     ; r0 = self->field_04
 *   020aa88e: 0a1c     adds  r2, r1, #0       ; r2 = arg1 (3rd callee arg)
 *   020aa890: 0228     cmp   r0, #2
 *   020aa892: 01d1     bne   0x20bc4ec
 *   020aa894: 0020     movs  r0, #0           ; state == 2 -> return 0
 *   020aa896: 10bd     pop   {r4, pc}
 *   020bc4ec: 201c     adds  r0, r4, #0       ; r0 = self + 8   (1st arg)
 *   020aa89a: 211c     adds  r1, r4, #0       ; r1 = self + 0x74(2nd arg)
 *   020aa89c: 0830     adds  r0, #8
 *   020aa89e: 7431     adds  r1, #0x74
 *   020aa8a0: 6cf74eec blx   0x02017140       ; r0 = FUN_02012600(..)
 *   020aa8a4: 0028     cmp   r0, #0
 *   020aa8a6: 01d1     bne   0x20bc500
 *   020aa8a8: 0020     movs  r0, #0           ; callee failed -> return 0
 *   020aa8aa: 10bd     pop   {r4, pc}
 *   020bc500: 0220     movs  r0, #2
 *   020aa8ae: 6060     str   r0, [r4, #4]     ; self->field_04 = 2
 *   020aa8b0: 0120     movs  r0, #1
 *   020aa8b2: 10bd     pop   {r4, pc}
 *
 * SEMANTICS FROM THE BYTES: a one-way state latch. `self->field_04` is
 * tested against 2; if it is already 2 the function returns 0 WITHOUT calling
 * anything (the `bne` skips the whole call block). Otherwise it calls
 * FUN_02012600 with (self+8, self+0x74, arg1) and on a NON-ZERO result stores
 * the literal 2 into the same field and returns 1. A zero result returns 0
 * and leaves the field untouched, so 0 -> (call) -> 1-or-0 is the transition.
 *
 * The two zero-returns are at DIFFERENT sites with their own `pop`, so the C
 * is two separate `return 0;` statements rather than one merged tail — unlike
 * FUN_020a5878, where the target funnels both failures into one tail. That
 * contrast is the whole difference between the two bodies.
 *
 * ARITHMETIC SHAPE: the two callee arguments are built as `adds rX, r4, #0`
 * then `adds rX, #k` (a copy followed by a constant add), NOT a single
 * `adds rX, r4, #k`. That is the lowering of `&self->field` / `(u8 *)self + 8`
 * on a pointer parameter, so spelling them as byte-offset casts on `self`
 * reproduces it; a struct member access through a typed pointer may fold the
 * two into one instruction and lose the `adds rX, r4, #0`.
 *
 * CALLEE ARITY (rule C8, from FUN_02012600's OWN body at 0x02017140, which is
 * ARM — `f0472de9` push {r4-r11,lr}): it opens `mov r4,r2 / mov r6,r0 /
 * mov r5,r1`, i.e. it consumes r0, r1 AND r2 — arity 3, confirming arg1 is
 * live into the call. That is why `adds r2, r1, #0` is hoisted ABOVE the
 * `cmp r0,#2` test: r2 is set unconditionally even on the early-out path,
 * where it is dead. That hoist is a codegen artefact and needs no C support.
 */
typedef unsigned int u32;
typedef unsigned char u8;

extern u32 FUN_02012600(u8 *a, u8 *b, u32 c);

u32 FUN_020bc4dc(u8 *self, u32 arg1)
{
    if (*(u32 *)(self + 4) == 2) {
        return 0;
    }
    if (FUN_02012600(self + 8, self + 0x74, arg1) == 0) {
        return 0;
    }
    *(u32 *)(self + 4) = 2;
    return 1;
}
