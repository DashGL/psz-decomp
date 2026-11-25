// FUN_02067184 @ 0x02067184 (0x18, arm) - auto-matched by tools/templates.py [set_fields] (2026-08-28), verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
void FUN_02067184(char *p)
{
    *(int *)(p + 0x4) = 0;
    *(int *)(p + 0x0) = 0;
    *(int *)(p + 0x8) = 0;
    *(int *)(p + 0xc) = 0;
}
