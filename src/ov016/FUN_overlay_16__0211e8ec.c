// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x30, exact bytes and relocation targets; argument/return contract corrected.
// FUN_overlay_16__0211e8ec @ 0x0211e8ec (0x30, arm) - auto-matched by tools/templates.py [set_fields] (2026-11-04), verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
char *FUN_overlay_16__0211e8ec(char *p)
{
    *(int *)(p + 0x0) = 0;
    *(int *)(p + 0x5c) = 0;
    *(int *)(p + 0x60) = 0;
    *(int *)(p + 0x68) = 0;
    *(int *)(p + 0x6c) = 0;
    *(int *)(p + 0x70) = 0;
    *(int *)(p + 0x74) = 0;
    *(int *)(p + 0x64) = 0;
    *(int *)(p + 0x58) = 0;
    *(int *)(p + 0x94) = 0;
    return p;
}

// Caller/callee ABI evidence: Movie factory211e670 consumes constructor returned receiver for following initialization; ARM body preserves receiver through ten clears.
