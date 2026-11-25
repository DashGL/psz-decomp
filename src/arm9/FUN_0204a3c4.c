// FUN_0204a3c4 @ 0x0204a3c4 (0x34, thumb) - ported from FUN_020511e4 [banked], verified via tools/match.py (word compare + verify_relocs).
/* FUN_0204a3c4 @ 0x020511e4 (0x34, Thumb) — MATCHED dsi/1.1.
 * Factory for a 0x10c-byte object. Allocate via FUN_020ba894 and, on
 * success, forward the pointer to FUN_0204a3f8 and keep its result.
 * If that result is non-null, call FUN_020473e8(result,arg0,arg2), then
 * copy unsigned halfword *arg1 into result+0x108. Return result or null.
 * The halfword source is read AFTER the call, preserving call effects.
 * This is the same allocator/initializer shape as FUN_02050d40, but its
 * trailing member is a halfword and its setup call takes three inputs.
 * Ghidra's missing initializer argument is recovered from r0 forwarding.
 * Actual register contract: r6=arg0, r5=arg1, r7=arg2, r4=result.
 * No literal pool. Exact domain meanings of inputs remain unproven.
 *
 * Evidence: saved-ROM Ghidra disassembly and extracted/arm9/arm9.bin;
 * 2026-10-14: match.py full word comparison and relocation verification.
 */
typedef unsigned int u32;
typedef unsigned short u16;
extern u32 FUN_020ba894(u32);
extern u32 FUN_0204a3f8(u32);
extern void FUN_020473e8(u32, u32, u32);
u32 FUN_0204a3c4(u32 first, const u16 *value, u32 third)
{
    u32 object = FUN_020ba894(0x10c);
    if (object) object = FUN_0204a3f8(object);
    if (object) {
        FUN_020473e8(object, first, third);
        *(u16 *)(object + 0x108) = *value;
    }
    return object;
}
