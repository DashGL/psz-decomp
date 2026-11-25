// FUN_020be550 @ 0x020be550 (0x12, thumb) - ported from FUN_020abaf0 [banked], verified via tools/match.py (word compare + verify_relocs).
extern int FUN_020beeb0(int table, int handle);
int FUN_020be550(int table, int handle)
{
    int payload = FUN_020beeb0(table, handle);
    if (payload != 0) return payload + 0x18;
    return 0;
}
