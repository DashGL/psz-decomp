// FUN_02014e34 @ 0x02014e34 (0x10, arm) - auto-matched by tools/templates.py [global_getter] (2026-08-28), verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
#define G ((int *)0x020F66F4)
int FUN_02014e34(void)
{
    return G[0];
}
