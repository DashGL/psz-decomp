// flags: -O4,s
typedef struct { unsigned w[9]; } Rec9_02135168;
extern int FUN_020c3f90(char *, unsigned, const char *, ...);
extern void FUN_overlay_12__02136818(int, void *, const void *);
extern int FUN_overlay_12__0213682c(void *, const void *);
void FUN_overlay_12__02135168(int *handle, const char *format, unsigned argument,
    unsigned style, unsigned callback, unsigned cancel, unsigned delay, unsigned result) {
    char text[256];
    Rec9_02135168 record;
    void *owner;
    if (!format) return;
    FUN_020c3f90(text, 256, format, argument);
    record = *(const Rec9_02135168 *)0x0213bd08;
    record.w[0] = (unsigned)text;
    record.w[2] = style;
    record.w[4] = callback;
    record.w[5] = cancel;
    record.w[6] = delay;
    record.w[8] = result;
    owner = *(void **)0x0213f2dc;
    if (owner) {
        if (*handle != -1) FUN_overlay_12__02136818(*handle, owner, &record);
        else *handle = FUN_overlay_12__0213682c(owner, &record);
    }
}
