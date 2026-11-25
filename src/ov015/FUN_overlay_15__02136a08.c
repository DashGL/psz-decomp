typedef struct {
    unsigned char pad1[40];
    unsigned short x;
    unsigned short y;
    unsigned char pad2[12];
    unsigned char active : 1;
} Touch_02136a08;
extern Touch_02136a08 *DAT_0213e908[];
int FUN_overlay_15__02136a08(const unsigned short *rect) {
    Touch_02136a08 *input;
    unsigned int x, y;
    if ((*(volatile unsigned short *)0x027fffa8 & 0x8000) >> 15) {
        return 0;
    }
    input = DAT_0213e908[1];
    if (!input->active) {
        return 0;
    }
    x = input->x;
    if (rect[0] > x) {
        return 0;
    }
    if (rect[2] < x) {
        return 0;
    }
    y = input->y;
    if (rect[1] > y) {
        return 0;
    }
    if (rect[3] < y) {
        return 0;
    }
    return 1;
}
