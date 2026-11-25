// FUN_0200c938 @ 0x0200c938 (0x24, arm) - ported from FUN_0203c378 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_0200c938 @ 0x0203c378, ARM, 0x24 (recorded = true). Byte-clear
 * loop returning dst: zero n bytes; fused null-guard (cmp dst /
 * cmpne n / bxeq) with the loop cursor STAGED BEFORE the guard — the
 * mov exists because r0 (dst) is the RETURN VALUE and must survive;
 * the tail bx lr returns r0 = dst with no extra code.
 * LIVE: census 0921 t1 5.6/s.
 * MATCHED: dsi/1.1 -noThumb, reloc-free.
 */
#include <nds/ndstypes.h>

u8 *FUN_0200c938(u8 *dst, int n)
{
    u8 *p = dst;
    if (dst == 0 || n == 0)
        return dst;
    do {
        *p++ = 0;
        n--;
    } while (n != 0);
    return dst;
}
