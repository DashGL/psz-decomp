// FUN_020109b8 @ 0x020109b8 (0x24, arm) - ported from FUN_0202b074 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_020109b8 @ 0x0202b074 (true 0x24, recorded 0x24, ARM) — live game-logic
 * refcount release: decrement the counter at +0x120 and, only on the 1->0
 * transition, run the teardown hook.
 *
 * C1 mode proof: instruction stride is 4 (`e92d4008` push, `e1a00000`-class
 * words, `e12fff1e`-style epilogue) and every word carries condition 0b1110,
 * so this is ARM, NOT Thumb — despite the 4-aligned recorded size.
 *
 * Bytes (ARM):
 *   0202b074: e92d4008 push  {r3, lr}
 *   0202b078: e5900128 ldr   r1, [r0, #0x120]
 *   0202b07c: e3a00000 cmp   r1, #0
 *   0202b080: 0bd08  -> popeq {r3, pc}
 *   0202b084: e2511001 subs  r1, r1, #1
 *   0202b088: e5801128 str   r1, [r0, #0x120]
 *   0202b08c: 1bd08  -> popne {r3, pc}
 *   0202b090: ebffff9f bl    0x02028714
 *   0202b094: e8bd8008 pop   {r3, pc}
 *
 * C2 SIZE: recorded 0x24 == true 0x24. Checked both ways: at 0x20 the
 * candidate is 4 bytes over and at 0x24 it matches, so the trailing
 * `pop {r3, pc}` at 0x0202b094 is a real instruction of this body, not an
 * over-run into the next entry (0x0202b098 opens its own `e92d4010`).
 *
 * Arity of FUN_0200e0e4 from its OWN ARM body: `mov r4, r0` then
 * `ldr r0, [r4, #0x4c]` — 1 live arg, and r0 (untouched here) is passed.
 */
typedef unsigned int u32;
typedef unsigned char u8;

extern void FUN_0200e0e4(u32 *);

void FUN_020109b8(u32 *self)
{
    u32 *cnt;
    u32 v;

    cnt = (u32 *) ((u8 *) self + 0x120);
    v = *cnt;
    if (v == 0) {
        return;
    }
    v--;
    *cnt = v;
    if (v != 0) {
        return;
    }
    FUN_0200e0e4(self);
}
