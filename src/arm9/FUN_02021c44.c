// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x13c, exact bytes and relocation targets.
// flags: -O4,p -noThumb
struct ArpEntry21c44 {
    int ip;
    unsigned char mac[6];
    unsigned short time;
};

extern int DAT_02107054[];
extern struct ArpEntry21c44 DAT_021070d4[];

extern int FUN_020214fc(int);
extern int FUN_0202159c(int);
extern unsigned long long FUN_02067e0c(void);
extern void FUN_02065774(const void *, void *, int);

void FUN_02021c44(const void *mac, int ip, int force) {
    unsigned short now;
    unsigned int i;

    if (ip == 0x7f000001 || ip == DAT_02107054[0x14]) {
        return;
    }
    if (FUN_020214fc(ip) == 0) {
        return;
    }
    if (FUN_0202159c(ip) != 0) {
        return;
    }
    now = (unsigned short)(FUN_02067e0c() >> 16);
    for (i = 0; i < 8; i++) {
        if (ip == DAT_021070d4[i].ip) {
            DAT_021070d4[i].time = now;
            FUN_02065774(mac, DAT_021070d4[i].mac, 6);
            return;
        }
    }
    if (force != 0) {
        unsigned int best_idx;
        unsigned short best_age = 0;
        best_idx = 0;
        for (i = 0; i < 8; i++) {
            int age;
            if (DAT_021070d4[i].ip == 0) {
                best_idx = i;
                break;
            }
            age = now - DAT_021070d4[i].time;
            if ((int)best_age < (short)age) {
                best_idx = i;
                best_age = (unsigned short)age;
            }
        }
        DAT_021070d4[best_idx].ip = ip;
        FUN_02065774(mac, DAT_021070d4[best_idx].mac, 6);
        DAT_021070d4[best_idx].time = now;
    }
}
