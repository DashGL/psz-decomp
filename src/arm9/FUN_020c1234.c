// flags: -O4,p
#pragma opt_propagation off
extern int DAT_020fca28[];
extern int data_020fca28[];
extern unsigned char DAT_0211b404[];
extern unsigned char DAT_0211b3ec[];
extern int FUN_020c4848(void);
extern int FUN_020dd7cc(void *);
extern void FUN_020dd7e4(void *);
extern int FUN_020c4870(int, void *, int *);

int FUN_020c1234(void) {
    DAT_020fca28[0] = -1;
    DAT_020fca28[1] = -1;
    if (FUN_020c4848()) {
        unsigned char *p = DAT_0211b404;
        if (FUN_020dd7cc(p) == 1) {
            FUN_020dd7e4(p);
        }
        if (!FUN_020c4870(0, DAT_0211b3ec, &data_020fca28[0])) {
            if (FUN_020c4870(1, DAT_0211b3ec, &data_020fca28[1])) {
                return 1;
            }
        } else {
            return 1;
        }
    }
    return 0;
}
