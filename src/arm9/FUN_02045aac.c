// flags: -O4,s
extern unsigned char DAT_02108e74[];
extern void *DAT_02108de0[];
extern void *DAT_02108e10[];
extern unsigned int DAT_02108fdc[][7][2];
extern int FUN_02078188(int);
extern int FUN_020458f8(void *, void *);
extern void FUN_02045848(void *);
void FUN_02045aac(int id, void *src) {
    if (FUN_02078188(id)) {
        unsigned char *p = DAT_02108e74 + 8 * id;
        if (!FUN_020458f8(src, p)) {
            int i, j;
            DAT_02108e10[id] = DAT_02108de0[id];
            for (i = 0; i < 2; i++) FUN_02045848(p + 4 * i);
            for (i = 0; i < 7; i++)
                for (j = 0; j < 2; j++)
                    DAT_02108fdc[id][i][j] = 0;
        }
    }
}
