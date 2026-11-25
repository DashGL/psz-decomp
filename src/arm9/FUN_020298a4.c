// flags: -O4,p -noThumb

extern int FUN_02029894(unsigned char, unsigned char);
extern int FUN_02029834(void *, int, int);
extern void FUN_02065774(void *, void *, int);
extern void FUN_020656b8(void *, int, int);

void FUN_020298a4(void *a0, unsigned char *a1) {

    int off, r4, r3, r5;
    unsigned short r0;
    if (FUN_02029894(a1[0], a1[1]) == 0) return;
    r4 = (a1[2] << 8) + a1[3];
    r0 = (unsigned short)FUN_02029834(a1 + 8, r4 / 3, 3);
    if (r0 == 0) return;
    *(unsigned short *)((char *)a0 + 0x32) = r0;
    r3 = (a1[4] << 8) + a1[5];
    r5 = (a1[6] << 8) + a1[7];
    *((unsigned char *)a0 + 0x30) = 0;
    off = 8 + r4 + r3;
    if (r5 >= 0x20) {
        FUN_02065774(a1 + off, (char *)a0 + 0x34, 0x20);
    } else {
        FUN_020656b8((char *)a0 + 0x34, 0, 0x20 - r5);
        FUN_02065774(a1 + off, ((char *)a0 + 0x54) - r5, r5);
    }
    *((unsigned char *)a0 + 0x455) = 1;

}

