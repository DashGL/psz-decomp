// FUN_02044c34 @ 0x02044c34 (0x1c, thumb) - ported from FUN_02072c98 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Goal55 batch28: full true extent and every relocation target verified.
 * Copy 12 bytes src to dst+16, store third input low16 at dst+28, and update
 * collision record via FUN_02044c50.
 */
typedef unsigned int u32;
typedef unsigned short u16;
typedef struct {
    u32 x, y, z;
} Triple;
extern void FUN_02044c50(void *);
void FUN_02044c34(unsigned char *dst, Triple *src, u32 unused)
{
    Triple *d = (Triple *)(dst + 16);
    *d = *src;
    *(u16 *)(dst + 28) = (u16)unused;
    FUN_02044c50(dst);
}
