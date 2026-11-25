// flags: -O4,p
extern int FUN_020d6ce8(void *, void *, void *);
extern void FUN_020c7540(int, void *, int, int, int, int);
extern void FUN_020d6cb0(void *, void *, int, const unsigned char *, int, const unsigned char *, int, const unsigned char *);

void FUN_020d6ee4(int *arg0, unsigned char *arg1, const unsigned char *arg2, int arg3, int arg4) {
    int buf[70];
    unsigned char flags = 0;
    const unsigned char *p1 = 0;
    const unsigned char *p2 = 0;
    const unsigned char *p3 = 0;
    int len1, len2, len3;

    if (arg3 < 3) {
        return;
    }
    len1 = *arg2++;
    arg3--;
    if (len1 != 0 && len1 != 0xff) {
        p1 = arg2;
        arg2 += len1;
        arg3 -= len1;
    }
    if (arg3 < 2) {
        return;
    }
    len2 = *arg2++;
    arg3--;
    if (len2 != 0 && len2 != 0xff) {
        p2 = arg2;
        arg2 += len2;
        arg3 -= len2;
    }
    if (arg3 < 1) {
        return;
    }
    len3 = *arg2++;
    arg3--;
    if (len3 != 0 && len3 != 0xff) {
        p3 = arg2;
        arg2 += len3;
        arg3 -= len3;
    }
    if (arg3 < 0) {
        return;
    }
    if (arg3 > 0) {
        flags = *arg2;
    }
    if ((flags & 1) == 1) {
        buf[1] = 0;
        buf[0] = 0;
        buf[2] = 0;
        buf[3] = 0;
        buf[4] = 0;
        buf[69] = 0;
        if (FUN_020d6ce8(arg0, arg1, buf) == 1) {
            do {
                FUN_020c7540(*arg0, arg1, *(int *)(arg1 + 0x578), 0, arg4, 8);
                *(int *)(arg1 + 0x578) = 5;
                if (buf[1] > 7) {
                    break;
                }
            } while (FUN_020d6ce8(arg0, arg1, buf) == 1);
        }
    } else {
        FUN_020d6cb0(arg0, arg1, len1, p1, len2, p2, len3, p3);
        FUN_020c7540(*arg0, arg1, *(int *)(arg1 + 0x578), 0, arg4, 8);
    }
}
