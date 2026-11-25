// FUN_020c3c20 @ 0x020c3c20 (0x28, thumb) - ported from FUN_020a92d0 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* FUN_020c3c20 @ 0x020a92d0 (0x28, Thumb).
 * Reset all eight nodes of one group and restore its head to that group's
 * first node. The category-check result is deliberately ignored, as in ROM:
 * callers must supply a valid category; this function does not guard it.
 */
extern int FUN_020c3c90(void *manager, unsigned int category);
extern void FUN_020c3a84(unsigned int *node);
void FUN_020c3c20(unsigned int base, unsigned int category)
{
    int slot;
    unsigned int nodes;
    FUN_020c3c90((void *)base, category);
    slot = 0;
    nodes = base + 0xc + category * 0x100;
    do {
        FUN_020c3a84((unsigned int *)(nodes + slot * 0x20));
        slot++;
    } while (slot < 8);
    ((unsigned int *)base)[category] = nodes;
}
