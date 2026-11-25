// flags: -O4,p
#define HTONL(x) ((((x) << 24) & 0xff000000U) | ((((x) << 8) & 0x00ff0000U) | ((unsigned char)((x) >> 24) | (((x) >> 8) & 0x0000ff00U))))

struct SbDA200 {
    unsigned char pad[0x48c];
    void (*cb)(void *, int, unsigned int, int, const unsigned char **, void *);
    void *f490;
    void *instance;
};

extern int FUN_020d8f78(struct SbDA200 *, unsigned int, unsigned short);
extern int FUN_020d9030(struct SbDA200 *, int);
extern int FUN_020d915c(const unsigned char *, int);

int FUN_020da200(struct SbDA200 *sb, const unsigned char *buf, int len) {
    const unsigned char *ptrs[16];
    unsigned int v1c;
    unsigned int ip;
    unsigned short port;
    int server;
    int numkeys;
    int i;
    int index;

    if (len < 11) {
        return 4;
    }
    __memcpy(&ip, buf, 4);
    __memcpy(&port, buf + 4, 2);
    index = FUN_020d8f78(sb, ip, port);
    if (index == -1) {
        return 0;
    }
    server = FUN_020d9030(sb, index);
    __memcpy(&v1c, buf + 6, 4);
    len -= 11;
    v1c = HTONL(v1c);
    numkeys = buf[10];
    buf += 11;
    for (i = 0; i < numkeys && i < 16; i++) {
        int slen;
        if (len < 1) {
            break;
        }
        slen = FUN_020d915c(buf, len);
        if (slen == -1) {
            return 4;
        }
        ptrs[i] = buf;
        buf += slen;
        len -= slen;
    }
    if (sb->cb == 0) {
        return 0;
    }
    sb->cb(sb, server, v1c, i, ptrs, sb->instance);
    return 0;
}
