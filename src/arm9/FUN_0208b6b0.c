// flags: -O4,s
typedef struct { unsigned char b[4]; } Key;
extern int FUN_0204db98(void *, int);
extern int FUN_0203a1a8(void *, int);
extern signed char *FUN_02084568(void *);
extern signed char *FUN_020845a8(void *);

int FUN_0208b6b0(void *unused, char *item) {
    int threshold = -1;
    Key c, b, a;
    signed char *entry;
    if (FUN_0204db98(item, 0) && (a = *(Key *)item, !FUN_0203a1a8(&a, 17))) {
        c = *(Key *)item;
        entry = FUN_02084568(&c);
        if (entry) threshold = entry[4];
    } else if (FUN_0204db98(item, 1)) {
        b = *(Key *)item;
        entry = FUN_020845a8(&b);
        if (entry) threshold = entry[9];
    }
    if (threshold == -1) return 0;
    if (threshold <= (((*(int *)(item + 4) & (int)0xfe000000) >> 25) & 0x7f) && ((*(int *)(item + 8) & 0x1000) >> 12) == 1) {
        return 1;
    }
    return 0;
}
