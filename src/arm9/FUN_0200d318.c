enum E { E0 = 0, E1 = 1 };
typedef void (*Callback)(void);
extern Callback DAT_020ebbc0[][5];
extern void FUN_0200d448(void);
extern void FUN_02051ca8(int);
void FUN_0200d318(void *unused, int index) {
    enum E valid = E0;
    if (index > -1 && index < 19) valid = E1;
    if (valid != E0) {
        FUN_0200d448();
        FUN_02051ca8(index);
        DAT_020ebbc0[index][0]();
    }
}
