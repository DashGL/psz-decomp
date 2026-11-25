// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xcc, exact bytes and relocation targets.
// flags: -O4,p

struct HostEntD933C {
    int f0;
    int f4;
    int f8;
    unsigned char **h_addr_list;
};

struct StateD933C {
    int f0;
    const char *f4;
};

struct SockAddrD933C {
    unsigned char len;
    unsigned char family;
    unsigned short port;
    unsigned char addr[4];
};

struct SelfD933C {
    unsigned char pad0[0xc];
    char host[0x6b4 - 0xc];
    int sock;
};

extern struct StateD933C DAT_0211dbac;
extern const char DAT_021000d4[];
extern int FUN_020d92fc(char *, int);
extern void FUN_02003c8c(char *, const char *);
extern void FUN_02066274(char *, const char *, char *, int);
extern int FUN_020c7590(char *);
extern struct HostEntD933C *FUN_0202820c(char *);
extern int FUN_020c7468(int, int, int);
extern int FUN_020c74d0(int, struct SockAddrD933C *, int);
extern void FUN_020c7478(int);

int FUN_020d933c(struct SelfD933C *self) {
    struct SockAddrD933C sin;
    char buf[0x80];
    int r3 = FUN_020d92fc(self->host, 0x14);
    if (DAT_0211dbac.f4 != 0) {
        FUN_02003c8c(buf, DAT_0211dbac.f4);
    } else {
        FUN_02066274(buf, DAT_021000d4, self->host, r3);
    }
    sin.family = 2;
    sin.port = 0xee70;
    *(int *)sin.addr = FUN_020c7590(buf);
    if (*(int *)sin.addr == -1) {
        struct HostEntD933C *he = FUN_0202820c(buf);
        unsigned char *src;
        unsigned char *dst;
        if (he == 0) {
            return 2;
        }
        dst = sin.addr;
        src = he->h_addr_list[0];
        dst[0] = src[0];
        dst[1] = src[1];
        dst[2] = src[2];
        dst[3] = src[3];
    }
    if (self->sock == -1) {
        self->sock = FUN_020c7468(2, 1, 0);
        if (self->sock == -1) {
            return 1;
        }
    }
    if (FUN_020c74d0(self->sock, &sin, 8) != 0) {
        FUN_020c7478(self->sock);
        self->sock = -1;
        return 3;
    }
    return 0;
}
