//cpp
// flags: -O4,s
extern "C" {
extern int FUN_overlay_12__021341fc(void);
extern const char *FUN_overlay_12__02135118(void *, int);
extern void FUN_overlay_12__021350a4(const char *, int, const int *);
extern void FUN_overlay_12__0212c8f8(const char *, int, int, int);
}
static inline bool is_mode4(void) { return FUN_overlay_12__021341fc() == 4; }
extern "C" void FUN_overlay_12__021350cc(unsigned char *p) {
    int heading = 4, footer = 12;
    if (is_mode4()) {
        heading = 9;
        footer = 14;
    }
    FUN_overlay_12__021350a4(FUN_overlay_12__02135118(p + 12, heading), 60, (const int *)0x0213bcc4);
    FUN_overlay_12__0212c8f8(FUN_overlay_12__02135118(p + 12, footer), 18, 177, 2);
}
