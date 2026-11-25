// flags: -O4,s
extern int data_02197f28[];
extern const char *data_0212eaf4, *data_0212eaf8[];
extern char data_0212eb78[];
extern const char data_0212eb98[], data_0212eba4[];
extern void FUN_overlay_4__0212a9bc(void *, int);
extern void FUN_02041bcc(void *, const void *);
extern void FUN_020656b8(void *, int, unsigned int);
extern int FUN_0206d1fc(const int *);
extern int FUN_0206d2e4(const int *, void *);
extern int FUN_0206d36c(const int *, int *);
extern int FUN_0206d248(signed char *, int);
extern int FUN_020662b4(void *, unsigned int, const char *, ...);

void FUN_overlay_4__02129c00(void *self, const int *input) {
    int record[5];
    signed char text[12];
    int *p;
    int kind;
    FUN_overlay_4__0212a9bc(self, 3);
    if (FUN_0206d1fc(input)) {
        FUN_02041bcc(record, input);
        data_02197f28[1] = 1;
        p = record;
        FUN_020656b8(data_0212eb78, 0, 31);
        FUN_0206d2e4(p, text + 1);
        if (FUN_0206d36c(p, 0) || p[3] == 4)
            kind = 0;
        else
            kind = p[0];
        text[0] = '0';
        if (FUN_0206d248(text, p[1]))
            FUN_020662b4(data_0212eb78, 31, data_0212eb98, data_0212eaf4, data_0212eaf8[kind], (int)text[0], data_0212eba4, text + 1);
    }
}
