// flags: -O4,s
extern unsigned DAT_overlay_17__02126bac, DAT_overlay_17__021253dc[];
extern const char *DAT_overlay_17__021253f4[];
extern int FUN_020c3f34(const char *, const char *, unsigned), FUN_020870e8(void *, void *);
extern void *FUN_020c4434(void *), *FUN_020c4450(void *, const void *), *FUN_02086e3c(void);
extern char *FUN_020c3f00(char *, const char *, unsigned);

int FUN_overlay_17__021224d4(void *unused, char *out, unsigned limit, const char *input)
{
    unsigned player[25];
    char tag[16], name[16];
    int i, kind;
    const char *text;
    if (!input || !out) return -1;
    if (*input != '<') return -1;
    for (i = 0; i < 16; i++) {
        if (input[i + 1] == '>') { tag[i] = 0; break; }
        tag[i] = input[i + 1];
    }
    tag[15] = 0;
    kind = -1;
    {
        unsigned g = DAT_overlay_17__02126bac;
        if (!(g & 1)) {
            ((volatile unsigned *)DAT_overlay_17__021253dc)[6] = DAT_overlay_17__021253dc[4];
            ((volatile unsigned *)DAT_overlay_17__021253dc)[7] = DAT_overlay_17__021253dc[5];
            *(volatile unsigned *)&DAT_overlay_17__02126bac = g | 1;
        }
    }
    for (i = 0; i < 2; i++) {
        if (!FUN_020c3f34(DAT_overlay_17__021253f4[i], tag, 16)) { kind = i; break; }
    }
    switch (kind) {
    case 0:
        FUN_020c4434(player);
        FUN_020c4434(player + 4);
        if (FUN_020870e8(FUN_02086e3c(), player) == 1) {
            FUN_020c4450(name, player);
            text = name + 2;
            if (text && *text) { FUN_020c3f00(out, text, limit); break; }
        }
        FUN_020c3f00(out, (const char *)DAT_overlay_17__021253dc[3], limit);
        break;
    case 1:
        break;
    }
    return kind;
}
