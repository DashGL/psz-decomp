// flags: -O4,p
struct SelfD5BCC {
    int f0;
    int f4;
    unsigned int f8;
    int fc;
    int f10;
    unsigned char pad14[0x28 - 0x14];
    int f28;
    unsigned int f2c;
    unsigned int f30;
    unsigned short f34;
    unsigned char f36;
    unsigned char f37;
};

struct PktD5BCC {
    unsigned char magic[6];
    unsigned char version;
    unsigned char packettype;
    unsigned int cookie;
    unsigned int localip;
    unsigned short localport;
    unsigned char gotdata;
    unsigned char clientindex;
    unsigned char pad[0x4c - 0x14];
};

extern const unsigned char DAT_020feb34[6];
extern void FUN_020d5880(int, unsigned int, unsigned short, void *, int);
extern unsigned int FUN_020c7824(void);

#define HTONL(x) ((((x) << 24) & 0xff000000U) | ((((x) << 8) & 0x00ff0000U) | ((unsigned char)((x) >> 24) | (((x) >> 8) & 0x0000ff00U))))
#define HTONS(x) (unsigned short)((unsigned char)((x) >> 8) | (((x) << 8) & 0xff00))

void FUN_020d5bcc(struct SelfD5BCC *self) {
    struct PktD5BCC pkt;

    __memcpy(pkt.magic, DAT_020feb34, 6);
    pkt.version = 3;
    pkt.packettype = 7;
    pkt.cookie = HTONL(self->f8);
    pkt.localip = self->f30;
    pkt.localport = HTONS(self->f34);
    pkt.gotdata = self->f36;
    pkt.clientindex = (unsigned char)(self->f10 != 2 ? 1 : 0);
    FUN_020d5880(self->f4 != -1 ? self->f4 : self->f0, self->f30, self->f34, &pkt, 0x14);
    self->f2c = FUN_020c7824() + 700;
    self->f28 = 12;
    if (self->f36 != 0) {
        self->f37 = 1;
    }
}
