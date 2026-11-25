// FUN_020beee4 @ 0x020beee4 (0x2e, thumb) - ported from FUN_020ac46c [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
extern int FUN_020bee7c(int table, int handle);
extern int FUN_020be570(int table, int handle);
int FUN_020beee4(int table, int handle, int index)
{
    int payload = FUN_020bee7c(table, handle);
    if (payload != 0 && index >= 0) {
        if (index < FUN_020be570(table, handle)) {
            return *(int *)(payload + 4) + index * 0x34;
        }
    }
    return 0;
}
