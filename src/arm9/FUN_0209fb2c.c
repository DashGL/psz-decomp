// flags: -O4,s
extern char DAT_020fb870[];
extern char *DAT_02108c64;
extern void FUN_0209fd04(void *);
extern void FUN_020306fc(void *);
extern void FUN_020303bc(void *);

enum { E0 = 0, E1 = 1 };

void *FUN_0209fb2c(char *s) {
    *(void **)s = DAT_020fb870;
    if ((*(unsigned short *)(DAT_02108c64 + 4) & 0x80) ? E1 : E0) {
        FUN_0209fd04(s);
    }
    FUN_020306fc(s + 0x4c);
    FUN_020306fc(s + 0x44);
    FUN_020306fc(s + 0x3c);
    FUN_020306fc(s + 0x34);
    FUN_020303bc(s);
    return s;
}
