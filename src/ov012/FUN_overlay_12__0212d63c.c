// flags: -O4,s
typedef struct { int f0, y, x; } Center_0213e20c;
extern const Center_0213e20c DAT_0213e20c;
extern unsigned FUN_020c3f6c(char *, unsigned);
extern int FUN_020c3f00(char *, char *, unsigned);
extern void FUN_overlay_12__0212c8f8(char *, int, int, int);
void FUN_overlay_12__0212d63c(char *text, int style) {
    char buf[256];
    int n, width, height, i, maxwidth;
    if (text) {
        n = FUN_020c3f6c(text, 255);
        FUN_020c3f00(buf, text, n);
        buf[n] = 0;
        width = 0;
        height = 10;
        maxwidth = 0;
        for (i = 0; i < 256; i++) {
            if (buf[i] == '\n') {
                if (maxwidth < width) maxwidth = width;
                width = 0;
                height += 10;
            } else if (buf[i] == 0) {
                if (maxwidth < width) maxwidth = width;
                width = maxwidth;
                break;
            } else {
                width += 5;
            }
        }
        FUN_overlay_12__0212c8f8(text, DAT_0213e20c.x - width / 2, DAT_0213e20c.y - height / 2, style);
    }
}
