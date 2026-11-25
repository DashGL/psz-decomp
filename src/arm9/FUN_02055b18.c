// FUN_02055b18 @ 0x02055b18 (0x10, arm) - auto-matched by tools/templates.py [global_getter] (2026-08-28), verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
#define G ((int *)0x02111620)
int FUN_02055b18(void)
{
    return G[0];
}
