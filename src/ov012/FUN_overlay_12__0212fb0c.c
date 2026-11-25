// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xfc, exact bytes and relocation targets.
// flags: -O4,s
extern char *FUN_020a0ce8(void);
extern int FUN_020a1320(void *, int);
extern void FUN_overlay_12__0211f870(void *, int, int, int);
extern void FUN_020ba8b4(void *);
extern void *FUN_020ba8a0(unsigned int);
extern void FUN_0200c938(void *, int);
extern int FUN_overlay_12__0212d354(const void *, const void *);
extern void FUN_02045990(void *, const void *);

void FUN_overlay_12__0212fb0c(int *self)
{
    char *tbl = FUN_020a0ce8() + 0x24;
    int cat = self[37] + 1;

    self[19] = FUN_020a1320(tbl, cat);
    FUN_overlay_12__0211f870(self + 42, self[19], 5, 0);
    self[17] = 1;
    self[47] = 1;
    if (self[39]) {
        FUN_020ba8b4((void *)self[39]);
        self[39] = 0;
    }
    self[39] = (int)FUN_020ba8a0(self[19] << 2);
    if (self[39]) {
        unsigned char key[4];
        int count = 0;

        FUN_0200c938(key, 4);
        key[1] = cat;
        if (self[37] == 16) {
            int g;

            for (g = 0; g < 64 && g < 33 && count < self[19]; g++) {
                key[3] = g;
                if (FUN_overlay_12__0212d354(tbl, key)) {
                    FUN_02045990((void *)(self[39] + (count << 2)), key);
                    count++;
                }
            }
        } else {
            int sub, idx;

            for (sub = 0; sub < 4; sub++) {
                key[3] = sub;
                for (idx = 0; idx < 24 && count < self[19]; idx++) {
                    key[2] = idx;
                    if (FUN_overlay_12__0212d354(tbl, key)) {
                        FUN_02045990((void *)(self[39] + (count << 2)), key);
                        count++;
                    }
                }
            }
        }
    }
}
