// FUN_020bf618 @ 0x020bf618 (0x14, thumb) - ported from FUN_020acb8c [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Reached through ad75c/acdd8/ad9bc from live abfb8. First store precedes
 * second loads; partial overlaps observe that store. Arithmetic wraps.
 */
typedef unsigned int u32;
void FUN_020bf618(u32 *out,const u32 *a,const u32 *b)
{
    out[0]=a[0]-b[0];
    out[1]=a[1]-b[1];
}
