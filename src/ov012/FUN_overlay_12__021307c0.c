// flags: -O4,s
typedef struct { unsigned int value : 31; unsigned int flag : 1; } EntryWord;
extern void *FUN_overlay_12__02131d80(void *, void *, int), *FUN_020a0ce8(void), *FUN_020c1190(unsigned, int);
#pragma thumb off
extern void FUN_0200c938(void *, unsigned);
#pragma thumb on
extern void FUN_overlay_12__0211f17c(void *), FUN_overlay_12__0212d42c(void *, int), FUN_overlay_12__021308c8(void *);
extern int FUN_overlay_12__02131fd0(void *, int);
extern unsigned char DAT_overlay_12__0213e68c[];

void *FUN_overlay_12__021307c0(unsigned char *self, void *parent)
{
    int i, j, k;
    FUN_overlay_12__02131d80(self, parent, 0);
    *(unsigned *)self = (unsigned)DAT_overlay_12__0213e68c;
    *(int *)(self + 64) = 0;
    *(int *)(self + 68) = -1;
    *(int *)(self + 72) = 0;
    FUN_0200c938(self + 76, 48);
    *(int *)(self + 124) = 0;
    *(int *)(self + 128) = 0;
    FUN_overlay_12__0211f17c(self + 132);
    *(int *)(self + 148) = 1;
    for (i = 0; i < 12; i++) {
        unsigned char *entry = (unsigned char *)FUN_020a0ce8() + 604 + 60 * i;
        for (j = 9; j >= 0; j--) {
            EntryWord *words = (EntryWord *)entry;
            unsigned flg = (words[j].flag != 0);
            if (!flg && ((volatile EntryWord *)words)[j].value != 0 && !FUN_020c1190(*(unsigned short *)(entry + 40 + 2 * j), 0)) {
                for (k = j; k < 10; k++) {
                    if (k == 9) FUN_overlay_12__0212d42c(entry, 9);
                    else {
                        *(int *)(entry + 4 * k) = *(int *)(entry + 4 * k + 4);
                        *(unsigned short *)(entry + 40 + 2 * k) = *(unsigned short *)(entry + 42 + 2 * k);
                    }
                }
            }
        }
    }
    FUN_overlay_12__021308c8(self);
    FUN_overlay_12__02131fd0(self, 1);
    return self;
}
