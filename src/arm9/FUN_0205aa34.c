// flags: -O4,p -noThumb
extern int FUN_0205a624(void *, unsigned int, unsigned int);
extern int FUN_0205aa24(void *);
int FUN_0205aa34(unsigned int mode, unsigned int index) {
    unsigned int entry[11];
    if (!FUN_0205a624(entry, mode, index) || !FUN_0205aa24(entry)) {
        return 0;
    }
    return 1;
}
