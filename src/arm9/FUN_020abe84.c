// flags: -O4,s
extern int FUN_0203b41c(void *);
extern int FUN_0203ae60(void *);
extern int FUN_02077d50(void *);
extern void *FUN_02077930(void);
extern void FUN_02052668(void *, int, int, int);
extern void FUN_02052878(void *, void *, int);
extern void FUN_020aae80(void *, int, int);

typedef struct {
    unsigned char pad0[180];
    unsigned char pos[12];
    unsigned short rot;
    unsigned char pad1[572 - 194];
    int mode_override;
    int state;
    unsigned char pad2[664 - 580];
    char *parts[4];
    unsigned char pad3[1976 - 680];
    int tbl_a[2][4];
    unsigned short tbl_b[2][4];
    unsigned char tbl_c[2][4];
} Actor;

void FUN_020abe84(Actor *s) {
    int i, j, mode;
    char *part;

    if (FUN_0203b41c(s) || FUN_0203ae60(s)) {
        for (i = 0; i < 4; i++) {
            part = s->parts[i];
            if (part)
                *(int *)(part + 4) |= 1;
        }
    } else {
        for (i = 0; i < 4; i++) {
            part = s->parts[i];
            if (part) {
                *(int *)(part + 4) &= ~1;
                if (i < 3) {
                    mode = FUN_02077d50(FUN_02077930());
                    if ((unsigned)(s->state - 9) <= 3 && (unsigned)s->mode_override <= 1)
                        mode = s->mode_override;
                    FUN_02052668(s->parts[i], s->tbl_a[mode][i], s->tbl_b[mode][i], s->tbl_c[mode][i]);
                }
                FUN_02052878(s->parts[i], s->pos, s->rot);
            }
        }
        for (i = 0; i < 2; i++)
            for (j = 0; j < 3; j++)
                FUN_020aae80(s, i, j);
    }
}
