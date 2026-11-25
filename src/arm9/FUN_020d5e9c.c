// flags: -O4,p
typedef struct {
    unsigned char len;
    unsigned char family;
    unsigned short port;
    int ip;
} SockAddrIn;

extern int DAT_0211d744[];
extern int DAT_020feb28[];
extern unsigned char DAT_0211d848[];

extern int FUN_020d5c90(int);
extern void FUN_020d5808(void *);
extern int FUN_020c7694(int);
extern int FUN_020c750c(int, void *, int, int, void *, int *);
extern void FUN_020d62b0(void *, int, void *);
extern unsigned int FUN_020c7824(void);
extern void FUN_020d59c8(void *, int, int, void *);
extern void FUN_020d5a28(void *);
extern void FUN_020d5bcc(void *);
extern void FUN_020d5e78(int);
extern void FUN_020d5918(void *);

void FUN_020d5e9c(char *self) {
    unsigned char fromaddr[8];
    int addrlen = 8;
    SockAddrIn pkt;

    if (DAT_0211d744[7] != 0) {
        DAT_0211d744[7] = FUN_020d5c90(DAT_020feb28[2]);
        DAT_0211d744[7] = FUN_020d5c90(DAT_020feb28[1]);
    }
    if (self == 0) {
        return;
    }
    if (*(int *)(self + 0x10) == 4) {
        FUN_020d5808(self);
        return;
    }
    if (*(int *)self != -1 && FUN_020c7694(*(int *)self) != 0) {
        do {
            int len = FUN_020c750c(*(int *)self, DAT_0211d848, 0x200, 0, fromaddr, &addrlen);
            if (len == -1) {
                break;
            }
            FUN_020d62b0(DAT_0211d848, len, fromaddr);
            if (*(int *)(self + 0x10) == 4) {
                break;
            }
        } while (*(int *)self != -1 && FUN_020c7694(*(int *)self) != 0);
    }
    if ((*(int *)(self + 0x10) == 0 || *(int *)(self + 0x10) == 2) &&
        FUN_020c7824() > *(unsigned int *)(self + 0x2c)) {
        if (*(int *)(self + 0x24) > *(int *)(self + 0x28)) {
            if (*(int *)(self + 0x10) == 0) {
                FUN_020d59c8(self, 2, -1, 0);
            } else {
                FUN_020d59c8(self, 3, -1, 0);
            }
        } else {
            *(int *)(self + 0x24) += 1;
            if (*(int *)(self + 0x10) == 0) {
                FUN_020d5a28(self);
            } else {
                FUN_020d5bcc(self);
            }
        }
    }
    if (*(int *)(self + 0x10) == 3 &&
        FUN_020c7824() > *(unsigned int *)(self + 0x2c)) {
        unsigned short h;
        pkt.family = 2;
        h = *(unsigned short *)(self + 0x34);
        pkt.port = ((unsigned char)(h >> 8)) | ((h << 8) & 0xff00);
        pkt.ip = *(int *)(self + 0x30);
        if (*(int *)(self + 4) == -1) {
            FUN_020d59c8(self, 0, *(int *)self, &pkt);
        } else {
            FUN_020d59c8(self, 0, *(int *)(self + 4), &pkt);
        }
    }
    if (*(int *)(self + 0x10) == 1 &&
        FUN_020c7824() > *(unsigned int *)(self + 0x2c)) {
        FUN_020d59c8(self, 1, -1, 0);
    }
    if (*(int *)(self + 0x10) == 5 &&
        FUN_020c7824() > *(unsigned int *)(self + 0x2c)) {
        if (*(int *)(self + 0x24) > *(int *)(self + 0x28)) {
            (*(void (**)(int, int, void *, int))(self + 0x3c))(
                *(int *)(self + 0x44),
                *(int *)(self + 0x48),
                self + 0x4c,
                *(int *)(self + 0x40));
            if (*(int *)(self + 4) == -1) {
                *(int *)self = -1;
            }
            FUN_020d5e78(*(int *)(self + 8));
            return;
        } else {
            FUN_020d5918(self);
            *(int *)(self + 0x24) += 1;
            *(unsigned int *)(self + 0x2c) = FUN_020c7824() + 1000;
        }
    }
}
