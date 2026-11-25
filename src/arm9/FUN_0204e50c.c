// flags: -O4,s
enum { E0 = 0, E1 = 1 };
typedef struct { unsigned char b[14]; } Rec14;
typedef struct { unsigned char b[6]; } Dat6;
extern char *DAT_02108d04;
extern unsigned char *FUN_02084778(int, int);
extern char *FUN_0208555c(int);
extern int FUN_0204e738(int, int, unsigned int);
#pragma thumb off
extern void FUN_0200c938(void *, unsigned int);
#pragma thumb on
extern int FUN_020855bc(int);
extern void *FUN_0204e5f4(void *, void *);
extern int FUN_0203ae60(void *);
extern void FUN_0204e608(int, int, int, int);
extern void FUN_0204e438(int, int, int);

void FUN_0204e50c(int source, int arg) {
    Rec14 record;
    Dat6 data;
    unsigned int state[2];
    int enabled;
    unsigned int radius;
    int i;
    record = *(Rec14 *)FUN_02084778(5, arg);
    data = *(Dat6 *)(record.b + 6);
    radius = (unsigned int)data.b[2] << 12;
    if (FUN_0208555c(source)) {
        for (i = 0; i <= 3; i++) {
            if (FUN_0204e738(source, i, radius)) {
                char *obj;
                enabled = 0;
                FUN_0200c938(state, 8);
                if ((FUN_020855bc(i) == 1) ? E1 : E0) {
                    obj = DAT_02108d04;
                    if (obj) {
                        FUN_0204e5f4(state, obj + 334);
                        if (FUN_0203ae60(obj)) enabled = 1;
                    }
                } else {
                    obj = FUN_0208555c(i);
                    if (obj) {
                        FUN_0204e5f4(state, obj + 334);
                        if (FUN_0203ae60(obj)) enabled = 1;
                    }
                }
                if (enabled) FUN_0204e608(source, i, arg, 39);
                else FUN_0204e438(source, i, arg);
            }
        }
    }
}
