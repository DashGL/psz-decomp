// FUN_020bef14 @ 0x020bef14 (0x2e, thumb) - ported from FUN_020ac46c [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
extern int FUN_020beeb0(int table, int handle);
extern int FUN_020be570(int table, int handle);
int FUN_020bef14(int table, int handle, int index)
{
    int payload = FUN_020beeb0(table, handle);
    if (payload != 0 && index >= 0) {
        if (index < FUN_020be570(table, handle)) {
            return *(int *)(payload + 4) + index * 0x34;
        }
    }
    return 0;
}
