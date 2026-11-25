// FUN_02003aac @ 0x02003aac (0x10, arm) - auto-matched by tools/templates.py [global_setter] (2026-08-28), verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
#define G ((int *)0x020F6488)
void FUN_02003aac(int v) { G[0] = v; }
