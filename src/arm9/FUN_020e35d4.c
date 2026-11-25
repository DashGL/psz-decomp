// flags: -O4,p
struct Entry35D4 {
    unsigned char id;
    unsigned char f1;
    unsigned short f2;
    char *str;
    void *cb;
};

extern struct Entry35D4 DAT_0211de84[];
extern int FUN_02003e24(const char *, const char *);
extern unsigned int FUN_020e8348(void);
extern void FUN_020e05d8(int, void *, int);
extern int FUN_02003c70(const char *);
extern char *FUN_020e05ac(int, int);
extern void FUN_020e4a2c(int, int);
extern char *FUN_02003c8c(char *, const char *);
extern void FUN_020d77c0(unsigned int, const char *);

unsigned int FUN_020e35d4(unsigned int id, const char *str, void *cb) {
    if (str == 0 || cb == 0) {
        return 0;
    }
    if (id >= 100 && DAT_0211de84[id - 100].id != 0) {
        if (DAT_0211de84[id - 100].str != 0 && FUN_02003e24(DAT_0211de84[id - 100].str, str) != 0) {
            return 0;
        }
    } else {
        id = FUN_020e8348();
        if (id == 0) {
            return 0;
        }
    }
    DAT_0211de84[id - 100].id = (unsigned char)id;
    DAT_0211de84[id - 100].f1 = 0;
    DAT_0211de84[id - 100].f2 = 0;
    if (DAT_0211de84[id - 100].str != 0) {
        FUN_020e05d8(4, DAT_0211de84[id - 100].str, 0);
    }
    DAT_0211de84[id - 100].str = FUN_020e05ac(4, FUN_02003c70(str) + 1);
    if (DAT_0211de84[id - 100].str == 0) {
        FUN_020e4a2c(9, -80001);
        return 0;
    }
    FUN_02003c8c(DAT_0211de84[id - 100].str, str);
    DAT_0211de84[id - 100].cb = cb;
    FUN_020d77c0(id, DAT_0211de84[id - 100].str);
    return id;
}
