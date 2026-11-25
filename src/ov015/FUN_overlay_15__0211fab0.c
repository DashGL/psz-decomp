// flags: -O4,p
extern unsigned short FUN_overlay_15__021207dc(unsigned short);
extern void FUN_overlay_15__021206c0(void *, const void *, int);

int FUN_overlay_15__0211fab0(const unsigned char *packet, unsigned char *output) {
    const unsigned char *record = packet + 6;
    unsigned int length;
    for (;;) {
        length = FUN_overlay_15__021207dc(*(const unsigned short *)(record + 2));
        switch (record[0]) {
        case 16:
        case 17:
        case 18:
        case 19:
            if (length > 5) return -1;
            break;
        case 32:
        case 33:
        case 34:
        case 35:
            if (length > 13) return -1;
            break;
        case 21:
        case 37:
            if (length > 33) return -1;
            break;
        }
        switch (record[0]) {
        case 16:
        case 32:
            FUN_overlay_15__021206c0(output + 0x30, record + 6, length);
            *(unsigned int *)(output + 4) = length;
            break;
        case 17:
        case 33:
            FUN_overlay_15__021206c0(output + 0x70, record + 6, length);
            *(unsigned int *)(output + 4) = length;
            break;
        case 18:
        case 34:
            FUN_overlay_15__021206c0(output + 0xb0, record + 6, length);
            *(unsigned int *)(output + 4) = length;
            break;
        case 19:
        case 35:
            FUN_overlay_15__021206c0(output + 0xf0, record + 6, length);
            *(unsigned int *)(output + 4) = length;
            break;
        case 21:
        case 37:
            if (length && record[length + 5] != 0) return -1;
            FUN_overlay_15__021206c0(output + 8, record + 6, length);
            break;
        default:
            return -1;
        }
        if (*(const unsigned short *)(record + 4) == 0) break;
        record = packet + 6 + FUN_overlay_15__021207dc(*(const unsigned short *)(record + 4));
    }
    return 0;
}
