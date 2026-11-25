// FUN_02012b2c @ 0x02012b2c (0x10, arm) - ported from FUN_02017730 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
typedef unsigned int u32;
typedef unsigned char u8;

void FUN_02012b2c(u8 *obj)
{
    *(u32 *)(obj + 0xc) += (u32)obj;
}
