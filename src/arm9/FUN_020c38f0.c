// FUN_020c38f0 @ 0x020c38f0 (0xe, thumb) - ported from FUN_020a9a9c [banked], verified via tools/match.py (word compare + verify_relocs).
/* FUN_020c38f0 @ 0x020a9a9c (0x10 recorded / 0xe true, Thumb) — virtual
 * dispatch shim: with a = arg0 and b = arg1, it calls
 *   (*(u32 *)(*(u32 *)((u8 *)a + 0x18) + 4))((u8 *)a + 4, b)
 * i.e. slot [1] of the vtable reached through field +0x18 of *a, called with
 * the +4 sub-object pointer and the second argument forwarded untouched.
 *
 * Structure read off the target bytes (the Ghidra decompile agrees on the
 * semantics but hides the second argument — it is not in the decompile at all,
 * and r1 is provably forwarded because nothing between the push and the blx
 * writes r1):
 *   push {r3, lr} / adds r2, r0, #0 / adds r0, r2, #4
 *   ldr r2, [r2, #0x18] / ldr r2, [r2, #4] / blx r2 / pop {r3, pc}
 * The 2-byte `0000` tail is inter-function padding (FUN_020a9aac starts at
 * +0x10), so the true span is 0xe.
 *
 * Arity is PROVEN by banked callers FUN_020a33b4 / FUN_020a3420, which both
 * declare `extern void FUN_020c38f0(u32 *a, u32 b);` and pass
 * ((u8 *)obj + 0x1c, 0).
 *
 * Pool census: no literal load at all, so no extern address is guessed.
 */
typedef unsigned int u32;
typedef unsigned char u8;

typedef void (*FP)(u32 *, u32);

extern void FUN_020c38f0(u32 *a, u32 b);

void FUN_020c38f0(u32 *a, u32 b) {
    FP *vt = *(FP **)((u8 *)a + 0x18);

    vt[1]((u32 *)((u8 *)a + 4), b);
}
