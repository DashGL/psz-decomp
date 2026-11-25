// FUN_02038ff0 @ 0x02038ff0 (0xa, thumb) - ported from FUN_020494a4 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Live 8b8f0 installs table e8888; slot +8 names this function.
 * Preserve all other bits at object+4. Exact domain meaning ???. Batch283.
 */
void FUN_02038ff0(unsigned int *object)
{
    object[1]|=1u;
}
