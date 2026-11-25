// FUN_020b2330 @ 0x020b2330 (0x3c, thumb) - ported from FUN_020a3630 [banked], verified via tools/match.py (word compare + verify_relocs).
/* FUN_020b2330 @ 0x020a3630 (0x3c, Thumb) — MATCHED dsi/1.1.
 * Subobject layout helper. First dispatch FUN_020c38f0(object+0x1c,0).
 * If the second argument is nonzero, query FUN_020ae5a8, compute signed
 * (102 - count*10)>>1 and subtract another five when count >= 6, then
 * invoke FUN_020c3788(subobject,item,100,offset,2). The fifth argument
 * really is stored at [sp], unlike Ghidra's phantom extras on the first
 * call. Banked FUN_020c38f0 proves that its input arity is two.
 * No literal-pool globals. The constants 102,10,5,100,2 and arithmetic
 * right shift are literal machine behavior; presentation-unit meanings
 * are not established. Object and item occupy r5/r4 respectively.
 *
 * Evidence: saved-ROM Ghidra disassembly and extracted/arm9/arm9.bin;
 * 2026-10-14: match.py full word comparison and relocation verification.
 */
typedef unsigned int u32;
extern void FUN_020c38f0(u32, u32);
extern int FUN_020ae5a8(u32);
extern void FUN_020c3788(u32, u32, int, int, int);
void FUN_020b2330(u32 object, u32 item)
{
    int count, offset;
    FUN_020c38f0(object + 0x1c, 0);
    if (item) {
        count = FUN_020ae5a8(item);
        offset = (0x66 - count * 10) >> 1;
        if (count >= 6) offset -= 5;
        FUN_020c3788(object + 0x1c, item, 100, offset, 2);
    }
}
