// flags: -O4,s
extern struct { int a, b; unsigned char *p; } DAT_0213e86c;
extern unsigned char *FUN_overlay_15__021318ac(void);
extern void FUN_overlay_15__021318d0(unsigned), FUN_overlay_15__0212d6f8(void);
void FUN_overlay_15__0212d2e4(unsigned mode) {
    unsigned cur = FUN_overlay_15__021318ac()[246];
    if (cur != mode) {
        DAT_0213e86c.p[67] = (unsigned char)mode;
        FUN_overlay_15__021318d0(mode);
        FUN_overlay_15__0212d6f8();
    }
}
