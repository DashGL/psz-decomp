// flags: -O4,s
typedef struct { short glyph, a, b, pad; int x, y; } Draw;
extern int FUN_0203a820(void *, int), FUN_0203a1a8(void *, int), FUN_overlay_12__0213233c(void *, int), FUN_overlay_12__02134020(void *), FUN_0209ca8c(char *, void *, int), FUN_020c3f90(char *, unsigned, const char *, ...);
extern void *FUN_02086e3c(void);
extern unsigned char *FUN_020870c4(void *);
extern void FUN_020c38f0(void *, int), FUN_020c3788(void *, const char *, int, int, int), FUN_0203955c(void *), FUN_02071d0c(void *), FUN_02090b44(void *), FUN_020c32b4(void *, int);

void FUN_overlay_12__02133d48(int *self)
{
    unsigned char *item = (unsigned char *)(self + 79);
    int learned, state, i;
    unsigned copy[4];
    char name[28], text[32];
    Draw draw;
    if (!self[93]) return;
    if (FUN_0203a820(item, 3) && FUN_0203a1a8(item, 1)) {
        unsigned char *tbl = FUN_020870c4(FUN_02086e3c()) + 0x2c;
        learned = *(tbl + item[2] + 0x2b);
        if (FUN_overlay_12__0213233c(item, ((int)(self[80] & 0x3fc000)) >> 14)) state = 0;
        else if (!FUN_overlay_12__02134020(self + 79)) state = 2;
        else if (learned > 0) state = 0;
        else state = 1;
        if (self[83] != state || (self[85] && state == 0)) {
            FUN_020c38f0(self + 34, 0);
            self[83] = state;
            switch (state) {
            case 1:
            case 2:
                FUN_020c3788(self + 34, ((const char *(*)(int))self[93])(state), 0, 0, 2);
                break;
            case 0:
                FUN_0203955c(copy);
                ((unsigned char *)copy)[0] = item[0];
                ((unsigned char *)copy)[1] = item[1];
                ((unsigned char *)copy)[2] = item[2];
                ((unsigned char *)copy)[3] = item[3];
                copy[1] = (copy[1] & 0xffc03fffu) | ((unsigned)learned << 14);
                if (!FUN_0209ca8c(name, copy, 1)) name[0] = 0;
                FUN_020c3f90(text, 32, ((const char *(*)(int))self[93])(0), name);
                FUN_020c3788(self + 34, text, 0, 0, 2);
                break;
            }
        }
        FUN_02071d0c(&draw);
        FUN_02090b44(&draw);
        draw.x = 128 << 12;
        draw.y = 288 << 12;
        draw.glyph = 2;
        FUN_020c32b4(&draw, self[17]);
    } else if (self[83] != -1) {
        FUN_020c38f0(self + 34, 0);
        self[83] = -1;
    }
}
