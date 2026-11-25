// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x98, exact bytes and relocation targets.
// flags: -O4,s
// check: exact
// target: FUN_overlay_15__0212fd00 @ 0x0212fd00 (size 0x98, ov015)

typedef void (*Copy)(void *, unsigned int, unsigned int);
struct Pal22 { unsigned char b[22]; };
struct State94 {
    signed char a;
    signed char b;
    unsigned char c;
    void *owner;
};
extern struct State94 data_0213e894;

extern void FUN_overlay_15__021252f8(void *, Copy);
extern int FUN_overlay_15__021252bc(const void *);
extern void *FUN_overlay_15__0213553c(int, int, int);

unsigned int FUN_overlay_15__0212fd00(void)
{
    struct Pal22 pal = *(const struct Pal22 *)0x0213a57c;
    volatile unsigned short *sub = (volatile unsigned short *)0x04001008;
    volatile unsigned short *main = (volatile unsigned short *)0x0400000a;
    unsigned int val;

    FUN_overlay_15__021252f8((void *)0x0213b4b4, (Copy)0x0205f29c);
    FUN_overlay_15__021252f8((void *)0x0213b4cc, (Copy)0x0205eb64);
    FUN_overlay_15__021252f8((void *)0x0213b4e4, (Copy)0x0205ef9c);
    data_0213e894.owner = FUN_overlay_15__0213553c(FUN_overlay_15__021252bc(&pal), 0, 4);
    sub[0] = (sub[0] & ~3) | 3;
    sub[1] = (sub[1] & ~3) | 3;
    main[0] = (main[0] & ~3) | 3;
    val = (main[1] & ~3) | 3;
    main[1] = val;
    return val;
}
