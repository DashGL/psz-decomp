// FUN_020c3538 @ 0x020c3538 (0x2a, thumb) - ported from FUN_020a93f4 [stale], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* FUN_020c3538 @ 0x020a93f4 (0x2a, Thumb; two-byte pad excluded).
 * If bit 0 of +0x38 is clear, close the +0x2c work object and finalize
 * the state object, then mark +0x78=0 and +0x7c=1.
 * Static inventory: dead; runtime liveness not established.
 */
extern void FUN_02059ffc(void *work);
extern void FUN_0205a840(void *state);
void FUN_020c3538(unsigned int *state)
{
    unsigned int busy = 1;
    if ((state[0x38 / 4] & 1) == 0)
        busy = 0;
    if (busy == 0) {
        FUN_02059ffc((char *)state + 0x2c);
        FUN_0205a840(state);
        state[0x78 / 4] = 0;
        state[0x7c / 4] = 1;
    }
}
