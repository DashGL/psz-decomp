// flags: -O4,s
extern int DAT_0211a3c4[];
extern void FUN_0207f4fc(void *);
enum { E0 = 0, E1 = 1 };

void FUN_0203bc28(char *s) {
    if ((DAT_0211a3c4[2] >= 0) ? E1 : E0) {
        if (!*(unsigned short *)(s + 0x14e)) {
            *(unsigned short *)(s + 0x14e) = 1;
            *(unsigned short *)(s + 0x154) = 0;
        }
    } else {
        *(unsigned short *)(s + 0x14e) = *(unsigned short *)(s + 0x5c);
        *(unsigned short *)(s + 0x150) = *(unsigned short *)(s + 0x5e);
        *(unsigned short *)(s + 0x154) = 0;
    }
    FUN_0207f4fc(s + 0x158);
}
