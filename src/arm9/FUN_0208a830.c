// flags: -O4,s
typedef struct { unsigned char b[4]; } Key4;
typedef struct { unsigned char b[14]; } Req14;
typedef struct { unsigned short rank : 5; } DefHdr;

extern int UNK_020f3e04[];
extern DefHdr *FUN_02084638(Key4 *);
extern Req14 *FUN_02084778(int, int);
extern unsigned char *FUN_020870c4(void *);
extern void *FUN_0209e180(Key4 *, int);
extern void *FUN_02086e3c(void);
extern int FUN_02087138(void *);
extern int FUN_02079114(void);
extern int FUN_02084944(Key4 *);
extern void FUN_020c3788(void *, void *, int, int, int);
extern void FUN_020c331c(int, int, int, int);
extern void FUN_02079160(int, void *, unsigned short, int, int, int, int, int, int);
extern void FUN_0208b2a4(void *);
extern void FUN_0208b3e4(void *, int);

void FUN_0208a830(char *s)
{
    Req14 requirement;
    int pos[2];
    int pricepos[2];
    Key4 key;
    Key4 key0;
    Key4 key2;
    Key4 key1;
    Key4 key5;
    Key4 key34;
    Key4 pricekey;
    DefHdr *definition;
    unsigned char *player;
    void *text;
    int font;
    int color;

    key = *(Key4 *)s;
    definition = FUN_02084638(&key);
    if (!definition) {
        return;
    }

    switch ((unsigned char)s[1]) {
    case 0:
        if (!*(int *)(s + 56)) {
            key0 = *(Key4 *)s;
            text = FUN_0209e180(&key0, 0);
            if (text) {
                FUN_020c3788(*(void **)(s + 48), text, 0, 0, 2);
                *(int *)(s + 56) = 1;
            }
        }
        break;
    case 2:
        FUN_020c331c(52, 720896, 1028096, *(int *)(s + 32));
        if (!*(int *)(s + 56)) {
            key2 = *(Key4 *)s;
            text = FUN_0209e180(&key2, 0);
            if (text) {
                FUN_020c3788(*(void **)(s + 52), text, 72, 12, 2);
                *(int *)(s + 56) = 1;
            }
        }
        break;
    case 1:
        FUN_020c331c(59, 720896, 1028096, *(int *)(s + 32));
        if (!*(int *)(s + 56)) {
            key1 = *(Key4 *)s;
            text = FUN_0209e180(&key1, 0);
            if (text) {
                FUN_020c3788(*(void **)(s + 52), text, 72, 12, 2);
                *(int *)(s + 56) = 1;
            }
        }
        FUN_020c331c(69, 720896, 1368064, *(int *)(s + 32));
        FUN_020c331c(33, 720896, 1368064, *(int *)(s + 32));
        if (FUN_02087138(FUN_02086e3c())) {
            player = FUN_020870c4(FUN_02086e3c());
            font = FUN_02079114();
            if (font && *(int *)(s + 92)) {
                requirement = *FUN_02084778((unsigned char)s[2], (*(int *)(s + 4) & 0x3fc000) >> 14);
                if ((int)player[86] >= (int)requirement.b[12]) {
                    color = 2;
                } else {
                    color = 4;
                }
                pos[0] = 917504;
                pos[1] = 1368064;
                FUN_02079160(font, pos, (unsigned short)color, 3, requirement.b[12], -1, -1, 8, 0);
            }
        }
        FUN_0208b2a4(s);
        break;
    case 5:
        FUN_020c331c(60, 720896, 1028096, *(int *)(s + 32));
        if (!*(int *)(s + 56)) {
            key5 = *(Key4 *)s;
            text = FUN_0209e180(&key5, 0);
            if (text) {
                FUN_020c3788(*(void **)(s + 52), text, 72, 12, 2);
                *(int *)(s + 56) = 1;
            }
        }
        break;
    case 3:
    case 4:
        if (!*(int *)(s + 56)) {
            key34 = *(Key4 *)s;
            text = FUN_0209e180(&key34, 0);
            if (text) {
                FUN_020c3788(*(void **)(s + 48), text, 72, 0, 2);
                *(int *)(s + 56) = 1;
            }
        }
        break;
    case 6:
        break;
    }

    if ((unsigned char)s[1] != 1) {
        FUN_020c331c(95, 720896, 1421312, *(int *)(s + 32));
        font = FUN_02079114();
        pricepos[0] = UNK_020f3e04[19];
        pricepos[1] = UNK_020f3e04[20];
        if (font) {
            pricekey = *(Key4 *)s;
            FUN_02079160(font, pricepos, 2, 2, FUN_02084944(&pricekey), -1, -1, 8, 0);
        }
    }

    FUN_0208b3e4(s, definition->rank + 1);
}
