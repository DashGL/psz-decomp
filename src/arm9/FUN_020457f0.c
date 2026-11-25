// flags: -O4,s
extern void *DAT_02108dd0[];
extern void *DAT_02108df0[];
extern int DAT_02108e00[];
extern unsigned int DAT_02108ed8[][7];
extern void FUN_02045854(void);
extern void *FUN_020ba8bc(unsigned int, unsigned int);
extern void FUN_02045848(void *);
void FUN_020457f0(void) {
    int i, j;
    FUN_02045854();
    for (i = 0; i < 4; i++) {
        DAT_02108dd0[i] = FUN_020ba8bc(8192, 16);
        DAT_02108df0[i] = DAT_02108dd0[i];
        FUN_02045848(&DAT_02108e00[i]);
        for (j = 0; j < 7; j++) {
            DAT_02108ed8[i][j] = 0;
        }
    }
}
