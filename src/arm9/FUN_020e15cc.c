// flags: -O4,p
extern unsigned char *DAT_0211dcbc;
extern unsigned int DAT_0211dcc4[];
extern unsigned char *FUN_020d377c(unsigned int);
unsigned int FUN_020e15cc(unsigned int id) {
    int i;
    unsigned int *p;
    if (!DAT_0211dcbc) return 0;
    for (i = 0, p = DAT_0211dcc4; i < 32; i++, p++) {
        if (*p && id == FUN_020d377c(*p)[1]) {
            return DAT_0211dcc4[i];
        }
    }
    return 0;
}
