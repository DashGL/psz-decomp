enum { E0 = 0, E1 = 1 };
extern int DAT_0211a3c4[];
extern int FUN_0209cffc(void *);
int FUN_020323fc(char *self) {
    if ((DAT_0211a3c4[2] >= 0 ? E1 : E0) != E0) {
        return FUN_0209cffc(self + 0x2c);
    }
    return 0;
}
