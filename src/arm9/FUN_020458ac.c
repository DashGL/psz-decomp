// flags: -O4,s
extern int FUN_020458f8(void *, void *);
extern void FUN_02045848(void *);
extern unsigned int DAT_02108dd0[];
extern unsigned int DAT_02108df0[];
extern unsigned int DAT_02108e00[];
extern unsigned int DAT_02108ed8[][7];
void FUN_020458ac(int id, void *src) {
    if (FUN_020458f8(src, &DAT_02108e00[id]) == 0) {
        int i;
        DAT_02108df0[id] = DAT_02108dd0[id];
        FUN_02045848(&DAT_02108e00[id]);
        for (i = 0; i < 7; i++) {
            DAT_02108ed8[id][i] = 0;
        }
    }
}
