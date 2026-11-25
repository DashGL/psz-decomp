// flags: -O4,s
//cpp
struct Item {
    unsigned char b[4];
    ~Item() {}
};
extern "C" {
extern int FUN_0204ca4c(Item item, int subtype);
int FUN_0204c7e4(const Item *s) {
    int ret = 9;
    if (FUN_0204ca4c(*s, 2) || FUN_0204ca4c(*s, 6) || FUN_0204ca4c(*s, 10) ||
        FUN_0204ca4c(*s, 17) || FUN_0204ca4c(*s, 18) || FUN_0204ca4c(*s, 20) ||
        FUN_0204ca4c(*s, 28) || FUN_0204ca4c(*s, 29) || FUN_0204ca4c(*s, 30)) {
        ret = 2;
    } else if (FUN_0204ca4c(*s, 4) || FUN_0204ca4c(*s, 8) || FUN_0204ca4c(*s, 21) ||
               FUN_0204ca4c(*s, 12) || FUN_0204ca4c(*s, 23) || FUN_0204ca4c(*s, 24)) {
        ret = 0;
    }
    return ret;
}
}
