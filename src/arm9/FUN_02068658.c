// flags: -O4,p -noThumb
typedef struct {
    unsigned char pad000[0x3c];
    unsigned int f03c;
    unsigned char pad040[0x40];
    unsigned char nvramUserInfo[0x74];
    unsigned char mac[6];
    unsigned char pad0fa[0xee];
    unsigned int f1e8;
    unsigned int f1ec;
    unsigned char pad1f0[0x1a0];
    unsigned int f390;
    unsigned short f394;
    unsigned short pad396;
    unsigned short f398;
    unsigned char pad39a[0xe];
    unsigned short f3a8;
    unsigned short f3aa;
    unsigned short f3ac;
} SysWork;

extern volatile unsigned long long DAT_021184dc;
extern unsigned int FUN_02067eac(void);

void FUN_02068658(unsigned int *buf) {
    const SysWork *work = (const SysWork *)0x027ffc00;
    const unsigned char *mac = work->mac;
    unsigned short vcount = *(volatile unsigned short *)0x04000006;

    buf[0] = ((unsigned int)vcount << 16) | FUN_02067eac();
    buf[1] = (((unsigned int)*(const unsigned short *)(mac + 4) << 16) ^ (unsigned int)DAT_021184dc);
    buf[2] = (work->f03c ^ ((unsigned int)(DAT_021184dc >> 32) ^ *(const unsigned int *)mac));
    buf[2] ^= *(volatile unsigned int *)0x04000600;
    buf[3] = work->f1e8;
    buf[4] = work->f1ec;
    buf[5] = ((unsigned int)work->f394 << 16) ^ work->f390;
    buf[6] = ((unsigned int)work->f3aa << 16) | work->f3ac;
    buf[7] = (*(volatile unsigned short *)0x04000130 | *(volatile unsigned short *)0x027fffa8) | ((unsigned int)work->f398 << 16);
}
