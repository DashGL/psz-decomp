// flags: -O4,s
extern unsigned int FUN_020c3f6c(const void *, unsigned int);
extern void FUN_overlay_12__0212c8f8(const void *, int, int, int);
void FUN_overlay_12__021350a4(const void *text, int offset, const int *position) {
    unsigned int width = FUN_020c3f6c(text, 255);
    int dx = offset - (int)((width * 5) >> 1);
    FUN_overlay_12__0212c8f8(text, position[0] + dx, position[1], 2);
}
