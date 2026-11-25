// FUN_020666e8 @ 0x020666e8 (0x10, arm) - auto-matched by tools/templates.py [global_getter] (2026-08-28), verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
#define G ((int *)0x02118188)
int FUN_020666e8(void)
{
    return G[0];
}
