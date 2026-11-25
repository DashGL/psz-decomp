// FUN_02012b1c @ 0x02012b1c (0x10, arm) - ported from FUN_02017730 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
typedef unsigned int u32;
typedef unsigned char u8;

void FUN_02012b1c(u8 *obj)
{
    *(u32 *)(obj + 0x4) += (u32)obj;
}
