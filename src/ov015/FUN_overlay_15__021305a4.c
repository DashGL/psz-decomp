// flags: -O4,s
extern unsigned char DAT_0213e8a0;
extern char DAT_0212830d;
extern char DAT_021304fd;
extern void FUN_overlay_15__02127e24(int *, int *);
extern int FUN_overlay_15__02127e4c(void);
extern void FUN_overlay_15__02127de4(void *);
void FUN_overlay_15__021305a4(void) {
    int value;
    DAT_0213e8a0++;
    if (DAT_0213e8a0 >= 180) {
        FUN_overlay_15__02127e24(0, &value);
        switch (FUN_overlay_15__02127e4c()) {
        case 0:
            break;
        case 1:
            if (value) {
                FUN_overlay_15__02127de4(&DAT_0212830d);
                return;
            }
            break;
        }
        FUN_overlay_15__02127de4(&DAT_021304fd);
    }
}
