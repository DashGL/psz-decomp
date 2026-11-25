// flags: -O4,s
struct G { void *f0, *f4; char *mgr; };
extern struct G DAT_0213e86c;
extern const char DAT_0213b32c[];
extern int FUN_020662b4(char *, unsigned, const char *, ...);
extern int FUN_overlay_15__0213709c(unsigned short *, char *, int);
extern void FUN_overlay_15__02136208(void *, int, int, int, int, unsigned short *, int);
void FUN_overlay_15__0212db3c(unsigned char *address, int row) {
    unsigned short text[16];
    char ascii[16];
    FUN_020662b4(ascii, 16, DAT_0213b32c, address[0], address[1], address[2], address[3]);
    FUN_overlay_15__0213709c(text, ascii, 16);
    FUN_overlay_15__02136208(*(void **)(DAT_0213e86c.mgr + 20), 95, 29 * row + 8, 2, 7, text, 1);
}
