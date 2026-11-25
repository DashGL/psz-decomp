// FUN_020be5ec @ 0x020be5ec (0x22, thumb) - ported from FUN_020abb8c [banked], verified via tools/match.py (word compare + verify_relocs).
extern int FUN_020bee50(int table, int handle);
int FUN_020be5ec(int table, int handle)
{
    int p = FUN_020bee50(table, handle);
    int flag;
    if (p != 0) {
        flag = !*(int *)(p + 0xc);
        if (flag == 0) {
            return *(int *)(p + 8);
        }
    }
    return 0;
}
