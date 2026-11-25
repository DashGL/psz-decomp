// flags: -O4,p
typedef struct { unsigned int a, b, c, d; } Record;
extern char *DAT_02108d04;
extern int FUN_0208a094(void *);
int FUN_020a9248(void) {
    int result = 0;
    if (DAT_02108d04) {
        Record local = *(Record *)(DAT_02108d04 + 416);
        result = FUN_0208a094(&local);
    }
    return result;
}
