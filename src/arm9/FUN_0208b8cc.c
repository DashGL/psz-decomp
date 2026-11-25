// flags: -O4,s
extern void *DAT_02108d04, *DAT_02108c64;
extern int FUN_0203ae60(void *), FUN_0208b7d0(void *, void *), FUN_0204db98(void *, int), FUN_0208b8a0(void *, int), FUN_02032d40(void *), FUN_020703e8(void *, void *, int);
int FUN_0208b8cc(void *s, unsigned char *item) {
    if (DAT_02108d04 && FUN_0203ae60(DAT_02108d04)) return 0;
    if (!FUN_0208b7d0(s, item)) return 0;
    if (FUN_0204db98(item, 3)) {
        switch (item[1]) {
        case 3:
        case 6:
            return 0;
        case 0:
            if (FUN_0208b8a0(item, 11)) return FUN_02032d40(DAT_02108c64);
            break;
        }
        if (DAT_02108d04) return FUN_020703e8(DAT_02108d04, item, 1);
        return 1;
    }
    return 0;
}
