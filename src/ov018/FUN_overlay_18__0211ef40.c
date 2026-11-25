// flags: -O4,s
typedef struct { int a; int b; } Pair;
extern Pair DAT_overlay_18__021232dc[14][8];
unsigned char FUN_overlay_18__0211ef40(unsigned char *s, int idx) {
    if (idx >= 0 && (unsigned int)idx < 8) {
        unsigned int cat = *(unsigned char *)(s + 0x24);
        if (cat < 14) return (unsigned char)DAT_overlay_18__021232dc[cat][idx].a;
    }
    return 0xff;
}
