// FUN_020c34a0 @ 0x020c34a0 (0x26, thumb) - ported from FUN_020a935c [stale], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* FUN_020c34a0 @ 0x020a935c (0x26, Thumb; 2-byte pad excluded).
 * If a request is in flight, tear it down: stop and free the shared work
 * object at +0x2c, clear the in-flight flag, and mark the slot freed.
 * Returns the manager pointer unchanged in every case.
 */
extern int FUN_0205a038(void *work);
extern void FUN_02059ffc(void *work);
unsigned int FUN_020c34a0(unsigned int manager)
{
    if (*(unsigned int *)(manager + 0x78) != 0) {
        FUN_0205a038((void *)(manager + 0x2c));
        FUN_02059ffc((void *)(manager + 0x2c));
        *(unsigned int *)(manager + 0x78) = 0;
        *(unsigned int *)(manager + 0x7c) = 1;
    }
    return manager;
}
