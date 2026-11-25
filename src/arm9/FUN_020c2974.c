// FUN_020c2974 @ 0x020c2974 (0x30, thumb) - ported from FUN_020a8ff8 [banked], verified via tools/match.py (word compare + verify_relocs).
/* FUN_020c2974 @ 0x020a8ff8 (0x30, thumb) -- census game.
 *
 * Semantics from the bytes:
 *   020a8ff8  10b5       push {r4, lr}
 *   020a8ffa  0c1c       adds  r4, r1, #0        ; r4 = a1  (a0 is NEVER read)
 *   020a8ffc  2068       ldr   r0, [r4]          ; r0 = a1->p0
 *   020a8ffe  0028       cmp   r0, #0
 *   020a9000  03d0       beq   020c2986          ; null -> skip
 *   020a9002  02f0d5fa   bl    020ba8c4          ; release(a1->p0)
 *   020a9006  0020       movs  r0, #0
 *   020a9008  2060       str   r0, [r4]          ; a1->p0 = 0
 *   020c2986  6068       ldr   r0, [r4, #4]      ; ... p1 at +4
 *   020a900c  0028       cmp   r0, #0
 *   020a900e  03d0       beq   020c2994
 *   020a9010  02f0cefa   bl    020ba8c4
 *   020a9014  0020       movs  r0, #0
 *   020a9016  6060       str   r0, [r4, #4]
 *   020c2994  a068       ldr   r0, [r4, #8]      ; ... p2 at +8
 *   020a901a  0028       cmp   r0, #0
 *   020a901c  03d0       beq   020c29a2
 *   020a901e  02f0c7fa   bl    020ba8c4
 *   020a9022  0020       movs  r0, #0
 *   020a9024  a060       str   r0, [r4, #8]
 *   020c29a2  10bd       pop   {r4, pc}
 *
 * Three identical release-and-null blocks over the pointer words at +0, +4
 * and +8 of the SECOND argument. The first argument is dead: r0 is
 * overwritten by the first `ldr` and never tested, so the signature carries
 * an unused leading parameter.
 *
 * FUN_020ba8c4 is the banked 8-byte tailcall thunk src/arm9/FUN_020ba8c4.c
 * (`FUN_020ab4e0(a0)`), i.e. a release/destroy-of-one-pointer helper -- C8:
 * arity read off its OWN body (it forwards exactly r0).
 *
 * True size 0x30 == recorded 0x30 (pop at +0x2e ends the span; the next
 * inventory entry FUN_020a9028 begins immediately). No literal pool.
 */
typedef unsigned int u32;
typedef int s32;

extern void FUN_020ba8c4(void *p);

void FUN_020c2974(s32 unused, u32 *a1)
{
    (void)unused;
    if (a1[0]) {
        FUN_020ba8c4((void *)a1[0]);
        a1[0] = 0;
    }
    if (a1[1]) {
        FUN_020ba8c4((void *)a1[1]);
        a1[1] = 0;
    }
    if (a1[2]) {
        FUN_020ba8c4((void *)a1[2]);
        a1[2] = 0;
    }
}
