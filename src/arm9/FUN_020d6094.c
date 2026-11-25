// flags: -O4,p
#define HTONL(x) ((((x) << 24) & 0xff000000U) | ((((x) << 8) & 0x00ff0000U) | ((unsigned char)((x) >> 24) | (((x) >> 8) & 0x0000ff00U))))
#define HTONS(x) (unsigned short)((unsigned char)((x) >> 8) | (((x) << 8) & 0xff00))

struct S5 {
    int f0;
    int f4;
    unsigned int f8;
    int fc;
};

struct S4 {
    unsigned short f0;
    unsigned short f2;
    int f4;
};

struct PktD6094 {
    unsigned char magic[6];
    unsigned char version;
    unsigned char packettype;
    unsigned int cookie;
    unsigned char fc;
    unsigned char fd;
    unsigned char pad[0x4c - 0xe];
};

extern const unsigned char DAT_020feb34[6];
extern void FUN_020d5880(int, int, unsigned short, void *, int);

void FUN_020d6094(struct S5 *r5, struct S4 *r4) {
    struct PktD6094 pkt;
    __memcpy(pkt.magic, DAT_020feb34, 6);
    pkt.version = 3;
    pkt.packettype = 6;
    pkt.cookie = HTONL(r5->f8);
    pkt.fd = (unsigned char)r5->fc;
    FUN_020d5880(r5->f0, r4->f4, HTONS(r4->f2), &pkt, 0x15);
}
