//cpp
// flags: -O4,s
extern "C" {
extern int FUN_020907a0(void *);
extern int FUN_020c2c80(void *);
extern int FUN_020c2d94(int, int, int);
extern void FUN_overlay_4__0212bdec(void);
extern void FUN_overlay_4__0212be10(void);
extern struct { void *p; int pad; int flag; } DAT_02197f44;
}
extern "C" void FUN_overlay_4__0212bc48(void) {
    unsigned char *manager = *(unsigned char **)0x02108d04;
    if (manager && (((*(unsigned int *)(manager + 592) & 1) == 0) ? 1 : 0)) {
        FUN_020907a0(manager);
        *(unsigned int *)(manager + 592) |= 1;
    }
    if (DAT_02197f44.flag == 0) {
        if (!FUN_020c2c80(DAT_02197f44.p)) return;
        DAT_02197f44.flag = 1;
        FUN_overlay_4__0212bdec();
        FUN_020c2d94(2, 1, 0);
    }
    FUN_overlay_4__0212be10();
}
