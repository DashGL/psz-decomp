// flags: -O4,p
enum { E0 = 0, E1 = 1 };
extern int DAT_0211a530;
extern signed char DAT_020f3060[4][4][11];
extern int FUN_0203a820(void *, int);
extern int FUN_0209e350(void *);
extern unsigned short *FUN_02084638(void *);
extern void *FUN_02086e3c(void);
extern char *FUN_020870c4(void *);
#pragma thumb off
extern int FUN_0200a3a0(int, int);
#pragma thumb on

int FUN_02084944(unsigned char *item) {
    unsigned short *d;
    char *character;
    int limit;
    int type;
    int level;
    if (FUN_0203a820(item, 3)) {
        d = FUN_02084638(item);
        if (d) {
            limit = ((unsigned int)(*d) << 16) >> 27;
            if (!limit) {
                limit = 99;
            }
            if (((item[1] == 2) ? E1 : E0) != 0 && ((DAT_0211a530 != 0) ? E1 : E0) != 0) {
                character = FUN_020870c4(FUN_02086e3c());
                type = FUN_0209e350(character);
                if (type >= 10 && type <= 13) {
                    level = FUN_0200a3a0((int)*(unsigned char *)(character + 86), 10);
                    return DAT_020f3060[type - 10][item[2]][level];
                }
            }
            return limit;
        }
    }
    return 0;
}
