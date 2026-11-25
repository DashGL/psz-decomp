// flags: -O4,s
#pragma thumb off
extern void FUN_0200c938(void *, unsigned int);
#pragma thumb on
extern void FUN_0204c6c4(void *, int);
extern void FUN_0204c7ac(void *);
extern int FUN_0204fbb4(void *);
extern int FUN_0204fbd0(void *);

void FUN_020b5a50(void *unused, int mode, char *s) {
    void *entries[2];
    int i;
    FUN_0200c938(entries, 8);
    if (FUN_0204fbb4(s)) entries[0] = *(void **)(s + 20);
    if (FUN_0204fbd0(s)) entries[1] = *(void **)(s + 24);
    for (i = 0; i < 2; i++) {
        if (entries[i]) {
            switch (mode) {
            case 0:
                FUN_0204c6c4(entries[i], 0);
                break;
            case 1:
                FUN_0204c6c4(entries[i], 1);
                break;
            case 2:
                FUN_0204c7ac(entries[i]);
                break;
            }
        }
    }
}
