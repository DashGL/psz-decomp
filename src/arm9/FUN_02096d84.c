// FUN_02096d84 @ 0x02096d84 (0x20, thumb) - ported from FUN_0203e9e8 [banked], verified via tools/match.py (word compare + verify_relocs).
/* FUN_02096d84 @ 0x0203e9e8 (recorded 0x20, THUMB) — detach-and-release step on a
 * game object: take the handle at +0x3c, run its destructor, hand the pointer to
 * the deallocator, clear the field, and return the object.
 *
 *   0203e9e8  38b5     push  {r3, r4, r5, lr}
 *   0203e9ea  041c     adds  r4, r0, #0
 *   0203e9ec  e56b     ldr   r5, [r4, #0x3c]     ; the handle
 *   0203e9ee  002d     cmp   r5, #0
 *   0203e9f0  08d0     beq   0x2096da0         ; -> plain return, NO clear
 *   0203e9f2  05d0     beq   0x2096d9c         ; -> clear only, no calls
 *   0203e9f4  281c     adds  r0, r5, #0
 *   0203e9f6  03f0b3fb bl    0x02042160         ; arity 1
 *   0203e9fa  281c     adds  r0, r5, #0
 *   0203e9fc  6cf0bcfd bl    0x020ab578         ; arity 1
 *   02096d9c  0020     movs  r0, #0
 *   0203ea02  e063     str   r0, [r4, #0x3c]
 *   02096da0  201c     adds  r0, r4, #0
 *   0203ea06  38bd     pop   {r3, r4, r5, pc}
 *
 * THUMB (rule C1): stride 2, 0xb5/0xbd push/pop, 32-bit Thumb BLs. The 4-aligned
 * recorded size 0x20 does NOT imply ARM. Size is exactly 0x20 — there is no
 * trailing NOP and no literal pool, so the recorded span is the true body.
 *
 * THE LEVER IN THIS FUNCTION: there is ONE `cmp r5,#0` followed by TWO `beq`
 * that both test those same flags and go to DIFFERENT targets. That is mwccarm
 * CSE'ing the compare while keeping both branches — it is NOT dead code I may
 * delete, and it is NOT three separate tests (there is only one `cmp`). Proved
 * with a codegen probe (scratch/w1017/w2/p_shapes.c, `P_nested`):
 *
 *     if (q != 0) { if (q != 0) { A(q); B(q); } *field = 0; }
 *     -> cmp / beq END / beq CLEAR / bl / bl / movs / str / adds / pop
 *
 * i.e. exactly `beq` to the tail-return followed by `beq` to the clear. The flat
 * `&&` spelling (`if (q != 0 && q != 0)`) was probed too and emits BOTH beq to
 * the SAME target (0x18,0x18) — measurably wrong here, since the target's first
 * branch skips the clear entirely. So the nested form is the right reading and
 * the difference is load-bearing, not cosmetic.
 *
 * SEMANTICS FROM THE BYTES. The outer guard is the real one: a null handle
 * returns the object untouched (the field is not cleared, because it is already
 * null). The inner guard is the redundant-recompute artifact above; semantically
 * the two calls sit between the outer test and the clear.
 *
 * The clear is `movs r0,#0; str r0,[r4,#0x3c]` — a 32-bit store of zero, so the
 * field at +0x3c is a POINTER, and the function returns the object pointer
 * (`adds r0,r4,#0` before the pop), not the handle.
 *
 * ARITY (rule C8, from the callees' own bodies): both calls pass exactly one
 * argument (r0 re-materialised from r5 with `adds r0,r5,#0`).
 *  - 0x02042160 is literally `bx lr` — an EMPTY body. It is still emitted as a
 *    real call, so it is a declared-but-trivial callee, not CRT and not evidence
 *    that this function is plumbing.
 *  - 0x020ab578 is an import thunk (`ldr r3,[...]; bx r3`); its banked body is
 *    `void FUN_020ba8ac(void *a0) { FUN_020ab4e0(a0); }`, so it is the project's
 *    one-argument deallocator.
 */
typedef unsigned char u8;

extern void FUN_02098e20(void *);
extern void FUN_020ba8ac(void *);

void *FUN_02096d84(void *oo)
{
    u8 *o = (u8 *)oo;
    void *q = *(void **)(o + 0x3c);

    if (q != 0) {
        if (q != 0) {
            FUN_02098e20(q);
            FUN_020ba8ac(q);
        }
        *(void **)(o + 0x3c) = 0;
    }
    return o;
}
