// flags: -O4,p
struct Rec { signed char a, b, c, pad[9]; };
extern void FUN_overlay_19__02198990(struct Rec *, const void *);
int FUN_overlay_19__02198968(unsigned int *p) {
    struct Rec rec;
    FUN_overlay_19__02198990(&rec, (const char *)p[4] + 0x64);
    if (rec.a != 15) return 0;
    if (rec.c != 2) return 0;
    return 1;
}
