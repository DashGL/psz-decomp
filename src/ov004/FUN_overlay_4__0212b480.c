// flags: -O4,s
#pragma always_inline on
typedef struct { unsigned char b[4]; } ID;
typedef struct { int x, y; } Pair;
extern int DAT_0212e48c[];
extern void FUN_overlay_4__0212b06c(void *);
extern void FUN_overlay_4__0212b884(void *, char *, int, int);
extern void FUN_020c3788(void *, const void *, int, int, int);
extern void FUN_0209178c(void *);
extern void FUN_02079160(void *, Pair *, int, unsigned short, int, int, int, int, int);
extern int FUN_020849d4(void *);
extern int FUN_02077d98(void *);
extern int FUN_0209ca8c(char *, void *, int);
extern int FUN_overlay_4__0212b664(void *, void *);
extern int FUN_020c3f90(char *, unsigned int, const char *, ...);
extern void *FUN_0208f068(void);
extern void *FUN_02077930(void);
extern void *FUN_02079114(void);
extern const char *FUN_0208efa8(void *, int, int, int);

static inline int is_empty(const ID *k)
{
    unsigned int p = ((unsigned int)k->b[0] << 24) | ((unsigned int)k->b[1] << 16) | ((unsigned int)k->b[2] << 8) | k->b[3];
    return !(p != 0xffffffffU);
}

void FUN_overlay_4__0212b480(char *self, unsigned char *entry)
{
    char name[27];
    char label[20];
    char digits[9];
    ID icon;
    Pair xy;
    ID key;
    ID old;
    int i, same, count;

    key = *(ID *)entry;
    if (is_empty(&key) != 1) {
        old = *(ID *)(self + 76);
        same = (old.b[0] == entry[0] && old.b[1] == entry[1] && old.b[2] == entry[2] && old.b[3] == entry[3]);
        for (i = 0; i < 3; i++) {
            same &= ((int *)(self + 80))[i] == ((int *)(entry + 4))[i];
        }
        if (!same) {
            FUN_overlay_4__0212b06c(self);
        }
        if (entry[0] == 4 && *(unsigned char *)(self + 76) == 4) {
            count = FUN_020849d4(entry);
            if (count != FUN_020849d4(self + 76)) {
                FUN_overlay_4__0212b06c(self);
                *(int *)(self + 68) = 30;
            }
        }
        if (*(int *)(self + 4) == 0) {
            if (entry[0] == 4) {
                void *base = FUN_0208f068();
                if (base) {
                    const char *fmt = FUN_0208efa8(base, FUN_02077d98(FUN_02077930()), 0, 34);
                    if (fmt) {
                        label[0] = 0;
                        digits[0] = 0;
                        FUN_overlay_4__0212b884(self, digits, 9, FUN_020849d4(entry));
                        FUN_020c3f90(label, 20, fmt, digits);
                        FUN_020c3788(*(void **)self, label, 11, 6, 2);
                        *(int *)(self + 4) = 1;
                    }
                }
            } else if (FUN_0209ca8c(name, entry, 0) == 1) {
                FUN_020c3788(*(void **)self, name, 11, 0, 2);
                *(int *)(self + 4) = 1;
            }
        }
        icon = *(ID *)entry;
        if (entry[0] == 4) {
            if (FUN_020849d4(entry) != 0) {
                FUN_0209178c(&icon);
            }
        } else {
            xy = *(const Pair *)(DAT_0212e48c + 7);
            FUN_0209178c(&icon);
            count = FUN_overlay_4__0212b664(self, entry);
            if (count) {
                FUN_02079160(FUN_02079114(), &xy, 2, 1, count, -1, -1, 8, 0);
            }
        }
    } else {
        FUN_overlay_4__0212b06c(self);
    }
}
