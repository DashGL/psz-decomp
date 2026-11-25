// FUN_0204a9bc @ 0x0204a9bc (0xe, thumb) - ported from FUN_02063a08 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Draft: copy signed heading components at context+c/e to two outputs.
 * Banked spawn initializer560e8 feeds these to matrix builder0cde4.
 * Exact angle units ???. Preserve load/store order for output aliasing.
 * Evidence: scratch/draft-coverage/batch45/02063a08-disassemble.txt.
 */
typedef unsigned int u32;
void FUN_0204a9bc(u32 context,short *first,short *second)
{
    *first=*(short *)(context+0xc);
    *second=*(short *)(context+0xe);
}
