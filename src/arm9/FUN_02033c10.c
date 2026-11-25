// flags: -O4,s
typedef struct {
    int pad[3];
    unsigned int flags;
} Guard_02033c10;
extern Guard_02033c10 DAT_02108c74;
extern char DAT_02108cd0[];
extern char DAT_02108ca0[];
extern void FUN_02033904(void *);
extern void FUN_02033948(void *);
#pragma thumb off
extern void FUN_0200c594(void *, void (*)(void *), void *);
#pragma thumb on
void *FUN_02033c10(char *s, unsigned int id) {
    if (!(DAT_02108c74.flags & 1)) {
        FUN_02033904(DAT_02108cd0);
        FUN_0200c594(DAT_02108cd0, FUN_02033948, DAT_02108ca0);
        DAT_02108c74.flags |= 1;
    }
    if (*(void **)(s + 4) && id < *(unsigned short *)(s + 16) && id != 65535) {
        return *(char **)(s + 4) + 28 * id;
    }
    return DAT_02108cd0;
}
