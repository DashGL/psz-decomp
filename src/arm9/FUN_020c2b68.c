// FUN_020c2b68 @ 0x020c2b68 (0x1c, thumb) - ported from FUN_020a8430 [banked], verified via tools/match.py (word compare + verify_relocs).
/* FUN_020c2b68 @ 0x020a8430 (0x1c, Thumb) — release-wrapper: bump the object's
 * generation, and if the slot pointer at *a is currently held, run the
 * release thunk and clear it. Returns a.
 *
 * Structure read off the target bytes (the Ghidra decompile agrees on the
 * semantics; what it hides is that the slot POINTER is the argument and the
 * held VALUE is what the thunk consumes, and the doubled branch):
 *   push {r4, lr} / adds r4, r0, #0     r4 = a
 *   bl 0x020a8554                        bump, a forwarded in r0 (unchanged)
 *   ldr r0, [r4] / cmp r0, #0            t = *a
 *   beq +0x14 / beq +0x10                TWO identical doors on ONE cmp
 *   bl 0x020ab578                        the ab4e0-family release thunk
 *   movs r0, #0 / str r0, [r4]           *a = 0
 *   adds r0, r4, #0 / pop {r4, pc}       return a
 * The 0x1c span is fully instruction bytes — no pool — so recorded == true.
 *
 * The doubled beq is the belt-wide idiom, not a bug in my reading:
 * notes/levers.jsonl `nested-same-condition-doubled-branch` (proven on banked
 * FUN_020a8ca4, 19+ sites across the 0x020a belt) — spell
 * `t = ...; if (t != 0) { if (t != 0) { thunk(t); } }` and MWCC CSEs the
 * second compare but keeps both branches. Do NOT collapse to a single if.
 *
 * Call targets: 0x020a8554 and the VENEER 0x020ab578. The ROM encodes those
 * two addresses in the bls, and match.py derives the expected relocation
 * address from the extern name (BRIEF 9a/10c), so both are named by the
 * address the call must resolve to — NOT 0x020ab4e0, the veneer's destination.
 *
 * Arity 1 proven from banked callers FUN_020a33b4 / FUN_020a3420, which pass
 * (u32 *)((u8 *)obj + 0x14) — the ADDRESS of the pointer field, matching the
 * body's `str r0, [r4]` with r4 = the argument.
 */
typedef unsigned int u32;

extern void FUN_020c2c8c(u32 *a);
extern void FUN_020ba8ac(u32 *a);

u32 *FUN_020c2b68(u32 *a) {
    u32 t;

    FUN_020c2c8c(a);
    t = *a;
    if (t != 0) {
        if (t != 0) {
            FUN_020ba8ac(t);
        }
        *a = 0;
    }
    return a;
}
