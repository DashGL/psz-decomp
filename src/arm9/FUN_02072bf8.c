enum E { E0 = 0, E1 = 1 };
typedef void (*Callback)(void);
extern Callback DAT_020f2614[][4];
extern void FUN_02088680(void);
void FUN_02072bf8(void *unused, int index) {
    enum E valid = E0;
    if (index > -1 && index < 19) valid = E1;
    if (valid != E0) {
        FUN_02088680();
        DAT_020f2614[index][0]();
    }
}
