// FUN_02077a84 @ 0x02077a84 (0xa, thumb) - ported from FUN_0205f5f0 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Draft: mark player-update receiver word+0x110 as1.
 * Live02080948 calls this after updating entries. Exact flag meaning ???.
 * Evidence: scratch/draft-coverage/batch76/0205f5f0.disassemble.txt.
 */
void FUN_02077a84(unsigned char *receiver)
{
    *(unsigned int *)(receiver+0x110)=1;
}
