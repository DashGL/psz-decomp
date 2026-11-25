// flags: -O4,s
typedef struct {
    unsigned int a;
    unsigned int b;
} Pair;

extern char *DAT_02108c64;
extern const char DAT_020f93a0[];
extern const int DAT_020ed6d4[];
extern int FUN_0206d0f8(void *);
extern int FUN_0206d248(signed char *, int);
#pragma thumb off
extern int FUN_020038ec(void *, unsigned int, const char *, ...);
#pragma thumb on
extern void FUN_02050148(void *, void *, int);
extern void FUN_02050948(void *, void *, int, int);
extern unsigned short *FUN_020508ec(void *, void *);

void FUN_02050624(char *s) {
    char path[64];
    Pair pair;
    signed char key[3];
    signed char letter;
    unsigned int number;
    unsigned short *record;
    int i;
    volatile Pair *gp = (volatile Pair *)(DAT_02108c64 + 0x38);

    pair.a = gp->a;
    pair.b = gp->b;
    if (!FUN_0206d0f8(&pair)) {
        number = pair.a;
        letter = 0;
        if (FUN_0206d248(&letter, pair.b)) {
            FUN_020038ec(path, 64, DAT_020f93a0, number, number, (int)letter);
            FUN_02050148(s, path, 0);
            for (i = 0; i < 5; i++) {
                FUN_02050948(key, s, DAT_020ed6d4[i], 0);
                record = FUN_020508ec(s, key);
                if (record) {
                    *(unsigned short *)(s + 72 + 2 * i) = *record;
                }
            }
        }
    }
}
