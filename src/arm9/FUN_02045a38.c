// flags: -O4,s
extern void FUN_020ba8c4(void *);
extern void FUN_02045848(void *);
extern void *DAT_02108de0[4];
extern void *DAT_02108e10[4];
extern unsigned int DAT_02108e74[4][2];
extern unsigned int DAT_02108fdc[4][7][2];
void FUN_02045a38(void) {
    int i;
    for (i = 0; i < 4; i++) {
        int j;
        if (DAT_02108de0[i] != 0) {
            FUN_020ba8c4(DAT_02108de0[i]);
            DAT_02108de0[i] = 0;
        }
        DAT_02108e10[i] = DAT_02108de0[i];
        for (j = 0; j < 2; j++) {
            FUN_02045848(&DAT_02108e74[i][j]);
        }
        {
            int a, b;
            for (a = 0; a < 7; a++) {
                for (b = 0; b < 2; b++) {
                    DAT_02108fdc[i][a][b] = 0;
                }
            }
        }
    }
}
