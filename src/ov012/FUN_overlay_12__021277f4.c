// flags: -O4,s
typedef struct { unsigned char b[4]; } B4;
extern unsigned char *FUN_02084568(B4 *);
extern int DAT_overlay_12__02138438[];
int FUN_overlay_12__021277f4(void *unused, B4 *arg) {
    B4 key = *arg;
    unsigned char *p = FUN_02084568(&key);
    if (p) {
        unsigned int idx = (unsigned int)((int)(*(unsigned short *)(p + 10)) >> 11);
        if (idx < 7) return DAT_overlay_12__02138438[idx];
    }
    return 0;
}
