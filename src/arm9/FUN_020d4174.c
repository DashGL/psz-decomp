typedef unsigned int u32;
extern unsigned char *FUN_020d4bc0(unsigned char *, u32, u32);
extern int FUN_020d3030(unsigned char *, unsigned char *, u32, u32, int, unsigned char *, int, int);
#pragma thumb off
extern int FUN_020015ac(const void *, const void *, unsigned int);
#pragma thumb on
extern int FUN_020d30e0(unsigned char *, u32, u32, unsigned char *, int, int *);
extern int FUN_020d4ac0(unsigned char *, u32, u32);
extern int FUN_020d3190(unsigned char *, unsigned char **, u32, u32);
extern int FUN_020d4ab0(unsigned char *);
extern int FUN_020d38ec(unsigned char *, unsigned char *, int);
extern int FUN_020d3ea4(unsigned char *, int, unsigned char *, int);
extern int FUN_020d4104(unsigned char *, int, unsigned char *, int);
extern const unsigned char DAT_020feab4[];
int FUN_020d4174(unsigned char *self, unsigned char *packet, int length, u32 address, u32 port) {
    u32 offset = *(u32 *)(self + 0x44);
    int remaining = (int)((u32)length - offset);
    unsigned char *body = packet + offset;
    unsigned char *peer;
    int handled, special, status;
    peer = FUN_020d4bc0(self, address, port);
    if (*(u32 *)(self + 0x2c)) {
        if (!FUN_020d3030(self, peer, address, port, 0, packet, length, 0)) return 0;
    }
    special = remaining > 2 && !FUN_020015ac(body, DAT_020feab4, 2);
    if (!peer) {
        if (!FUN_020d30e0(self, address, port, packet, length, &handled)) return 0;
        if (handled) return 1;
        if (!special || body[2] != 1) {
            if ((!special || body[2] != 0x68) && !FUN_020d4ac0(self, address, port)) return 0;
            return 1;
        }
        if (!*(u32 *)(self + 0x20)) return 1;
        status = FUN_020d3190(self, &peer, address, port);
        if (status) {
            if (status != 5 && !FUN_020d4ac0(self, address, port)) return 0;
            return 1;
        }
    }
    if (*(int *)(peer + 0xc) == 7) {
        if ((!special || body[2] != 0x68) && !FUN_020d4ab0(peer)) return 0;
        return 1;
    }
    if (special && remaining >= 4 && !FUN_020015ac(body + 2, DAT_020feab4, 2)) {
        body += 2;
        length -= 2;
        packet[3] = packet[1];
        packet[2] = packet[0];
        special = 0;
        packet += 2;
    }
    if (!special) {
        if (*(int *)(peer + 0xc) < 5) {
            if (!FUN_020d30e0(self, address, port, packet, length, &handled)) return 0;
        } else if (!FUN_020d38ec(peer, packet, length)) return 0;
        return 1;
    }
    if ((int)body[2] < 8) return FUN_020d3ea4(peer, body[2], packet, length) != 0;
    return FUN_020d4104(peer, body[2], packet, length) != 0;
}