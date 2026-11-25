// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xb0, exact bytes and relocation targets.
// flags: -O4,s
// check: exact
// target: FUN_overlay_15__0212f3cc @ 0x0212f3cc (size 0xb0, ov015)

typedef void (*Copy)(void *, unsigned int, unsigned int);
struct Pal22 { unsigned char b[22]; };
struct Owner8c {
    void *a;
    void *b[3];
    void *c[3];
};
struct State8c {
    unsigned char sel;
    struct Owner8c *owner;
};
extern struct State8c data_0213e88c;

extern void FUN_overlay_15__021252f8(void *, Copy);
extern int FUN_overlay_15__021252bc(const void *);
extern void *FUN_overlay_15__0213553c(int, int, int);
extern void FUN_overlay_15__021363c4(int, int);

unsigned int FUN_overlay_15__0212f3cc(void)
{
    struct Pal22 pal = *(const struct Pal22 *)0x0213a4d0;
    volatile unsigned short *sub = (volatile unsigned short *)0x04001008;
    volatile unsigned short *main = (volatile unsigned short *)0x0400000a;
    unsigned int val;

    FUN_overlay_15__021252f8((void *)0x0213b444, (Copy)0x0205ec10);
    FUN_overlay_15__021252f8((void *)0x0213b458, (Copy)0x0205f29c);
    FUN_overlay_15__021252f8((void *)0x0213b470, (Copy)0x0205eb64);
    FUN_overlay_15__021252f8((void *)0x0213b488, (Copy)0x0205ef9c);
    data_0213e88c.owner->a = FUN_overlay_15__0213553c(FUN_overlay_15__021252bc(&pal), 0, 4);
    FUN_overlay_15__021363c4(1, 16);
    sub[0] = (sub[0] & ~3) | 3;
    sub[1] = (sub[1] & ~3) | 3;
    main[0] = (main[0] & ~3) | 3;
    val = (main[1] & ~3) | 3;
    main[1] = val;
    return val;
}
