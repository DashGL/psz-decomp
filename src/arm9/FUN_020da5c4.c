// flags: -O4,p
struct SelfDA5C4 {
    int state;
    unsigned char pad[0x6b0];
    int sock;
};

extern void *____memcpy(void *, const void *, unsigned long);
extern void FUN_020d95f4(struct SelfDA5C4 *, int, int, int, int);
extern int FUN_020d9580(struct SelfDA5C4 *, void *, int);
extern int FUN_020c7530(int, const void *, int, int);

int FUN_020da5c4(struct SelfDA5C4 *self, int a1, short a2, const void *buf, int len) {
    unsigned short net_len;
    unsigned char hdr[16];
    unsigned short v;
    int status;

    if (self->state == 1) {
        FUN_020d95f4(self, 0, 0, 2, 0);
    }
    if (self->state == 1) {
        return 3;
    }
    v = (unsigned short)(len + 9);
    net_len = (unsigned short)(((v >> 8) & 0xff) | ((v << 8) & 0xff00));
    __memcpy(hdr, &net_len, 2);
    hdr[2] = 2;
    __memcpy(hdr + 3, &a1, 4);
    __memcpy(hdr + 7, &a2, 2);
    if ((status = FUN_020d9580(self, hdr, 9)) == 0) {
        if (FUN_020c7530(self->sock, buf, len, 0) < 0) {
            return 3;
        }
        return 0;
    }
    return status;
}
