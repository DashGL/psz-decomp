// flags: -O4,s
#pragma thumb off
extern int FUN_0205c700(int, int);
extern int FUN_0205c73c(int, int);
#pragma thumb on
typedef struct {
    int pad0;
    unsigned short val;
    unsigned short pad1;
    unsigned char *ptr;
} State;
extern State DAT_0213e86c;
extern unsigned char DAT_0213a4ac[];
void FUN_overlay_15__0212df88(void) {
    if (DAT_0213e86c.ptr[0x44]) {
        int row = FUN_0205c700(DAT_0213e86c.val, 29);
        int y = FUN_0205c73c(DAT_0213e86c.val, 29) - 51;
        volatile unsigned int *reg = (volatile unsigned int *)0x04000010;
        reg[0] = ((unsigned int)y << 16) & 0x01ff0000;
        y += DAT_0213a4ac[row];
        reg[2] = ((unsigned int)y << 16) & 0x01ff0000;
        DAT_0213e86c.ptr[0x44] = 0;
    }
}
