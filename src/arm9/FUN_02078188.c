// FUN_02078188 @ 0x02078188 (0x10, thumb) - ported from FUN_020a4248 [banked], verified via tools/match.py (word compare + verify_relocs).
int FUN_02078188(int id)
{
    if (id >= 0 && id <= 3)
        return 1;
    return 0;
}
