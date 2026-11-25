// flags: -O4,s
typedef struct {
    const unsigned int *words;
    unsigned int index;
} View;

#pragma thumb off
extern void FUN_02001540(void *, int, unsigned int);
#pragma thumb on
extern void FUN_overlay_12__0211ee60(unsigned int *, unsigned int *, const unsigned int *);
extern unsigned int *FUN_overlay_12__0211edb8(unsigned int *, unsigned int, int);
extern int FUN_overlay_12__0211ee00(const View *);
extern char DAT_0213ec60[];
extern const unsigned int DAT_0213d218;
extern const unsigned int DAT_0213d21c;
extern const signed char DAT_02137b48[];

char *FUN_overlay_12__0211ece8(void *unused, const unsigned char *src, int len)
{
    unsigned int words[9];
    char *out;
    unsigned int bit_idx;
    int i, j;

    FUN_02001540(DAT_0213ec60, 0, 0x22);
    out = DAT_0213ec60;
    FUN_overlay_12__0211ee60(words, words + 9, &DAT_0213d218);
    FUN_overlay_12__0211ee60(words, words + 9, &DAT_0213d21c);
    if (!src || len != 0x21) {
        return 0;
    }
    bit_idx = 0;
    for (i = 0; i < len; i++, src++) {
        for (j = 0; j < 8; j++) {
            unsigned char mask = 0x80 >> j;
            if (mask & *src) {
                FUN_overlay_12__0211edb8(words, bit_idx, 1);
            }
            if (++bit_idx >= 0x102u) {
                break;
            }
        }
    }
    {
        int pos = 0;
        for (i = 0; i < 0x2b; i++) {
            int val = 0;
            for (j = 0; j < 6; j++, pos++) {
                View v;
                v.words = words;
                v.index = pos;
                if (FUN_overlay_12__0211ee00(&v)) {
                    val |= 1 << (5 - j);
                }
            }
            *out++ = DAT_02137b48[val];
        }
    }
    if (DAT_0213ec60 != out) {
        return DAT_0213ec60;
    }
    return 0;
}
