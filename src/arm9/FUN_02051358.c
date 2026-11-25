// FUN_02051358 @ 0x02051358 (0x14, thumb) - ported from FUN_02056a78 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Preserve receiver and requested index across the exit callback.
 * Caller57f44 selects state1 when its readiness query fails. Evidence:
 * scratch/draft-coverage/batch95/02056a78.disassemble.txt.
 */
extern void FUN_02051314(void *),FUN_020512d8(void *,int);
void FUN_02051358(void *state,int next)
{
    FUN_02051314(state);
    FUN_020512d8(state,next);
}
