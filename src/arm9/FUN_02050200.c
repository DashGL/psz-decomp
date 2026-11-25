// FUN_02050200 @ 0x02050200 (0xe, thumb) - ported from FUN_02071d7c [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Draft: form composite unsigned binding key from two signed row bytes.
 * Binary search 71fb0 uses this for ordering and equality. Sign-extend byte1f,
 * shift its 32-bit bit pattern left16, OR sign-extended byte20. No low-byte
 * mask: negative byte20 sets all high bits. Unsigned shift avoids C signed
 * left-shift undefined behavior while retaining the ROM bit pattern.
 * Domain names ???. Evidence: scratch/draft-coverage/batch35/02071d7c-disassemble.txt.
 */
typedef unsigned int u32;
u32 FUN_02050200(u32 row)
{
    u32 high=(u32)(int)*(signed char *)(row+0x1f);
    return (high<<16)|(u32)(int)*(signed char *)(row+0x20);
}
