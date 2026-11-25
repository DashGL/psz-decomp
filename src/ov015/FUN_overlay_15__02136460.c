// flags: -O4,p
static inline void set_wnd(volatile unsigned short *reg, int x1, int y1, int x2, int y2)
{
    reg[0] = (unsigned short)(((x1 << 8) & 0xff00) | (x2 & 0xff));
    reg[2] = (unsigned short)(((y1 << 8) & 0xff00) | (y2 & 0xff));
}

void FUN_overlay_15__02136460(int engine, int window, const unsigned short *rect)
{
    if (engine == 1) {
        if (window == 0) {
            set_wnd((volatile unsigned short *)0x04001040, rect[0], rect[1], rect[2], rect[3]);
        } else {
            set_wnd((volatile unsigned short *)0x04001042, rect[0], rect[1], rect[2], rect[3]);
        }
    } else {
        if (window == 0) {
            set_wnd((volatile unsigned short *)0x04000040, rect[0], rect[1], rect[2], rect[3]);
        } else {
            set_wnd((volatile unsigned short *)0x04000042, rect[0], rect[1], rect[2], rect[3]);
        }
    }
}
