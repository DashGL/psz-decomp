// flags: -O4,s
extern void FUN_overlay_15__021311cc(void);
extern void FUN_overlay_15__02125570(void);
extern void FUN_overlay_15__0212b4b0(void);
extern void FUN_overlay_15__0212b318(void);
extern void FUN_overlay_15__021311b4(int);
extern void FUN_overlay_15__021311bc(void);
extern void FUN_overlay_15__0212b654(void);
extern void FUN_overlay_15__02137440(unsigned, unsigned);
#pragma thumb off
extern int FUN_0205c73c(int, int);
extern int FUN_0205c700(int, int);
#pragma thumb on
extern struct {
    unsigned short pad;
    unsigned short pos;
    char *state;
} DAT_0213e858;
void FUN_overlay_15__0212b5b0(unsigned event) {
    int remainder;
    FUN_overlay_15__021311cc();
    FUN_overlay_15__02125570();
    DAT_0213e858.pos = (unsigned short)(DAT_0213e858.pos + 4);
    remainder = FUN_0205c73c(DAT_0213e858.pos, 28);
    if (remainder >= 4) {
        FUN_overlay_15__0212b4b0();
        return;
    }
    DAT_0213e858.pos = (unsigned short)(DAT_0213e858.pos - remainder);
    FUN_overlay_15__0212b318();
    FUN_overlay_15__021311b4(FUN_0205c700(
        DAT_0213e858.pos * (unsigned char)DAT_0213e858.state[83],
        *(unsigned short *)(DAT_0213e858.state + 64)));
    FUN_overlay_15__021311bc();
    FUN_overlay_15__0212b654();
    *(unsigned *)(DAT_0213e858.state + 56) = 0;
    FUN_overlay_15__02137440(0, event);
}
