// flags: -O4,s
typedef struct { unsigned char b[4]; } Key_0212a2a4;
extern signed char *FUN_020845a8(void *);
int FUN_overlay_12__0212a2a4(int *p) {
    Key_0212a2a4 key;
    signed char *entry;
    int word, value;
    key = *(Key_0212a2a4 *)p;
    entry = FUN_020845a8(&key);
    if (entry) {
        word = p[1];
        if (((word & (7 << 22)) >> 22) > 4) return 0;
        value = ((word & (int)0xfe000000) >> 25) & 0x7f;
        if (entry[9] < value || value > 99) return 0;
        return 1;
    }
    return 0;
}
