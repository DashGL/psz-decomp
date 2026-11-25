// FUN_02011c58 @ 0x02011c58 (0x18, arm) - ported from FUN_02016798 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_02011c58 @ 0x02016798 (0x18, ARM) — two-call forwarder: take the
 * node id out of the handle at param_1 with FUN_02011bb4, then hand that node
 * plus the original handle to FUN_02011ac0.
 *
 * Bytes: 10 40 2d e9 / 00 40 a0 e1 / d3 ff ff eb / 04 10 a0 e1 /
 *        94 ff ff eb / 10 80 bd e8
 *   push {r4,lr} ; mov r4,r0 ; bl 0x020166f4 ; mov r1,r4 ; bl 0x02016600 ;
 *   pop {r4,pc}
 *
 * THE DECOMPILE IS WRONG HERE AND THE BYTES WIN: it renders
 * `FUN_02011bb4()` with NO argument. At the call site r0 still holds param_1
 * (nothing between the entry and the bl writes r0), and FUN_02011bb4's own body
 * consumes it immediately (`mov r1, r0 ; mov r0, r4(global) ; bl 0x02016688`),
 * so arity is 1. That is the BRIEF's "a decompile showing a call with no
 * argument may still have a live argument" case, verified from the callee.
 * FUN_02011ac0 is genuinely 2-arg: its body reads `ldrh ip,[r0,#0xa]` and
 * `ldr r3,[r1,ip]`.
 *
 * The `mov r4, r0` / `mov r1, r4` pair is why the frame exists: the handle has
 * to survive the first call, so it is pinned in the callee-saved r4 and the
 * push set is {r4, lr}. The function returns whatever FUN_02011ac0 leaves in
 * r0 — it adds no move of its own — so its result type does not colour the
 * code; it is spelled void.
 */
typedef unsigned int u32;

extern u32 FUN_02011bb4(u32);
extern void FUN_02011ac0(u32, u32);

void FUN_02011c58(u32 param_1)
{
    u32 node;

    node = FUN_02011bb4(param_1);
    FUN_02011ac0(node, param_1);
}
