// flags: -O4,p -noThumb
extern unsigned int FUN_0201c9d4(unsigned int, void *, unsigned int);
extern void (*DAT_020f6914[])(void *, void *);

typedef struct {
    unsigned int cmd;
    unsigned int f04;
    int m[16];
    unsigned int f48;
} Packet;

void FUN_02020024(unsigned int *material) {
    Packet pkt;
    if (material[0] & 8) {
        pkt.cmd = 0x00101610;
    } else {
        pkt.cmd = 0x00101810;
    }
    pkt.f04 = 3;
    pkt.f48 = 2;
    pkt.m[2] = pkt.m[3] = pkt.m[6] = pkt.m[7] = pkt.m[8] = pkt.m[9] = pkt.m[10] = pkt.m[11] = pkt.m[14] = 0;
    pkt.m[15] = 0x1000;
    DAT_020f6914[material[0] & 7](pkt.m, material);
    if (material[12] != 0x1000) {
        pkt.m[0] = (int)((unsigned long long)((long long)(int)material[12] * pkt.m[0]) >> 12);
        pkt.m[1] = (int)((unsigned long long)((long long)(int)material[12] * pkt.m[1]) >> 12);
        pkt.m[12] = (int)((unsigned long long)((long long)(int)material[12] * pkt.m[12]) >> 12);
    }
    if (material[13] != 0x1000) {
        pkt.m[4] = (int)((unsigned long long)((long long)(int)material[13] * pkt.m[4]) >> 12);
        pkt.m[5] = (int)((unsigned long long)((long long)(int)material[13] * pkt.m[5]) >> 12);
        pkt.m[13] = (int)((unsigned long long)((long long)(int)material[13] * pkt.m[13]) >> 12);
    }
    FUN_0201c9d4(pkt.cmd, ((unsigned int *)((unsigned int)((unsigned long long)(unsigned int)&pkt & 0xffffffffffffffffULL))) + 1, 18);
}
