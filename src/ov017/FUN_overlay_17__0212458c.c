// flags: -O4,s
extern unsigned int FUN_overlay_17__02123eec(void *);
extern void *FUN_02086e3c(void);
extern char *FUN_020870c4(void *);
void FUN_overlay_17__0212458c(void *p) {
    unsigned int value = FUN_overlay_17__02123eec(p);
    int index = FUN_overlay_17__02123eec(p);
    if (index >= 0 && index < 12) {
        char *m = FUN_020870c4(FUN_02086e3c());
        (m + index)[0xd40] = value;
    }
}
