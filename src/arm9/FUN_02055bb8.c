// FUN_02055bb8 @ 0x02055bb8 (0x14, arm) - auto-matched by tools/templates.py [global_deref] (2026-11-04), verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
#define G (*(int **)0x021116A0)
int FUN_02055bb8(void) { return G[0]; }
