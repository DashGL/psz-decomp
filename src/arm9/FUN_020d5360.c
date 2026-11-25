// flags: -O4,p
#define HTONL(x) ((((x) << 24) & 0xff000000U) | ((((x) << 8) & 0x00ff0000U) | ((unsigned char)((x) >> 24) | (((x) >> 8) & 0x0000ff00U))))
#define NTOHS(x) ((((x) >> 8) & 0xff) | (((x) << 8) & 0xff00))

typedef struct {
    unsigned char magic[6];
    unsigned char f6;
    unsigned char f7;
    unsigned int f8;
    unsigned char fc;
    unsigned char fd;
    unsigned char fe;
    unsigned char ff;
    unsigned int f10;
    unsigned short f14;
    unsigned char f16[0x36];
} NatifyPkt;

typedef struct {
    unsigned int priv_ip;
    unsigned short priv_port;
    unsigned short pad06;
    unsigned int pub_ip;
    unsigned short pub_port;
    unsigned short pad0e;
} Mapping;

typedef struct {
    unsigned char pad00[0x80];
    int f80;
    int f84;
    unsigned char pad88[0xc];
    Mapping mappings[4];
} Nat;

typedef struct {
    unsigned char len;
    unsigned char family;
    unsigned short port;
    unsigned int addr;
} SockAddr;

extern int DAT_0211d4f8[7];
extern unsigned char DAT_0211d544[0x200];
extern const unsigned char DAT_020feb34[6];

extern int FUN_020c7694(int);
extern int FUN_020c750c(int, void *, int, int, void *, int *);
#pragma thumb off
extern int FUN_020015ac(const void *, const void *, unsigned int);
#pragma thumb reset
extern unsigned int FUN_020d52f8(void);
extern int FUN_020d5334(int);
extern void FUN_020d535c(Mapping *);

int FUN_020d5360(int sock, Nat *nat) {
    NatifyPkt pkt;
    SockAddr saddr;
    int fromlen = 8;

    if (DAT_0211d4f8[3] && DAT_0211d4f8[2] && DAT_0211d4f8[1] &&
        DAT_0211d4f8[6] && DAT_0211d4f8[0] && DAT_0211d4f8[4] &&
        DAT_0211d4f8[5]) {
        return 0;
    }

    if (sock != -1 && FUN_020c7694(sock)) {
        do {
            unsigned char type;
            int len = FUN_020c750c(sock, DAT_0211d544, 0x200, 0, &saddr, &fromlen);
            if (len == -1) {
                break;
            }
            if (FUN_020015ac(DAT_0211d544, DAT_020feb34, 6) != 0) {
                return 1;
            }
            type = DAT_0211d544[7];
            if (len < 0x15) {
                return 1;
            }
            if (type == 2) {
                __memcpy(&pkt, DAT_0211d544, 0x15);
                switch (pkt.fc) {
                case 1:
                    DAT_0211d4f8[3] = 1;
                    break;
                case 2:
                    nat->f80 = 0;
                    DAT_0211d4f8[2] = 1;
                    break;
                case 3:
                    nat->f84 = 0;
                    DAT_0211d4f8[1] = 1;
                    break;
                }
            } else if (type == 0xb) {
                __memcpy(&pkt, DAT_0211d544, 0x15);
                pkt.f8 = HTONL(pkt.f8);
                switch (pkt.f8) {
                case 0:
                    DAT_0211d4f8[6] = 1;
                    break;
                case 3:
                    DAT_0211d4f8[0] = 1;
                    break;
                case 1:
                    DAT_0211d4f8[4] = 1;
                    break;
                case 2:
                    DAT_0211d4f8[5] = 1;
                    break;
                }
                nat->mappings[pkt.f8].priv_ip = FUN_020d52f8();
                nat->mappings[pkt.f8].priv_port = (unsigned short)NTOHS(FUN_020d5334(sock));
                nat->mappings[pkt.f8].pub_ip = pkt.f10;
                nat->mappings[pkt.f8].pub_port = (unsigned short)NTOHS(pkt.f14);
                FUN_020d535c(&nat->mappings[pkt.f8]);
            }
        } while (sock != -1 && FUN_020c7694(sock));
    }
    return 1;
}
