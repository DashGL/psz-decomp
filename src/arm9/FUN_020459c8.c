// flags: -O4,s
extern void *DAT_02108de0[];
extern void *DAT_02108e10[];
extern int DAT_02108e74[4][2];
extern unsigned int DAT_02108fdc[4][7][2];
extern void FUN_02045a38(void);
extern void *FUN_020ba8bc(unsigned int, unsigned int);
extern void FUN_02045848(void *);

void FUN_020459c8(void) {
    int i, j, m, k;
    FUN_02045a38();
    for (i = 0; i < 4; i++) {
        DAT_02108de0[i] = FUN_020ba8bc(11520, 16);
        DAT_02108e10[i] = DAT_02108de0[i];
        for (j = 0; j < 2; j++) {
            FUN_02045848(&DAT_02108e74[i][j]);
        }
        for (m = 0; m < 7; m++) {
            for (k = 0; k < 2; k++) {
                DAT_02108fdc[i][m][k] = 0;
            }
        }
    }
}
