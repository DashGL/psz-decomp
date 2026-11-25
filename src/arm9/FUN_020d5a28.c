#pragma opt_propagation off
// flags: -O4,p
typedef unsigned int U;
typedef unsigned char B;
extern const B DAT_020feb34[];
extern B DAT_0211cfc8[];
extern U DAT_0211d744[];
extern U FUN_020d58b4(void);
extern int FUN_020d58f0(int);
extern int FUN_020d5880(int, U, int, void *, U);
extern unsigned long long FUN_020c7824(void);
#pragma thumb off
extern B *FUN_02003c8c(B *, const B *);
extern U FUN_02003c70(const B *);
#pragma thumb reset

#define SWAP32(x) ((((x) << 24) & 0xff000000u) | ((((x) << 8) & 0x00ff0000u) | ((((x) >> 24) & 0x000000ffu) | (((x) >> 8) & 0x0000ff00u))))
#define SWAP16(x) ((unsigned short)((((x) >> 8) & 0xff) | (((x) << 8) & 0xff00)))

void FUN_020d5a28(int *self) {
    struct NatNegPacket {
        B magic[6];
        B version;
        B packettype;
        U cookie;
        B porttype;
        B clientindex;
        B usegameport;
        B localip[4];
        B localport[2];
        B gamename[67];
    } packet;
    struct NatNegPacket *p = &packet;
    U ip;
    unsigned short port;
    U length;

    p->magic[0] = DAT_020feb34[0];
    p->magic[1] = DAT_020feb34[1];
    p->magic[2] = DAT_020feb34[2];
    p->magic[3] = DAT_020feb34[3];
    p->magic[4] = DAT_020feb34[4];
    p->magic[5] = DAT_020feb34[5];
    p->version = 3;
    p->packettype = 0;
    p->cookie = SWAP32((U)self[2]);
    p->clientindex = (B)self[3];
    p->usegameport = (B)(self[1] != -1);

    ip = SWAP32(FUN_020d58b4());
    packet.localip[0] = (B)(ip >> 24);
    packet.localip[1] = (B)(ip >> 16);
    packet.localip[2] = (B)(ip >> 8);
    packet.localip[3] = (B)ip;
    packet.localport[0] = 0;
    packet.localport[1] = 0;

    FUN_02003c8c(packet.gamename, DAT_0211cfc8);
    length = FUN_02003c70(DAT_0211cfc8) + 22;

    if (p->usegameport && !self[5]) {
        p->porttype = 0;
        FUN_020d5880(self[1], DAT_0211d744[10], 0x6cfd, p, length);
    }
    if (!self[6]) {
        p->porttype = 1;
        FUN_020d5880(self[0], DAT_0211d744[10], 0x6cfd, p, length);
    }

    port = SWAP16(FUN_020d58f0(p->usegameport ? self[1] : self[0]));
    packet.localport[0] = (B)((int)port >> 8);
    packet.localport[1] = (B)port;

    if (!self[7]) {
        p->porttype = 2;
        FUN_020d5880(self[0], DAT_0211d744[9], 0x6cfd, p, length);
    }
    if (!self[8]) {
        p->porttype = 3;
        FUN_020d5880(self[0], DAT_0211d744[8], 0x6cfd, p, length);
    }
    self[11] = (int)((U)FUN_020c7824() + 500);
    self[10] = 10;
}
