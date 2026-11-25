// FUN_02045848 @ 0x02045848 (0xc, thumb) - ported from FUN_020412b8 [banked], verified via tools/match.py (word compare + verify_relocs).
/* FUN_02045848 @ 0x020412b8 (0xc, Thumb) — fills four consecutive bytes
 * with 0xff. The target spells that as ONE materialised 0xff in r1 plus
 * FOUR byte stores (strb at +0/+1/+2/+3), never a 32-bit str.
 *
 * Negative grid (do not re-run): `*(u32 *)p = 0xffffffff` does NOT lower
 * to byte stores — it compiles to 0x8 bytes (movs + str), printing
 * `size differs: target 0xc vs candidate 0x8` on every build. So the
 * source is not a single 32-bit all-ones store; four explicit byte
 * stores reproduce the target exactly, on all 24 builds.
 *
 * Ghidra's four `*param_N = 0xff` lines happen to be right here, but
 * they are four statements, not a memset/32-bit-store.
 */
typedef unsigned char u8;

void FUN_02045848(u8 *p)
{
    p[0] = 0xff;
    p[1] = 0xff;
    p[2] = 0xff;
    p[3] = 0xff;
}
