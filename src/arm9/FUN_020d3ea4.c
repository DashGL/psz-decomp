// flags: -O4,p
extern int FUN_020d3828(void *);
extern unsigned short FUN_020d37a4(unsigned char *, int);
extern int FUN_020d3850(void *, int);
extern void FUN_020d3e84(void *);
extern int FUN_020d3c24(void *, int, unsigned char *, int);
extern int FUN_020d3e34(void *);
extern short FUN_020d37c8(int, int);
extern int FUN_020d3cc8(void *, int, int, unsigned char *, int, int *);
extern int FUN_020d3834(void *);

int FUN_020d3ea4(int *arg0, int arg1, unsigned char *arg2, int arg3) {
    int hdr_off = *(int *)(arg0[2] + 0x44);
    int full_hdr = hdr_off + 7;
    int seq;
    int sub_seq;
    int flag;

    if (arg3 < full_hdr) {
        return FUN_020d3828(arg0) ? 1 : 0;
    }
    seq = FUN_020d37a4(arg2 + hdr_off, 3);
    sub_seq = FUN_020d37a4(arg2 + *(int *)(arg0[2] + 0x44), 5);
    if (*(int *)(arg0[2] + 0x40) == 2 && arg1 == 0) {
        arg2[*(int *)(arg0[2] + 0x44) + 5] = arg2[0];
        arg2[*(int *)(arg0[2] + 0x44) + 6] = arg2[1];
        {
            int d = full_hdr - *(int *)(arg0[2] + 0x44);
            arg2 += d;
            arg3 -= d;
        }
    } else {
        arg2 += full_hdr;
        arg3 -= full_hdr;
    }
    if (!FUN_020d3850(arg0, sub_seq)) {
        return 0;
    }
    if (seq == *((unsigned short *)arg0 + 0x33)) {
        FUN_020d3e84(arg0);
        if (!FUN_020d3c24(arg0, arg1, arg2, arg3)) {
            return 0;
        }
        return FUN_020d3e34(arg0) ? 1 : 0;
    }
    if (FUN_020d37c8(seq, *((unsigned short *)arg0 + 0x33)) < 0) {
        FUN_020d3e84(arg0);
        return 1;
    }
    if (!FUN_020d3cc8(arg0, arg1, seq, arg2, arg3, &flag)) {
        return 0;
    }
    if (flag != 0 && !FUN_020d3834(arg0)) {
        return 0;
    }
    return 1;
}
