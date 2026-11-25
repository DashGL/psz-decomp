// flags: -O4,p
#define HTONL(x) ((((x) << 24) & 0xff000000U) | ((((x) << 8) & 0x00ff0000U) | ((unsigned char)((x) >> 24) | (((x) >> 8) & 0x0000ff00U))))

struct S6_pkt {
    unsigned char magic[6];
    unsigned char f6;
    unsigned char f7;
    unsigned int f8;
    unsigned char fc;
    unsigned char fd;
    unsigned char fe;
    unsigned char ff;
    unsigned int f10;
    unsigned int f14;
    unsigned char f18[0x34];
};
struct S6_obj {
    int f0;
    int f4;
    unsigned int f8;
    int fc;
    int pad[13];
    int f44;
};
struct S6_g1 {
    unsigned int f0;
    unsigned int f4;
    unsigned int f8;
};
struct S6_g2 {
    unsigned int f0, f4, f8;
    int pad[7];
    int f28;
};

extern const unsigned char DAT_020feb34[6];
extern struct S6_g1 DAT_020feb28;
extern struct S6_g2 DAT_0211d744;
extern const char DAT_0211cfc8[];
#pragma thumb off
extern unsigned int FUN_02003c70(const char *);
extern void *FUN_020014d4(void *, const void *, unsigned int);
#pragma thumb reset
extern void FUN_020d5880(int, int, int, void *, int);

void FUN_020d5918(struct S6_obj *param_1) {
    struct S6_pkt pkt;
    __memcpy(pkt.magic, DAT_020feb34, 6);
    pkt.f6 = 3;
    pkt.f7 = 0xd;
    pkt.f8 = HTONL(param_1->f8);
    pkt.fd = (unsigned char)param_1->fc;
    pkt.fe = (unsigned char)(param_1->f44 == 0 ? 1 : 0);
    pkt.f10 = DAT_020feb28.f0;
    pkt.f14 = DAT_0211d744.f8;
    if (FUN_02003c70(DAT_0211cfc8) != 0) {
        FUN_020014d4(pkt.f18, DAT_0211cfc8, 0x32);
    }
    FUN_020d5880(param_1->f0, DAT_0211d744.f28, 0x6cfd, &pkt, 0x49);
}
