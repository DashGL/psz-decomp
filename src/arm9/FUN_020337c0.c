// FUN_020337c0 @ 0x020337c0 (0xe, thumb) - ported from FUN_020401d4 [banked], verified via tools/match.py (word compare + verify_relocs).
/* FUN_020337c0 @ 0x020401d4 (0xe true, 0x10 recorded, Thumb) — copies two
 * SIGNED halfwords from the source object to the destination object:
 * `ldrsh` loads, plain `strh` stores, so the fields are signed on the read
 * side only. Recorded span 0x10 includes the standard 2-byte 0000 pad that
 * follows the +0x0c `bx lr`, so the true body is 0xe.
 *
 * Verified against the disassembly, not the decompile: the decompile's
 * `*param_1 = *param_2; param_1[1] = param_2[1];` gets the field COUNT and
 * the signedness right by accident but hides that the source offsets are
 * materialized into r2 (0 then 2) and used as REGISTER offsets rather than
 * immediates.
 */
typedef short s16;

void FUN_020337c0(s16 *d, s16 *s)
{
    d[0] = s[0];
    d[1] = s[1];
}
