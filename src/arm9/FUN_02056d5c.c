// FUN_02056d5c @ 0x02056d5c (0x10, arm) - auto-matched by tools/templates.py [global_getter] (2026-08-28), verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
#define G ((int *)0x02111F00)
int FUN_02056d5c(void)
{
    return G[0];
}
