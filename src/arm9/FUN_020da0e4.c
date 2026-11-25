// flags: -O4,p
extern int FUN_020d915c(const unsigned char *, int);

#define HTONL(x) ((((x) << 24) & 0xff000000U) | ((((x) << 8) & 0x00ff0000U) | ((unsigned char)((x) >> 24) | (((x) >> 8) & 0x0000ff00U))))

struct SbDA0E4 {
    unsigned char pad[0x490];
    void (*cb)(void *, const unsigned char *, unsigned int, unsigned short, unsigned int, const unsigned char *, void *);
    void *instance;
};

int FUN_020da0e4(struct SbDA0E4 *sb, const unsigned char *buf, int len) {
    int has_final;
    int i;
    int count;
    const unsigned char *s1;
    int slen;
    unsigned int ip;
    unsigned int num_servers;
    unsigned short port;

    if (len < 2) {
        return 4;
    }
    has_final = buf[0];
    len -= 2;
    count = buf[1];
    buf += 2;
    for (i = 0; i < count; i++) {
        s1 = buf;
        slen = FUN_020d915c(buf, len);
        if (slen == -1) {
            return 4;
        }
        len -= slen;
        buf += slen;
        if (len < 11) {
            return 4;
        }
        len -= 10;
        __memcpy(&ip, buf, 4);
        __memcpy(&port, buf + 4, 2);
        __memcpy(&num_servers, buf + 6, 4);
        buf += 10;
        num_servers = HTONL(num_servers);
        slen = FUN_020d915c(buf, len);
        if (slen == -1) {
            return 4;
        }
        sb->cb(sb, s1, ip, port, num_servers, buf, sb->instance);
        buf += slen;
        len -= slen;
    }
    if (has_final != 0) {
        sb->cb(sb, 0, 0, 0, 0, 0, sb->instance);
    }
    return 0;
}
