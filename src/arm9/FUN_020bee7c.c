// FUN_020bee7c @ 0x020bee7c (0x34, thumb) - ported from FUN_020ac404 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
typedef signed char s8;
extern int FUN_020bee50(int table, int handle);
int FUN_020bee7c(int table, int handle)
{
    int p = FUN_020bee50(table, handle);
    int flag;
    if (p != 0) {
        flag = !*(volatile int *)(p + 0xc);
        if (flag == 0) {
            flag = !!*(s8 *)(p + 2);
            if (flag == 0) {
                return *(int *)(p + 0xc);
            }
        }
    }
    return 0;
}
