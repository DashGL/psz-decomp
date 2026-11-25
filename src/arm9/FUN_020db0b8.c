// flags: -O4,p
extern void FUN_020db154(unsigned char, const unsigned char *, int, void *);
extern void FUN_020db19c(int, const unsigned char *, int, void *);

int FUN_020db0b8(int param_1, const unsigned char *param_2, int param_3, void *param_4) {
    int found;
    unsigned char count;
    int i;
    found = -1;
    i = 0;
    count = *(unsigned char *)((char *)param_4 + 0xd12);
    if ((int)count > 0) {
        const unsigned char *p = (const unsigned char *)param_4 + 0x474;
        do {
            if (param_2[4] == p[0] &&
                param_2[5] == p[1] &&
                param_2[6] == p[2] &&
                param_2[7] == p[3] &&
                param_2[8] == p[4] &&
                param_2[9] == p[5]) {
                found = i;
                break;
            }
            i++;
            p += 0xc0;
        } while (i < count);
    }
    if (found == -1) {
        FUN_020db154((unsigned char)param_1, param_2, param_3, param_4);
        if (*(unsigned char *)((char *)param_4 + 0xd12) < 10) {
            *(unsigned char *)((char *)param_4 + 0xd12) += 1;
        }
        found = 10;
    } else {
        FUN_020db19c(found, param_2, param_3, param_4);
    }
    return found;
}
