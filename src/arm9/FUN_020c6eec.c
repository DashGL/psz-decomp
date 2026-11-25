// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x14, exact bytes and relocation targets; argument/return contract corrected.
// FUN_020c6eec @ 0x020c6eec (0x14, thumb) - ported from FUN_02056a78 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Preserve receiver and requested index across the exit callback.
 * ROM forwards both inputs to the exit helper before entering the requested index.
 */
extern void FUN_020c6d60(void *, int),FUN_020c6eb8(void *,int);
void FUN_020c6eec(void *state,int next)
{
    FUN_020c6d60(state, next);
    FUN_020c6eb8(state,next);
}
