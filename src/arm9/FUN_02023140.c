// flags: -O4,p -noThumb
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
extern u8 *FUN_02022c18(const void *, const void *);
extern void FUN_02022db8(const void *, const void *, int, int);
extern void FUN_02066b00(void);
extern void FUN_02022c7c(const void *, void *);
extern void FUN_02022d90(void *, int);
extern void FUN_02066a94(void *);

#define W(p, n) (*(u32 *)((u8 *)(p) + (n)))
#define H(p, n) (*(u16 *)((u8 *)(p) + (n)))
#define BE(v) ((u16)(((u16)(v) >> 8) | ((u16)(v) << 8)))
#define NET1(p, n) (((u32)BE(H(p, n)) << 16) | BE(H(p, (n) + 2)))
#define NET2(p, n) (BE(H(p, (n) + 2)) | ((u32)BE(H(p, n)) << 16))

void FUN_02023140(const u8 *ip, const u8 *tcp, int length) {
    u8 *socket = FUN_02022c18(ip, tcp);
    if (socket == 0 || socket[8] != 2) {
        FUN_02022db8(ip, tcp, length, 0);
        return;
    }
    FUN_02066b00();
    W(socket, 0x24) = NET1(tcp, 4) + 1;
    W(socket, 0x30) = NET1(tcp, 8);
    H(socket, 0x2c) = BE(H(tcp, 14));
    FUN_02022c7c(tcp, socket);
    FUN_02022d90(socket, 0);
    socket[8] = 4;
    if (W(socket, 4) == 1) {
        W(socket, 4) = 0;
        FUN_02066a94((void *)W(socket, 0));
    }
}
