// flags: -O4,p -noThumb
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
extern u8 *FUN_02022c18(const void *, const void *);
extern void FUN_02022db8(const void *, const void *, u32, u32);
extern void FUN_02022d90(void *, u32);
extern void FUN_02022da4(void *, u32);
extern void FUN_02066a94(void *);
extern void FUN_02066b00(void);
extern void FUN_02065774(const void *, void *, u32);
extern void FUN_020683e8(u32);
extern u32 FUN_020683d4(void);

#define W(p, n) (*(u32 *)((u8 *)(p) + (n)))
#define H(p, n) (*(u16 *)((u8 *)(p) + (n)))
#define BE(v) ((u16)(((u16)(v) >> 8) | ((u16)(v) << 8)))
#define NET(p, n) (((u32)BE(H(p, n)) << 16) | BE(H(p, (n) + 2)))
#define WAKE() { W(socket, 4) = 0; FUN_02066a94((void *)W(socket, 0)); }

void FUN_02023238(const u8 *ip, const u8 *tcp, u32 length) {
    u8 *socket = FUN_02022c18(ip, tcp);
    u32 ack, seq, flags, space, all, mask;
    if (!socket) {
        FUN_02022db8(ip, tcp, length, 0);
        return;
    }
    ack = NET(tcp, 8);
    flags = tcp[13];
    if ((int)(ack - W(socket, 48)) > 0) W(socket, 48) = ack;
    seq = NET(tcp, 4);
    if (socket[8] == 4 && W(socket, 36) != seq) {
        FUN_02022d90(socket, 0);
        return;
    }
    H(socket, 44) = BE(H(tcp, 14));
    switch (socket[8]) {
    case 0:
    case 2:
        FUN_02022db8(ip, tcp, length, 0);
        break;
    case 3:
        socket[8] = 4;
        if (W(socket, 4) == 1) WAKE();
        if (!length) break;
    case 4:
        W(socket, 52)++;
        space = W(socket, 60) - W(socket, 68);
        if (length > space) { all = 0; length = space; }
        else all = 1;
        if (length) {
            mask = FUN_020683d4();
            FUN_02065774(tcp + ((int)(tcp[12] & 240) / 4), (void *)(W(socket, 64) + W(socket, 68)), length);
            W(socket, 68) += length;
            W(socket, 36) += length;
            FUN_020683e8(mask);
            if (W(socket, 4) == 2) WAKE();
        }
        if (all && (flags & 1)) {
            socket[8] = 6;
            W(socket, 36)++;
            FUN_02022da4(socket, 0);
            if (!length && W(socket, 4) == 2) WAKE();
        } else if (length) {
            FUN_02022d90(socket, 0);
        }
        break;
    case 7:
    case 8:
        if (flags & 1) {
            W(socket, 36) += length + 1;
            FUN_02022d90(socket, 0);
            socket[8] = 0;
            if (W(socket, 4) == 2) WAKE();
        } else {
            if (length) {
                W(socket, 36) += length;
                FUN_02022d90(socket, 0);
            }
            socket[8] = 8;
        }
        break;
    case 6:
    case 9:
        socket[8] = 0;
        if (W(socket, 4) == 2) WAKE();
        break;
    default:
        if (flags & 1) W(socket, 36)++;
        FUN_02022d90(socket, 0);
        break;
    }
    FUN_02066b00();
}
