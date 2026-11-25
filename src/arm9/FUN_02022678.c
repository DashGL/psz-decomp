// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x144, exact bytes and relocation targets.
// flags: -O4,p -noThumb
struct Global22678 {
    unsigned char f00;
    unsigned char f01;
    char pad02[0x4e];
    unsigned int ip;
};

extern char DAT_0210753c[];
extern struct Global22678 DAT_02107054;

extern int FUN_02021630(const void *, const void *);
extern void FUN_02021c44(const void *, unsigned int, int);
extern void FUN_020225d0(void *);

#define BSWAP16(x) ((unsigned short)(((int)(x) >> 8) | ((x) << 8)))
#define READ32_BE(p) ((BSWAP16((p)[0]) << 16) | BSWAP16((p)[1]))

void FUN_02022678(unsigned short *pkt, unsigned int len) {
    unsigned short op;
    unsigned int sender_ip;
    int is_sender;
    int is_target;

    if (len < 0x1c) {
        return;
    }
    if (FUN_02021630((char *)pkt + 8, DAT_0210753c) == 0 || *(volatile unsigned int *)&DAT_02107054.ip == 0) {
        return;
    }
    if (!(pkt[0] == 0x100 && pkt[1] == 8 && pkt[2] == 0x0406)) {
        return;
    }
    op = BSWAP16(pkt[3]);
    if (op != 1 && op != 2) {
        return;
    }
    sender_ip = READ32_BE(pkt + 7);
    is_sender = (sender_ip == DAT_02107054.ip);
    is_target = (DAT_02107054.ip == READ32_BE(pkt + 12));
    if (!is_sender) {
        FUN_02021c44((char *)pkt + 8, sender_ip, is_target);
    }
    if (op == 1 && is_target) {
        FUN_020225d0(pkt);
    } else if (op == 2 && is_target && is_sender) {
        DAT_02107054.f01 = 1;
    }
}
