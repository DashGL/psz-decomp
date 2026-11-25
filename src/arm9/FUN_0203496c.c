// FUN_0203496c @ 0x0203496c (0x10, thumb) - ported from FUN_02073380 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Draft: resolve entry byte6 as one of two child pointers.
 * Banked 020731c4 compares old/new child and updates its active bit/binding.
 * Unsigned selector >=2 returns zero; valid selector returns stored pointer
 * unchanged, including null. No object or entry null checks.
 * Evidence: scratch/draft-coverage/batch30/02073380-disassemble.txt.
 */
typedef unsigned int u32;
#define CHILD_SELECTOR_OFF 6
u32 FUN_0203496c(u32 *children, unsigned char *entry)
{
    unsigned int selector=entry[CHILD_SELECTOR_OFF];
    if (selector<2) return children[selector];
    return 0;
}
