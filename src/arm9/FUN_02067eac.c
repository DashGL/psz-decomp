// FUN_02067eac @ 0x02067eac (0x10, arm) - auto-matched by tools/templates.py [global_getter] (2026-08-28), verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
#define G ((unsigned short *)0x04000100)
int FUN_02067eac(void)
{
    return G[0];
}
