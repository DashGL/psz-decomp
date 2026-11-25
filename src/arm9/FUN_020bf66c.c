// FUN_020bf66c @ 0x020bf66c (0x14, thumb) - ported from FUN_020acbe0 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Live ac894 -> parked acc94 -> this helper. First-coordinate store
 * precedes second-coordinate loads; overlapping vectors observe that store.
 * Unsigned arithmetic preserves wrapped machine addition. Batch270.
 */
typedef unsigned int u32;
void FUN_020bf66c(u32 *out,const u32 *a,const u32 *b)
{
    out[0]=a[0]+b[0];
    out[1]=a[1]+b[1];
}
