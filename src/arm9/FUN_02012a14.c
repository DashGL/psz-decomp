// FUN_02012a14 @ 0x02012a14 (0x10, arm) - ported from FUN_02017730 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
typedef unsigned int u32;
typedef unsigned char u8;

void FUN_02012a14(u8 *obj)
{
    *(u32 *)(obj + 0x14) += (u32)obj;
}
