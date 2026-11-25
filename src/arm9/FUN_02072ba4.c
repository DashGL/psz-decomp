enum E { E0 = 0, E1 = 1 };
typedef void (*Callback)(void);
extern Callback DAT_020f2610[][4];
extern void FUN_02088668(void);
extern void FUN_0208866c(void);
void FUN_02072ba4(void *unused, int index) {
    enum E valid = E0;
    if (index > -1 && index < 19) valid = E1;
    if (valid != E0) {
        FUN_02088668();
        DAT_020f2610[index][0]();
        FUN_0208866c();
    }
}
