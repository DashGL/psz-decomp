// FUN_020c29bc @ 0x020c29bc (0x4c, thumb) - ported from FUN_020a9040 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* FUN_020c29bc @ 0x020a9040 (0x4c, Thumb).
 * Initialize manager words 1..8, obtain a 0x5c-byte child and initialize
 * it if nonnull. Store a separately obtained 0x1000-byte/0x10-aligned
 * buffer in the child, then initialize its +0x18 and +0x3c subobjects.
 * The subsequent child dereference is unconditional, including failure.
 * FUN_020c29a4 preserves r0, returning the child despite Ghidra's void type.
 */
extern unsigned int FUN_020ba894(unsigned int size);
extern unsigned int FUN_020c29a4(unsigned int child);
extern unsigned int FUN_020ba8bc(unsigned int size, unsigned int alignment);
extern void FUN_02013438(unsigned int object);
extern void FUN_0201347c(unsigned int object);
unsigned int *FUN_020c29bc(unsigned int *manager)
{
    unsigned int child;
    manager[1] = 3;
    manager[2] = -1;
    manager[3] = 0;
    manager[4] = 0;
    manager[5] = 0;
    manager[6] = 0;
    manager[7] = 0;
    manager[8] = 0;
    child = FUN_020ba894(0x5c);
    if (child != 0)
        child = FUN_020c29a4(child);
    manager[0] = child;
    *(unsigned int *)manager[0] = FUN_020ba8bc(0x1000, 0x10);
    FUN_02013438(manager[0] + 0x18);
    FUN_0201347c(manager[0] + 0x3c);
    return manager;
}
