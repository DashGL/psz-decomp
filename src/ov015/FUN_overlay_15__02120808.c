// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x70, exact bytes and relocation targets.
void FUN_overlay_15__021206d0(void *, int, int);
int FUN_02068be8(void *);

extern unsigned int data_0213c2c0[];

int FUN_overlay_15__02120808(void) {
    if (data_0213c2c0[2] == 0) {
        int rtc[3];
        unsigned int seed = 0;

        FUN_overlay_15__021206d0(rtc, 0, 12);
        if (FUN_02068be8(rtc) == 0) {
            seed += rtc[0] << 10;
            seed += rtc[1] << 3;
            seed += rtc[2];
        }
        data_0213c2c0[6] = seed;
        data_0213c2c0[7] = 0x5d588b65u;
        data_0213c2c0[8] = 0x00269ec3u;
        data_0213c2c0[2] = 1;
    }
    data_0213c2c0[6] = data_0213c2c0[7] * data_0213c2c0[6] + data_0213c2c0[8];
    return (unsigned short)(((data_0213c2c0[6] >> 16) * 0x7fff) >> 16);
}
