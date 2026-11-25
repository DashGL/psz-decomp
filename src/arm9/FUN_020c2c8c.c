// FUN_020c2c8c @ 0x020c2c8c (0x1c, thumb) - ported from FUN_020a8554 [banked], verified via tools/match.py (word compare + verify_relocs).
/* FUN_020c2c8c @ 0x020a8554 (0x1c, Thumb) — release path for a table slot:
 * free the slot's three sub-objects through FUN_020c2d38, then if the global
 * manager exists, clear its per-slot record at manager + 0xc.
 *
 * Bytes: 10 b5 / 04 1c / 20 68 / 00 f0 4f f8 / 00 f0 79 f8 / 00 28 / 03 d0 /
 *        21 68 / 0c 31 / 00 f0 89 fc / 10 bd
 *   push {r4,lr} ; adds r4,r0,#0 ; ldr r0,[r4] ; bl 0x020a85fc ;
 *   bl 0x020a8654 ; cmp r0,#0 ; beq +0x1a ; ldr r1,[r4] ; adds r1,#0xc ;
 *   bl 0x020a8e80 ; pop {r4,pc}
 *
 * Arity and arg orders are read off the CALLEES' own bodies, not from the
 * decompile's call arity (BRIEF 9f / 14c):
 *   FUN_020c2d38 is 1-arg  — its body is `adds r4,r0,#0 ; ldr r0,[r4,#0x3c]`,
 *                             so the slot value *a is passed. It re-derefs its
 *                             argument, so the slot holds a POINTER: the callee
 *                             prototypes take `u32 *` and both call sites cast.
 *                             Without the casts the dsi and 2.0 builds still
 *                             match, but the whole 1.2/* family dies with
 *                             "illegal implicit conversion from 'unsigned int'
 *                             to 'unsigned int *'" — a latent type bug, not a
 *                             codegen residual, and the cast form fixes it at
 *                             no byte cost.
 *   FUN_020c1fc8 is 0-arg  — its body never reads r0 (`push {r3,lr}` only).
 *   FUN_020c27f4 is 2-arg — `adds r4,r1,#0 ; movs r1,#1 ; str r1,[r0,#0x50]`,
 *                             so (manager, slot + 3), where +3 is ELEMENT
 *                             arithmetic on the loaded slot pointer (the target
 *                             ldr's *a first, then `adds r1,#0xc`).
 * The decompile agrees on the last one but drops the argument to FUN_020c2d38
 * is not among its errors; the argument it shows on FUN_020c27f4 is correct.
 *
 * `adds r4, r0, #0` pins the argument, not the pointee: the target re-reads
 * *a AFTER both calls (ldr r0,[r4] before the first, ldr r1,[r4] inside the
 * branch), so the ADDRESS is the thing held across the calls. The 0x1c span is
 * all instruction bytes — no pool, no pad — so recorded == true.
 *
 * Banked caller FUN_020a8430 declares `void FUN_020c2c8c(u32 *a)` and calls it
 * with the address of a pointer field, which is what makes the trailing
 * `*a + 3` word arithmetic correct.
 */
typedef unsigned int u32;

extern void FUN_020c2d38(u32 *);
extern u32 FUN_020c1fc8(void);
extern void FUN_020c27f4(u32, u32 *);

void FUN_020c2c8c(u32 *a)
{
    u32 mgr;

    FUN_020c2d38((u32 *)*a);
    mgr = FUN_020c1fc8();
    if (mgr != 0) {
        FUN_020c27f4(mgr, (u32 *)*a + 3);
    }
}
