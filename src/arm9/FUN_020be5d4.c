// FUN_020be5d4 @ 0x020be5d4 (0x18, thumb) - ported from FUN_020abb74 [banked], verified via tools/match.py (word compare + verify_relocs).
extern int FUN_020bee7c(int table, int handle);
extern void FUN_020bf44c(int payload, int index, const void *source);
void FUN_020be5d4(int table, int handle, int index, const void *source)
{
    int payload = FUN_020bee7c(table, handle);
    if (payload != 0) {
        FUN_020bf44c(payload, index, source);
    }
}
