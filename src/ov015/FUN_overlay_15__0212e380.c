// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x7c, exact bytes and relocation targets.
// check: exact
// target: FUN_overlay_15__0212e380 @ 0x0212e380 (size 0x7c, ov015)

extern unsigned char *FUN_overlay_15__021318ac(void);
extern int FUN_020ea1ec(const void *);
extern int FUN_020ea1ac(const void *, const void *);

int FUN_overlay_15__0212e380(void)
{
    unsigned char *cfg = FUN_overlay_15__021318ac();
    if (cfg[0x40] == 0) return 0;
    if (cfg[0xf6] == 0 && !FUN_020ea1ec(cfg + 0xc8) && !FUN_020ea1ec(cfg + 0xcc)) return 0;
    if (cfg[0xf5] == 0) {
        if (!FUN_020ea1ec(cfg + 0xc0)) return 0;
        if (!FUN_020ea1ec(cfg + 0xc4)) return 0;
        if (!FUN_020ea1ac(cfg + 0xc0, cfg + 0xf0)) return 0;
    }
    return 1;
}
