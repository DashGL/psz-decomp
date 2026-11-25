// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x1c, exact bytes and relocation targets.
// FUN_02084d00 @ 0x02084d00 (0x1c, thumb)
// flags: -O4,s
/* Compare the mode query with the player-slot search. Preserve context r0
 * forwarded to 02084c80 even though that callee discards it. Combat caller:
 * 02072774. Evidence: scratch/draft-coverage/batch89/.
 */
extern int FUN_02073198(void);
extern int FUN_02084c80(void *);
int FUN_02084d00(void *context)
{
    int mode=FUN_02073198();
    int slot=FUN_02084c80(context);
    return slot==mode;
}
