enum E { E0 = 0, E1 = 1 };
typedef void (*Callback)(void);
extern Callback DAT_020f2618[][4];
extern void FUN_0208867c(void);
void FUN_02072bd0(void *unused, int index) {
    enum E valid = E0;
    if (index > -1 && index < 19) valid = E1;
    if (valid != E0) {
        DAT_020f2618[index][0]();
        FUN_0208867c();
    }
}
