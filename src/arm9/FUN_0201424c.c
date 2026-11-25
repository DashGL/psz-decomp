// flags: -O4,p -noThumb
struct Node1424C {
    unsigned char pad[16];
    unsigned char data[16];
};
struct G1424C {
    unsigned short f0;
    unsigned short f2;
    unsigned int f4;
    unsigned int f8;
    unsigned int fc;
    unsigned char pad10[0x80];
    unsigned char buf90[256];
};
extern struct G1424C DAT_02104754;
extern struct Node1424C DAT_02104ee4[32];
extern unsigned short DAT_020f66d4;
extern unsigned int FUN_020167e4(unsigned int);
extern unsigned int FUN_0206557c(unsigned int, void *, unsigned int);

void *FUN_0201424c(unsigned int self) {
    int i;
    FUN_020167e4(self);
    *(unsigned int *)(self + 112) = 0;
    *(unsigned int *)(self + 116) = 0;
    *(unsigned int *)(self + 120) = 0;
    *(unsigned int *)(self + 124) = 0;
    *(unsigned int *)(self + 128) = 0;
    *(unsigned int *)(self + 132) = 0;
    *(unsigned short *)(self + 136) = 0;
    *(unsigned short *)(self + 138) = 0;
    *(unsigned int *)(self + 140) = 0;
    *(unsigned int *)(self + 144) = 0;
    *(unsigned short *)(self + 148) = 0;
    DAT_02104754.fc = 0;
    DAT_020f66d4 = 65534;
    for (i = 0; i < 32; i++) {
        FUN_0206557c(~0u, DAT_02104ee4[i].data, 16);
    }
    DAT_02104754.f0 = 0;
    DAT_02104754.f2 = 0;
    FUN_0206557c(0, DAT_02104754.buf90, 256);
    DAT_02104754.f4 = 0;
    return &DAT_02104754;
}
