// flags: -O4,p
struct SockAddr {
    unsigned short fam;
    unsigned short port;
    int ip;
};
struct Slot {
    struct SockAddr addr;
    unsigned int key;
    int timestamp;
};
struct QRec {
    unsigned char pad0[0x110];
    unsigned char flags;
    unsigned char pad1[3];
    struct Slot slots[200];
};
extern int FUN_020c7824(void);
extern void FUN_020d6750(void *, unsigned int);
extern int FUN_02003a78(void);

#define RAND32() (((unsigned int)FUN_02003a78() << 16) | (unsigned int)FUN_02003a78())
#define BSWAP32(x) ((((x) << 24) & 0xff000000u) | ((((x) << 8) & 0x00ff0000u) | (((unsigned char)((x) >> 24)) | (((x) >> 8) & 0x0000ff00u))))

int FUN_020d70d4(struct QRec *qrec, void *sock, struct SockAddr *saddr) {
    int i = 0;
    int now = FUN_020c7824();
    int free_slot = -1;
    int match_count = 0;

    if ((qrec->flags & 0x80) == 0) {
        FUN_020d6750(sock, 0);
        return 1;
    }
    for (; i < 200; i++) {
        if (free_slot == -1 && qrec->slots[i].addr.ip == 0) {
            free_slot = i;
        }
        if (qrec->slots[i].addr.ip == saddr->ip &&
            qrec->slots[i].addr.port == saddr->port) {
            match_count++;
        }
    }
    if (match_count > 5) {
        return 0;
    }
    if (free_slot == -1) {
        return 0;
    }
    qrec->slots[free_slot].addr = *saddr;
    qrec->slots[free_slot].key = BSWAP32(RAND32());
    qrec->slots[free_slot].timestamp = now;
    FUN_020d6750(sock, qrec->slots[free_slot].key);
    return 1;
}