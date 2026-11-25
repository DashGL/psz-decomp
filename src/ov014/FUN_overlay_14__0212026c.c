// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x230, exact bytes and relocation targets.
// check: ov014 0212026c
// flags: -O4,s
extern void FUN_020c38f0(void *, int);
extern void *FUN_02093c00(int);
extern void FUN_020c38a0(void *, void *, int, int, int);
extern void *FUN_02093b2c(void *, int, int);
extern void FUN_020c3788(void *, void *, int, int, int);
extern int FUN_020ae500(void *, int, int);
extern void FUN_020c3864(void *, void *, int, int, int);
extern void FUN_020656b8(void *, int, int);
extern int FUN_020ae50c(void *, int, int, int);
extern const unsigned char data_02121900[0x2c];

struct DateBits {
    unsigned int d0 : 7;
    unsigned int d1 : 4;
    unsigned int d2 : 5;
    unsigned int d3 : 8;
    unsigned int d4 : 8;
};

struct Data0212026c {
    unsigned char pad0[3];
    unsigned char b3;
    unsigned char b4;
    unsigned char pad5[0x27];
    unsigned char b2c;
    unsigned char pad2d[7];
    unsigned int time_sec;
    struct DateBits date;
};

void FUN_overlay_14__0212026c(unsigned char *self, struct Data0212026c *data) {
    unsigned short buf68[6];
    unsigned short buf40[20];
    unsigned short buf30[8];
    unsigned char buf4[0x2c];
    void *r6;
    void *r7;
    int flag;

    FUN_020c38f0(self + 4, 0);
    r6 = FUN_02093c00(0);
    r7 = FUN_02093c00(1);
    if (r6 != 0 && r7 != 0) {
        flag = !data->b3;
        if (flag == 0) {
            int len;
            unsigned int mins;
            FUN_020c38a0(self + 4, (unsigned char *)data + 8, 0, 0, 2);
            FUN_020c3788(self + 4, FUN_02093b2c(r7, 1, data->b2c), 0, 10, 2);
            buf68[0] = 0x4c;
            buf68[1] = 0x56;
            if (FUN_020ae500(&buf68[2], 4, data->b4) > 0) {
                FUN_020c3864(self + 4, buf68, 0x5a, 10, 2);
            }
            FUN_020c3788(self + 4, FUN_02093b2c(r6, 1, 4), 0, 0x1e, 2);
            FUN_020656b8(buf40, 0, 0x28);
            FUN_020ae50c(&buf40[0], 2, data->date.d1, 0x30);
            buf40[2] = 0x2f;
            FUN_020ae50c(&buf40[3], 2, data->date.d2, 0x30);
            buf40[5] = 0x2f;
            FUN_020ae50c(&buf40[6], 4, data->date.d0 + 2000, 0x30);
            buf40[10] = 0xa;
            FUN_020ae50c(&buf40[11], 2, data->date.d3, 0x30);
            buf40[13] = 0x3a;
            FUN_020ae50c(&buf40[14], 2, data->date.d4, 0x30);
            FUN_020c3864(self + 4, buf40, 0, 0x28, 2);
            FUN_020c3788(self + 4, FUN_02093b2c(r6, 1, 5), 0, 0x46, 2);
            mins = data->time_sec / 60;
            if (mins > 999) {
                mins = 999;
            }
            FUN_020656b8(buf30, 0, 0x10);
            len = FUN_020ae50c(buf30, 4, mins, 0);
            if (len <= 0) {
                buf30[0] = 0x30;
                len = 1;
            } else if ((unsigned int)len > 4) {
                len = 4;
            }
            buf30[len] = 0x3a;
            FUN_020ae50c(&buf30[len + 1], 2, data->time_sec % 60, 0x30);
            FUN_020c3864(self + 4, buf30, 0, 0x50, 2);
        } else {
            int state = *(int *)(self + 0x4c);
            if (state != -1 && state != -2) {
                FUN_020c3788(self + 4, FUN_02093b2c(r6, 1, 6), 0, 0x28, 2);
            } else if (*(int *)(self + 0x94) != 0) {
                struct Copy2c { unsigned char b[0x2c]; } tmp;
                FUN_020c38f0(self + 4, 0);
                tmp = *(const struct Copy2c *)data_02121900;
                FUN_020c3788(self + 4, &tmp, 0, 0x1e, 2);
            }
        }
    }
}
