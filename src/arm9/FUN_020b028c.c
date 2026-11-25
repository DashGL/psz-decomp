// FUN_020b028c @ 0x020b028c (0x4c, thumb) - ported from FUN_0206e4e0 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,p
/* FUN_020b028c @ 0x0206e4e0 (0x4c, Thumb), verified dsi/1.1.
 * Inventory insertion/stack merge: slot finder6e52c takes owner,item,option.
 * For a valid slot, test5ff00 decides copy through5ff90 versus merging
 * incoming and existing counts from6c468 with6c4ac. Returns selected slot
 * or -1. Positive copy branch first restores original call order; count+old
 * operand order reproduces addition register roles. The third argument is
 * real and forwarded unchanged, despite its omission by the decompiler.
 * Return6e52a establishes full4c, no pool or trailing padding.
 * 2026-10-15: full bytes/relocations match -O4,p (also -O4,s).
 * Gameplay untested.
 */
typedef unsigned int u32;
extern int FUN_020b02d8(u32, u32, u32), FUN_0203a1fc(u32), FUN_020849d4(u32);
extern void FUN_02039534(u32, u32), FUN_02084a1c(u32, int);
int FUN_020b028c(u32 owner, u32 item, u32 option) {
    int slot = FUN_020b02d8(owner, item, option);
    if (slot != -1) {
        int offset = slot * 16;
        if (FUN_0203a1fc(*(u32 *)(owner + 4) + offset)) {
            FUN_02039534(*(u32 *)(owner + 4) + offset, item);
        } else {
            int count = FUN_020849d4(item);
            u32 records = *(u32 *)(owner + 4);
            int old = FUN_020849d4(records + offset);
            FUN_02084a1c(records + offset, count + old);
        }
    }
    return slot;
}
