// FUN_020bef44 @ 0x020bef44 (0x2e, thumb) - ported from FUN_020ac4cc [banked], verified via tools/match.py (word compare + verify_relocs).
extern int FUN_020bed4c(int table);
extern int FUN_020bee50(int table, int handle);
extern void FUN_020befd0(int table, int slot);
int FUN_020bef44(int table, int *payload)
{
    int handle = FUN_020bed4c(table);
    if (handle != -1) {
        int slot = FUN_020bee50(table, handle);
        if (slot != 0) {
            *(int **)(slot + 0xc) = payload;
            *payload = handle;
            FUN_020befd0(table, slot);
        }
    }
    return handle;
}
