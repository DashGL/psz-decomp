// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x9c, exact bytes and relocation targets.
// check: exact
// target: FUN_overlay_15__0212f5c4 @ 0x0212f5c4 (size 0x9c, ov015)

extern int FUN_overlay_15__02136a68(const void *);
extern void FUN_overlay_15__02124ec4(int);
extern void FUN_overlay_15__0212f8c8(void);
extern int FUN_overlay_15__02136978(int);
extern int FUN_overlay_15__021369a8(int);
extern void FUN_overlay_15__0212f914(int);

void FUN_overlay_15__0212f5c4(void)
{
    unsigned int i;
    const char *p = (const char *)0x0213a4fe;

    for (i = 0; i < 7; i++, p += 8) {
        if (FUN_overlay_15__02136a68(p)) {
            FUN_overlay_15__02124ec4(1);
            *(unsigned char *)0x0213e88c = (unsigned char)i;
            FUN_overlay_15__0212f8c8();
            return;
        }
    }
    if (FUN_overlay_15__02136978(1)) {
        FUN_overlay_15__02124ec4(1);
        return;
    }
    if (FUN_overlay_15__02136978(2)) {
        FUN_overlay_15__02124ec4(0);
        return;
    }
    if (FUN_overlay_15__021369a8(0x40)) {
        FUN_overlay_15__0212f914(1);
        return;
    }
    if (FUN_overlay_15__021369a8(0x80)) {
        FUN_overlay_15__0212f914(3);
        return;
    }
    if (FUN_overlay_15__021369a8(0x20)) {
        FUN_overlay_15__0212f914(0);
        return;
    }
    if (FUN_overlay_15__021369a8(0x10)) {
        FUN_overlay_15__0212f914(2);
    }
}
