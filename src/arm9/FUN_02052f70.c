// FUN_02052f70 @ 0x02052f70 (0x10, arm) - auto-matched by tools/templates.py [global_getter] (2026-11-04), verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
extern int G_02110B00[];
#define G G_02110B00
int FUN_02052f70(void)
{
    return G[1];
}
