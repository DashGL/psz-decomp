// FUN_02047384 @ 0x02047384 (0x64, thumb) - ported from FUN_0204e1f0 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,p
/* FUN_02047384 @ 0x0204e1f0, Thumb, 0x64. Entity angle-jitter driver:
 * for each of flags bits 0x2000/0x4000/0x8000 in self+0xe4, write a
 * random/Q12 value (FUN_02035b60(0x10000)) into the u16 angle fields
 * +0x68/+0x6a/+0x6c, then commit orientation via FUN_0204bf88.
 * Scan 0920: 0.12 hits/sec (per spawn), call_reachable. */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern u32 FUN_02035b60(u32 n);
extern void FUN_0204bf88(u32 *obj);

void FUN_02047384(u8 *self)
{
    if (*(u32 *)(self + 0xe4) & 0x2000) {
        *(u16 *)(self + 0x68) = (u16)FUN_02035b60(0x10000);
        FUN_0204bf88((u32 *)self);
    }
    if (*(u32 *)(self + 0xe4) & 0x4000) {
        *(u16 *)(self + 0x6a) = (u16)FUN_02035b60(0x10000);
        FUN_0204bf88((u32 *)self);
    }
    if (*(u32 *)(self + 0xe4) & 0x8000) {
        *(u16 *)(self + 0x6c) = (u16)FUN_02035b60(0x10000);
        FUN_0204bf88((u32 *)self);
    }
}
