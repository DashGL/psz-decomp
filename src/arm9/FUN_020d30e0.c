// flags: -O4,p
struct SD30e0 {
    char pad0[0x14];
    int f14;
    int f18;
    int f1c;
    char pad20[0x10];
    int (*f30)(struct SD30e0 *, unsigned int, unsigned short, unsigned char *, int);
};
extern const char DAT_020fe9cc[];
extern const char DAT_020fe9d4[];
extern const char DAT_020fe9ac[];
extern void FUN_02000edc(const char *, const char *, const char *, int);
extern void FUN_020d4d60(struct SD30e0 *);

int FUN_020d30e0(struct SD30e0 *socket, unsigned int ip, unsigned short port, unsigned char *message, int len, int *handled) {
    *handled = 0;
    if (socket == 0) {
        FUN_02000edc(DAT_020fe9cc, DAT_020fe9d4, DAT_020fe9ac, 0x197);
    }
    if (socket == 0) {
        return 1;
    }
    if (socket->f30 == 0) {
        return 1;
    }
    if (len == 0 || message == 0) {
        message = 0;
        len = 0;
    }
    socket->f1c++;
    *handled = socket->f30(socket, ip, port, message, len);
    socket->f1c--;
    if (socket->f14 != 0 && socket->f1c == 0) {
        FUN_020d4d60(socket);
        return 0;
    }
    return 1;
}
