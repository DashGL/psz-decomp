// FUN_020b05bc @ 0x020b05bc (0x32, thumb) - ported from FUN_02067fc8 [banked], verified via tools/match.py (word compare + verify_relocs).
/* FUN_020b05bc @ 0x02067fc8 (0x32, Thumb) — MATCHED dsi/1.1.
 * Set bit 1 in a qualifying indexed record's status word. Reject
 * negative index and index >= the signed halfword count at +0xc.
 * The byte at pointer(+4)+index*0x10 must equal 1. Call FUN_020b05f0
 * with object in r0, reload the status-array pointer at +8, OR word
 * [index] with 2, and return 1; otherwise return 0. Neighbor 02068054
 * is the paired record-type-0x11/bit-2 operation. Category byte value 1
 * is machine-proven; its domain name remains unknown.
 * Actual body 0x32 ends at pop 02067ff8; the recorded 0x34 includes
 * alignment padding. No globals/pool; one BL relocation to 020b05f0.
 *
 * Evidence: saved-ROM Ghidra disassembly and extracted/arm9/arm9.bin;
 * 2026-10-14: match.py full word comparison and relocation verification.
 */
typedef unsigned int u32;
typedef unsigned char u8;
extern int FUN_020b05f0(u32);
int FUN_020b05bc(u32 object, int index)
{
    if (index >= 0 && index < *(short *)(object + 0xc)) {
        if ((*(u8 **)(object + 4))[index * 16] == 1) {
            FUN_020b05f0(object);
            (*(u32 **)(object + 8))[index] |= 2;
            return 1;
        }
    }
    return 0;
}
