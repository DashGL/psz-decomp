// flags: -O4,p -noThumb
extern int FUN_02027f8c(void *);
extern int FUN_02027fc0(void *);
int FUN_020276d8(void *p) {
    if ((int)p >= 0 && FUN_02027f8c(p) && !FUN_02027fc0(p)) return 1;
    return 0;
}
