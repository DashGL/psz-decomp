// FUN_020bc620 @ 0x020bc620 (0x6, thumb) - ported from FUN_020aa63c [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Arithmetic shift truncates toward negative infinity. Live combat caller
 * 020441a8 consumes the result. Evidence: scratch/draft-coverage/batch88/.
 */
int FUN_020bc620(const int *value)
{
    return *value >> 12;
}
