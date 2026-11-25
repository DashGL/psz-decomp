// FUN_0204b398 @ 0x0204b398 (0x14, thumb) - ported from FUN_02064380 [banked], verified via tools/match.py (word compare + verify_relocs).
/*
 * FUN_0204b398 @ 0x02064380 (true 0x14, recorded 0x14, Thumb) — live game-side
 * sub-init. Stores the constant 5 into the object's +0x04 field, then hands
 * the object to the list helper with the manager returned by FUN_0204a580.
 */
typedef unsigned int u32;
typedef unsigned char u8;

extern u32 FUN_0204a580(void);
extern void FUN_0204a58c(u32 mgr, u32 obj);

void FUN_0204b398(u32 *obj)
{
    u8 *p = (u8 *)obj;

    *(u32 *)(p + 4) = 5;
    FUN_0204a58c(FUN_0204a580(), (u32)obj);
}
