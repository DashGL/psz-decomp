// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x13c, exact bytes and relocation targets.
// flags: -O4,p -noThumb
struct TcpHdr22db8 {
    unsigned short src_port;
    unsigned short dst_port;
    unsigned short seq[2];
    unsigned short ack[2];
    unsigned char off;
    unsigned char flags;
};

struct IpHdr22db8 {
    char pad[0xc];
    unsigned short src[2];
};

extern char DAT_02107198[];
extern char DAT_02107154[];
extern char DAT_02107054[];

extern void FUN_020656b8(void *, int, int);
extern void FUN_02022d1c(void *, int, int);

#define BSWAP16(x) ((unsigned short)(((int)(x) >> 8) | ((x) << 8)))
#define READ32_BE(p) ((BSWAP16((p)[0]) << 16) | BSWAP16((p)[1]))

void FUN_02022db8(struct IpHdr22db8 *ip, struct TcpHdr22db8 *tcp, int data_len, int a3) {
    char *s = DAT_02107198;

    FUN_020656b8(s, 0, 0x64);
    *(unsigned short *)(DAT_02107154 + 0x4e) = BSWAP16(tcp->dst_port);
    *(unsigned short *)(DAT_02107154 + 0x5c) = BSWAP16(tcp->src_port);
    *(unsigned int *)(DAT_02107054 + 0x160) = READ32_BE(ip->src);
    if ((tcp->flags & 0x10) != 0) {
        *(unsigned int *)(s + 0x28) = READ32_BE(tcp->ack);
        FUN_02022d1c(s, 4, a3);
    } else {
        *(unsigned int *)(s + 0x28) = 0;
        *(unsigned int *)(s + 0x24) = data_len + READ32_BE(tcp->seq);
        if ((tcp->flags & 3) != 0) {
            *(unsigned int *)(s + 0x24) += 1;
        }
        FUN_02022d1c(s, 0x14, a3);
    }
}
