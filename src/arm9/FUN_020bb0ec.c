// flags: -O4,s
struct G { int pad[19]; int status; };
extern int DAT_020fc950;
extern struct G DAT_0211b2c0;
extern void *FUN_020bb0c8(int);
extern int FUN_020bbbc4(void), FUN_020bbb18(void);
int FUN_020bb0ec(int index) {
    if (FUN_020bb0c8(index) && DAT_020fc950 == -1) {
        DAT_020fc950 = index;
        if (!FUN_020bbbc4()) {
            DAT_0211b2c0.status = 0;
            FUN_020bbb18();
        }
        return 1;
    }
    return 0;
}
