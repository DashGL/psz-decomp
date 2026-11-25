// flags: -O4,p
#pragma thumb off
extern int FUN_0205c73c(int, int);
#pragma thumb on

struct G_b4b0 {
    unsigned short a;
    unsigned short b;
    unsigned char *state;
};
extern struct G_b4b0 DAT_0213e858;

void FUN_overlay_15__0212b4b0(void) {
    int y = 54 - FUN_0205c73c(DAT_0213e858.b, 28);
    int count = DAT_0213e858.state[81];
    int i;
    if (count > 5) count = 5;
    for (i = 0; i < count; i++) {
        unsigned int *entry = *(unsigned int **)(DAT_0213e858.state + 16 + i * 4);
        *entry = (*entry & 0xfe00ff00u) | (unsigned char)(y - 2) | 0x00b30000;
        entry = *(unsigned int **)(DAT_0213e858.state + 36 + i * 4);
        *entry = (*entry & 0xfe00ff00u) | (unsigned char)(y + 1) | 0x00d20000;
        y += 28;
    }
    DAT_0213e858.state[86] = 1;
}
