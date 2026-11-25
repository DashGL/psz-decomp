// flags: -O4,s -noThumb
typedef struct {
    int pad[2];
    char *p;
} G_644dc;
extern G_644dc DAT_021180a0;
unsigned char FUN_020644dc(void) {
    char *p = DAT_021180a0.p;
    unsigned int a = *(unsigned short *)(p + 18) ? 2 : 0;
    unsigned int b = *(unsigned short *)(p + 14) ? 1 : 0;
    unsigned int c = *(unsigned short *)(p + 20) ? 4 : 0;
    unsigned int d = *(unsigned short *)(p + 22) ? 8 : 0;
    return (unsigned char)(d | (c | (b | a)));
}
