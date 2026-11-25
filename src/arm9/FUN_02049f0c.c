// FUN_02049f0c @ 0x02049f0c (0x34, thumb) - ported from FUN_02050d40 [banked], verified via tools/match.py (word compare + verify_relocs).
/* FUN_02049f0c @ 0x02050d40 (0x34, Thumb) — MATCHED dsi/1.1.
 * Factory for a 0x174-byte object. Allocate through FUN_020ba894;
 * if non-null, pass the allocation in r0 to FUN_02049f40 and use its
 * returned pointer. If that result is non-null, call FUN_020477f0(result,
 * first argument), then FUN_02046390(result+0x170,second argument).
 * Return the resulting pointer (including either null failure result).
 * Ghidra hides the live r0 input to FUN_02049f40; the ROM forwards it.
 * The +0x170 location is a trailing four-byte subobject/field within the
 * allocation. Its domain role and that of each input are not proven.
 * Register contract: r5/r6 preserve inputs, r4 holds allocation/result.
 * No global literals; size is the full 0x34-byte function.
 *
 * Evidence: saved-ROM Ghidra disassembly and extracted/arm9/arm9.bin;
 * 2026-10-14: match.py full word comparison and relocation verification.
 */
typedef unsigned int u32;
extern u32 FUN_020ba894(u32);
extern u32 FUN_02049f40(u32);
extern void FUN_020477f0(u32, u32);
extern void FUN_02046390(u32, u32);
u32 FUN_02049f0c(u32 parent, u32 value)
{
    u32 object = FUN_020ba894(0x174);
    if (object) object = FUN_02049f40(object);
    if (object) {
        FUN_020477f0(object, parent);
        FUN_02046390(object + 0x170, value);
    }
    return object;
}
