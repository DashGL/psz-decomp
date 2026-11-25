// flags: -O4,p
#pragma opt_dead_assignments off
#pragma opt_propagation off
typedef void (*Log)(unsigned int, const char *, ...);
extern struct { Log log; char *state; } DAT_0213e8e0;
extern const char DAT_0213c114[], DAT_0213c12c[], DAT_0213c174[];
#pragma thumb off
extern void FUN_02068728(void);
extern unsigned short FUN_020538f0(void);
#pragma thumb on
extern void FUN_overlay_15__02133d2c(int);
extern int FUN_overlay_15__02133d90(void);
int FUN_overlay_15__02134634(int mode, unsigned short id, unsigned short value) {
    int dummy = (*(int *)(DAT_0213e8e0.state + 0x40) == 1) || (FUN_02068728(), 0);
    *(int *)(DAT_0213e8e0.state + 0x12a4) = 384;
    *(int *)(DAT_0213e8e0.state + 0x12a0) = 224;
    if (DAT_0213e8e0.log) DAT_0213e8e0.log(0x08000000, DAT_0213c114, *(int *)(DAT_0213e8e0.state + 0x12a4));
    if (DAT_0213e8e0.log) DAT_0213e8e0.log(0x08000000, DAT_0213c12c, *(int *)(DAT_0213e8e0.state + 0x12a0));
    *(int *)(DAT_0213e8e0.state + 0x44) = mode;
    FUN_overlay_15__02133d2c(3);
    *(unsigned short *)(DAT_0213e8e0.state + 0xc) = id;
    *(unsigned short *)(DAT_0213e8e0.state + 0x32) = value;
    *(unsigned short *)(DAT_0213e8e0.state + 0x18) = FUN_020538f0();
    *(unsigned short *)(DAT_0213e8e0.state + 0x34) = 208;
    *(unsigned short *)(DAT_0213e8e0.state + 0x36) = 68;
    *(unsigned short *)(DAT_0213e8e0.state + 0x10) = 2;
    *(unsigned short *)(DAT_0213e8e0.state + 0x16) = 0;
    *(unsigned short *)(DAT_0213e8e0.state + 0x12) = 0;
    *(unsigned short *)(DAT_0213e8e0.state + 0xe) = 1;
    *(unsigned short *)(DAT_0213e8e0.state + 0x14) = mode == 2;
    if (mode == 0 || mode == 2 || mode == 4) return FUN_overlay_15__02133d90();
    if (DAT_0213e8e0.log) DAT_0213e8e0.log(0x08000000, DAT_0213c174, mode);
    return 0;
}
