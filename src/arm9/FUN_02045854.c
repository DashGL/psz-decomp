// flags: -O4,s
extern void *DAT_02108dd0[4];
extern void *DAT_02108df0[4];
extern int DAT_02108e00[4];
extern unsigned int DAT_02108ed8[4][7];
extern void FUN_020ba8c4(void *);
extern void FUN_02045848(void *);

void FUN_02045854(void) {
    int i, j;
    for (i = 0; i < 4; i++) {
        if (DAT_02108dd0[i]) {
            FUN_020ba8c4(DAT_02108dd0[i]);
            DAT_02108dd0[i] = 0;
        }
        DAT_02108df0[i] = DAT_02108dd0[i];
        FUN_02045848(&DAT_02108e00[i]);
        for (j = 0; j < 7; j++) {
            DAT_02108ed8[i][j] = 0;
        }
    }
}
