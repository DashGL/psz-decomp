// FUN_020562ac @ 0x020562ac (0x14, arm) - auto-matched by tools/templates.py [global_deref] (2026-11-04), verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
#define G (*(int **)0x021116A0)
int FUN_020562ac(void) { return G[7]; }
