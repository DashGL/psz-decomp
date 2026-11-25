// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x6c, exact bytes and relocation targets.
// check: exact
// target: FUN_overlay_15__02130b6c @ 0x02130b6c (size 0x6c, ov015)

extern unsigned char data_0213e8ac;
extern void FUN_overlay_15__02130bd8(void);
extern void FUN_overlay_15__021255f8(int);
extern void FUN_overlay_15__02125320(int);
extern void FUN_02068510(void *);
extern void FUN_020654b4(int, void *, int);
extern void FUN_020654dc(void *, const void *, int);
extern void FUN_overlay_15__021253b4(void *, int);
extern void FUN_overlay_15__02124cb0(int);
extern void FUN_overlay_15__02132918(void (*)(void));
extern void FUN_overlay_15__02130e1c(void);
extern void FUN_overlay_15__02132190(int);
extern void FUN_overlay_15__02127de4(void (*)(void));
extern void FUN_overlay_15__02130c48(void);

void FUN_overlay_15__02130b6c(void)
{
    unsigned short buf[54];

    data_0213e8ac = 0;
    FUN_overlay_15__02130bd8();
    FUN_overlay_15__021255f8(8);
    FUN_overlay_15__02125320(2);
    FUN_02068510(&buf[11]);
    FUN_020654b4(0, buf, 0x16);
    FUN_020654dc(&buf[13], buf, buf[24] * 2);
    FUN_overlay_15__021253b4(buf, 0x28);
    FUN_overlay_15__02124cb0(0);
    FUN_overlay_15__02132918(FUN_overlay_15__02130e1c);
    FUN_overlay_15__02132190(11);
    FUN_overlay_15__02127de4(FUN_overlay_15__02130c48);
}
