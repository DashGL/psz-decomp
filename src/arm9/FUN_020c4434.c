// FUN_020c4434 @ 0x020c4434 (0x1a, thumb) - ported from FUN_020a6e54 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -thumb
/* FUN_020c4434 @ 0x020a6e54, Thumb, true 0x1a (recorded 0x1c spans a
 * 2-byte 0000 inter-function pad). Zero-fill of a 0x10-byte sub-record
 * via the banked byte-fill helper FUN_020656b8(dst,val,n): 2 bytes at obj,
 * then 0xe at obj+2 (byte-step spelling keeps the +2 displacement).
 * Return = obj (r4 pins the pointer across both calls; pop {r4,pc}).
 * The Thumb->ARM calls encode as BLX in the ROM; the compiled candidate
 * carries BL + R_ARM_CALL and the link re-encodes the mode from the
 * callee symbol (corpus convention: 0203e37c precedent; the 4-byte slot
 * is reloc-wildcarded and verify_relocs checks the destination).
 * Unbanked callee of FUN_0208c874's 4-slot init loop (x2 per slot).
 * MATCHED: ALL 24 builds at 0x1a (word compare + relocs verified).
 */
#include <nds/ndstypes.h>

extern void FUN_020656b8(unsigned int *dst, unsigned int val, unsigned int n);

void *FUN_020c4434(void *obj)
{
    unsigned int *p = (unsigned int *)obj;
    FUN_020656b8(p, 0, 2);
    FUN_020656b8((unsigned int *)((char *)p + 2), 0, 0xe);
    return p;
}
