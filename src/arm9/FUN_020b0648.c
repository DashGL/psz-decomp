// FUN_020b0648 @ 0x020b0648 (0x3a, thumb) - ported from FUN_02068054 [banked], verified via tools/match.py (word compare + verify_relocs).
/* FUN_020b0648 @ 0x02068054 (0x3a, Thumb) — MATCHED dsi/1.1.
 * Set bit 2 of an indexed record's status word. Reject negative indices
 * and indices >= the signed halfword count at +0xc. A record at
 * pointer(+4)+index*0x10 must have byte[0]==0 and byte[1]==0x11.
 * Call FUN_020b0684(object), reload the status-array pointer at +8,
 * OR its index-th word with 4, and return 1; otherwise return 0.
 * FUN_020b0684 resolves a previous selected index through 02068278 and
 * clears the same bit on a qualifying record. These paired routines
 * establish the selection-flag interpretation; record type 0x11's
 * domain name is not established. Flags array is separate from records.
 * True body 0x3a ends with pop at 0206808c; recorded 0x3c includes padding.
 * No globals or literal pools; one BL relocation to 020b0684.
 *
 * Evidence: saved-ROM Ghidra disassembly and extracted/arm9/arm9.bin;
 * 2026-10-14: match.py full word comparison and relocation verification.
 */
typedef unsigned int u32;
typedef unsigned char u8;
extern int FUN_020b0684(u32);
int FUN_020b0648(u32 object, int index)
{
    if (index >= 0 && index < *(short *)(object + 0xc)) {
        u8 *entry = *(u8 **)(object + 4) + index * 16;
        if (entry[0] == 0 && entry[1] == 17) {
            FUN_020b0684(object);
            (*(u32 **)(object + 8))[index] |= 4;
            return 1;
        }
    }
    return 0;
}
