// FUN_0200eb60 @ 0x0200eb60 (0x18, arm) - auto-matched by tools/templates.py [global_swap] (2026-11-04), verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
extern int G_02102874;
#define G G_02102874
int FUN_0200eb60(int v) { int old = G; G = v; return old; }
