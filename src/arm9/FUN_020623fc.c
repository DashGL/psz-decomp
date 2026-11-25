// flags: -O4,p -noThumb
extern struct {
    char pad[0x1c];
    unsigned char *p;
    unsigned char *out;
    unsigned char state;
    char pad2[3];
    unsigned char mode;
} DAT_02112600;
void FUN_020623fc(void) {
    unsigned char *p;
    if (DAT_02112600.state != 2) return;
    p = DAT_02112600.p;
    if (p[0x4b2] == 0) {
        DAT_02112600.mode = 9;
        DAT_02112600.out = p;
    } else {
        DAT_02112600.mode = 4;
        DAT_02112600.out = p + 0x220;
    }
    DAT_02112600.state = 3;
}
