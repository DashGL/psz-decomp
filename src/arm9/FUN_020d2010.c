// flags: -O4,p
#pragma opt_common_subs off
extern int FUN_020d21ac(int);
extern void *FUN_020c7bdc(void *, int);
extern int FUN_020c74fc(int, char *, int, int);
extern void FUN_020d1fb0(void);
extern int FUN_020d24d0(char *, int);
#pragma thumb off
extern void FUN_020014f4(char *, char *, int);
#pragma thumb on
extern int DAT_020fe694[];
extern int DAT_0211d094[];

int FUN_020d2010(void) {
    if (DAT_020fe694[2] == -1) {
        return 0;
    }
    if (DAT_0211d094[11] != 5) {
        return 0;
    }
    while (FUN_020d21ac(DAT_020fe694[2]) != 0) {
        int r0;
        int r5;
        int pos;
        if (DAT_0211d094[5] - DAT_0211d094[3] < 0x80) {
            if (DAT_0211d094[5] < 0x100) {
                DAT_0211d094[5] = 0x100;
            } else {
                DAT_0211d094[5] = DAT_0211d094[5] << 1;
            }
            DAT_0211d094[10] = (int)FUN_020c7bdc((void *)DAT_0211d094[10], DAT_0211d094[5] + 1);
            if (DAT_0211d094[10] == 0) {
                return 0;
            }
        }
        pos = DAT_0211d094[3];
        r0 = FUN_020c74fc(((volatile int *)DAT_020fe694)[2], (char *)DAT_0211d094[10] + pos, DAT_0211d094[5] - pos, 0);
        if (r0 <= 0) {
            FUN_020d1fb0();
            return 0;
        }
        DAT_0211d094[3] += r0;
        *((char *)DAT_0211d094[10] + DAT_0211d094[3]) = 0;
        r5 = FUN_020d24d0((char *)DAT_0211d094[10], DAT_0211d094[3]);
        if (r5 == DAT_0211d094[3]) {
            DAT_0211d094[3] = 0;
        } else {
            FUN_020014f4((char *)DAT_0211d094[10], (char *)DAT_0211d094[10] + r5, DAT_0211d094[3] - r5);
            DAT_0211d094[3] -= r5;
        }
    }
    if (DAT_020fe694[2] == -1) {
        return 0;
    }
    return 1;
}
