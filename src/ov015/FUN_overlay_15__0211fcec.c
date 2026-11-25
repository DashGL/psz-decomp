// flags: -O4,p
extern unsigned char data_0213a840[];
extern unsigned int data_0213c2c0[];
extern unsigned short FUN_overlay_15__021207dc(unsigned short);
extern int FUN_overlay_15__0211fab0(const void *, void *);
extern int FUN_overlay_15__0211fc04(const void *, void *);
extern int FUN_overlay_15__0211fcbc(const void *, void *);

int FUN_overlay_15__0211fcec(int index, unsigned char *packet, int remaining,
    unsigned char *records, unsigned char *extras) {
    int flags = 0, result, amount, inner_len;
    unsigned char *record, *hdr;
    if (remaining <= 0) return -2;
    do {
        hdr = packet;
        if (packet[0] == data_0213a840[index]) goto found;
        amount = FUN_overlay_15__021207dc(*(unsigned short *)(packet + 2)) + 4;
        remaining -= amount;
        packet += amount;
    } while (remaining > 0);
    return -4;
found:
    packet += 4;
    inner_len = FUN_overlay_15__021207dc(*(unsigned short *)(hdr + 2));
    record = records + index * 0x350;
    do {
        switch (packet[0]) {
        case 3: result = FUN_overlay_15__0211fab0(packet, record + 8); flags |= 1; break;
        case 4: result = FUN_overlay_15__0211fab0(packet, record + 0x138); flags |= 2; break;
        case 5: result = FUN_overlay_15__0211fc04(packet, record + 0x268); flags |= 4; break;
        case 6: result = FUN_overlay_15__0211fc04(packet, record + 0x2d8); flags |= 8; break;
        case 10: result = FUN_overlay_15__0211fcbc(packet, extras + ((index + 3) << 7)); break;
        default: result = -3; break;
        }
        if (result != 0) return result;
        amount = FUN_overlay_15__021207dc(*(unsigned short *)(packet + 2)) + 4;
        inner_len -= amount;
        packet += amount;
    } while (inner_len > 0);
    data_0213c2c0[12] |= flags;
    return 0;
}
