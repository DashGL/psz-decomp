// FUN_020d7568 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// Construct and send a discovery advertisement, retrying with reduced metadata if full.
// check: 2.0/sp2p3 target=0x228 candidate=0x228 words=0 exact_bytes=0 bad_relocs=0
typedef unsigned int u32;
struct Packet { unsigned char data[0x578]; int length; };
extern int DAT_0211da48;
extern u32 DAT_0211da4c[];
extern const char DAT_020ff9c8[], DAT_020ff9d4[], DAT_020ff9e0[], DAT_020ff9e8[], DAT_020ff9ec[];
extern const char DAT_020ff9f0[], DAT_020ffa00[], DAT_020ffa0c[], DAT_020ffa18[];
extern void FUN_020d6a10(struct Packet *, unsigned int, const unsigned char *);
extern int FUN_02066274(char *, const char *, ...);
extern int FUN_020d6770(struct Packet *, const char *);
extern void FUN_020d6750(struct Packet *, int);
extern const char *FUN_0202862c(u32);
extern void FUN_020014d4(void *, const void *, unsigned int);
extern void FUN_020d6cb0(void *, struct Packet *, int, void *, int, void *, int, void *);
extern int FUN_020c7540(int, const void *, int, int, const void *, int);
extern u32 FUN_020c7824(void);
void FUN_020d7568(unsigned char *self, int mode)
{
    struct Packet packet, expanded;
    char label[20];
    int i;
    packet.length = 0;
    FUN_020d6a10(&packet, 3, self + 0x84);
    for (i = 0; i < DAT_0211da48; ++i) {
        FUN_02066274(label, DAT_020ff9c8, i);
        FUN_020d6770(&packet, label);
        FUN_020d6770(&packet, FUN_0202862c(DAT_0211da4c[i]));
    }
    FUN_020d6770(&packet, DAT_020ff9d4);
    FUN_020d6750(&packet, *(int *)(self + 0xc0));
    FUN_020d6770(&packet, DAT_020ff9e0);
    FUN_020d6770(&packet, *(int *)(self + 0xc8) ? DAT_020ff9e8 : DAT_020ff9ec);
    if (mode) {
        FUN_020d6770(&packet, DAT_020ff9f0);
        FUN_020d6750(&packet, mode);
    }
    FUN_020d6770(&packet, DAT_020ffa00);
    FUN_020d6770(&packet, (const char *)self + 4);
    if (*(int *)(self + 0xa8)) {
        FUN_020d6770(&packet, DAT_020ffa0c);
        FUN_020d6750(&packet, *(int *)(self + 0x104));
        FUN_020d6770(&packet, DAT_020ffa18);
        FUN_020d6750(&packet, *(unsigned short *)(self + 0x108));
    }
    if (mode != 2) {
        FUN_020014d4(&expanded, &packet, packet.length);
        expanded.length = packet.length;
        FUN_020d6cb0(self, &expanded, 255, 0, 255, 0, 255, 0);
        if (0x578 - expanded.length < 1) {
            expanded.length = packet.length;
            FUN_020d6cb0(self, &expanded, 255, 0, 0, 0, 0, 0);
        }
        FUN_020014d4(&packet, &expanded, expanded.length);
        packet.length = expanded.length;
    } else if (0x578 - packet.length >= 1) {
        i = packet.length++;
        packet.data[i] = 0;
    }
    FUN_020c7540(*(int *)self, &packet, packet.length, 0, self + 0xcc, 8);
    *(u32 *)(self + 0xac) = FUN_020c7824();
    *(u32 *)(self + 0xb0) = *(u32 *)(self + 0xac);
    if (mode) *(u32 *)(self + 0xb4) = 0;
}
