// flags: -O4,s
extern int FUN_overlay_15__021212fc(void);
#pragma thumb off
extern int FUN_02066fc8(void *, int *, int);
#pragma thumb on
extern int DAT_0213d0c0;
int FUN_overlay_15__02120ad0(void) {
    int result = -1;
    if (FUN_overlay_15__021212fc()) {
        int cont = 1;
        do {
            int message;
            FUN_02066fc8(&DAT_0213d0c0, &message, 1);
            if (message == 14) {
                cont = 0;
                result = 0;
            } else {
                cont = 0;
            }
        } while (cont);
    }
    return result;
}
