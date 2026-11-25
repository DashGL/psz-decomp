// FUN_020be520 @ 0x020be520 (0x12, thumb) - ported from FUN_020abaf0 [banked], verified via tools/match.py (word compare + verify_relocs).
extern int FUN_020beeb0(int table, int handle);
int FUN_020be520(int table, int handle)
{
    int payload = FUN_020beeb0(table, handle);
    if (payload != 0) return payload + 0xc;
    return 0;
}
