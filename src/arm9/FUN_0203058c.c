// flags: -O4,s
enum { E0 = 0, E1 = 1 };
extern void *FUN_02034a70(int);
extern unsigned char *FUN_02030574(void *, unsigned int);
extern void *FUN_020304f8(void *);
extern int FUN_020347b8(void *, void *, void *, void *);
extern void FUN_020348e4(void *, void *);
extern void FUN_02034904(void *, unsigned int);
extern void FUN_02044a98(void *, unsigned int);
extern void FUN_020448d4(void *, int);
extern void FUN_02030d98(void *, int);
extern char *DAT_02108c84;

void FUN_0203058c(char *s, unsigned int index) {
    void *record, *key;
    unsigned char *entry, *old;
    if (index == 255) return;
    record = FUN_02034a70(*(int *)(s + 40));
    entry = FUN_02030574(record, index);
    if (*(void **)(s + 12)) {
        old = FUN_02030574(record, *(unsigned char *)(s + 46));
        key = FUN_020304f8(s);
        if (FUN_020347b8(*(void **)(s + 12), key, old, entry)) {
            FUN_020348e4(*(void **)(s + 12), s + 28);
            FUN_02034904(*(void **)(s + 12), *(unsigned short *)(s + 44));
            if (((entry[5] & 128) == 128) ? E1 : E0) {
                char *m = DAT_02108c84;
                if (m) {
                    char *p = *(char **)(m + 64 + 4 * (*(unsigned int *)(m + 100)));
                    if (p) FUN_02034904(*(void **)(s + 12), *(unsigned short *)(p + 130));
                }
            }
        }
    }
    if (*(void **)(s + 16)) FUN_02044a98(*(void **)(s + 16), entry[5]);
    if (*(void **)(s + 20)) FUN_020448d4(*(void **)(s + 20), (entry[5] & 64) == 64);
    FUN_02030d98(s, (entry[5] & 1) == 1);
    s[46] = index;
}
