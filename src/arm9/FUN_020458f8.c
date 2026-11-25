// FUN_020458f8 @ 0x020458f8 (0x28, thumb) - ported from FUN_020686dc [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,p
/* Draft: compare all four bytes of two item headers, in byte order.
 * Banked inventory stack routines 0206e378/0206e52c establish item scope.
 * Byte0 is category and byte1 subtype; remaining identity bytes are ???.
 * ROM reads the right operand first at each byte, stops on first mismatch,
 * and returns exactly 0 or 1. No null guards or mutation.
 * Evidence: scratch/draft-coverage/batch5/020686dc-asm.txt.
 */
int FUN_020458f8(unsigned char *left,unsigned char *right)
{
    if (right[0]==left[0] && right[1]==left[1] &&
        right[2]==left[2] && right[3]==left[3])
        return 1;
    return 0;
}
