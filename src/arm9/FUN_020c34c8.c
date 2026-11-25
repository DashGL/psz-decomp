// FUN_020c34c8 @ 0x020c34c8 (0xe, thumb) - ported from FUN_020a9384 [stale], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* FUN_020c34c8 @ 0x020a9384 (0xe, Thumb; two-byte pad excluded).
 * Poll completion only while state +0x78 is nonzero.
 * Static inventory: dead; runtime liveness not established.
 */
extern void FUN_020c3538(unsigned int *state);
void FUN_020c34c8(unsigned int *state)
{
    if (state[0x78 / 4] != 0)
        FUN_020c3538(state);
}
