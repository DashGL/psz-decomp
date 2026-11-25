// flags: -O4,p -noThumb

struct SockAddr {
    unsigned short family;
    unsigned short port;
    unsigned int addr;
};

extern int FUN_02026f5c(int, int, int, unsigned short, unsigned int, int);

int FUN_02028170(int a0, int a1, int a2, int a3, struct SockAddr *sa) {
    unsigned int addr;
    unsigned short port;
    if (sa != 0) {
        unsigned short p = sa->port;
        unsigned int a = sa->addr;
        port = ((p >> 8) & 0xff) | ((p << 8) & 0xff00);
        addr = ((a >> 24) & 0xff) | ((a >> 8) & 0xff00) | ((a << 8) & 0xff0000) | ((a << 24) & 0xff000000u);
    } else {
        port = 0;
        addr = 0;
    }
    return FUN_02026f5c(a0, a1, a2, port, addr, a3);
}
