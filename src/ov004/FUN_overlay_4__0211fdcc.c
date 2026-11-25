// FUN_overlay_4__0211fdcc @ 0x0211fdcc (0x2e, thumb) - ported from FUN_020be928 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Livebe684 calls this. Write normalized capability0x100 result to self0,
 * request group change, then fetch manager again and read back actual group.
 * Setter may reject; do not retain requested value. Evidence: batch260.
 */
extern int FUN_020bbfa8(unsigned int);
extern void *FUN_02077930(void);
extern void FUN_02077d58(void *,unsigned int);
extern unsigned int FUN_02077d50(void *);
void FUN_overlay_4__0211fdcc(unsigned int *self)
{
    self[0]=FUN_020bbfa8(0x100)!=0;
    FUN_02077d58(FUN_02077930(),self[0]);
    self[0]=FUN_02077d50(FUN_02077930());
}
