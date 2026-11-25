// flags: -O4,s
enum { E0 = 0, E1 = 1 };
extern char DAT_020fb870[];
extern char *DAT_02108c64;
extern void FUN_0209fd04(void *);
extern void FUN_020306fc(void *);
extern void FUN_020303bc(void *);
extern void FUN_020ba8ac(void *);
void *FUN_0209fb84(char *s) {
    *(void **)s = DAT_020fb870;
    if (((*(unsigned short *)(DAT_02108c64 + 4) & 0x80) ? E1 : E0) != 0) {
        FUN_0209fd04(s);
    }
    FUN_020306fc(s + 76);
    FUN_020306fc(s + 68);
    FUN_020306fc(s + 60);
    FUN_020306fc(s + 52);
    FUN_020303bc(s);
    FUN_020ba8ac(s);
    return s;
}
