// FUN_0206f5e4 @ 0x0206f5e4 (0xc, thumb) - ported from FUN_0204dc24 [banked], verified via tools/match.py (word compare + verify_relocs).
/* FUN_0206f5e4 @ 0x0204dc24 (0xc, Thumb) — null-guarded forward to the
 * ARM callee FUN_0206f570: `if (p) FUN_0206f570((u32)p);`. The non-null
 * pointer is never rematerialised — it is already in r0 at the call, so
 * the target has no argument-setup instruction.
 *
 * The Ghidra decompile shows `FUN_0206f570()` with NO argument, which is
 * a zero-arg artefact: the callee is `void FUN_0206f570(u32)` (banked
 * src/arm9/FUN_0206f570.c) and r0 is live into it. Verified against the
 * call encoding: hw1=f001 hw2=facf -> S=0 J1=1 J2=1 I1=0 I2=0,
 * imm=0x0000159e, base=0x206f5ee, target=0x0204f1cc (even -> ARM, so
 * a Thumb-1 BL is the correct interworking form, not BLX).
 *
 * Type sweep (see log.md): `u32 *p` and `void *p` and `u32 p` all emit
 * the target's 0xc on the 9 dsi + 10 2.0 builds; only the 1.2/* family
 * varies, and it is a tooling/codegen outlier, not a spelling question.
 */
typedef unsigned int u32;
extern void FUN_0206f570(u32);

void FUN_0206f5e4(void *p)
{
    if (p != 0) {
        FUN_0206f570((u32)p);
    }
}
