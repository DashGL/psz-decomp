// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x68, exact bytes and relocation targets.
// flags: -O4,p -noThumb
typedef struct {
    int f0;
    int f4;
    int f8;
} Elem_67a0c;
typedef struct {
    int f0;
    int f4[3];
    Elem_67a0c *f10;
} Sub_67a0c;
extern Sub_67a0c *DAT_02118400[];
extern int FUN_020683d4(void);
extern int FUN_02067834(int, int);
extern int FUN_0206785c(int, int);
extern void FUN_020683e8(int);
void FUN_02067a0c(int a, int b, int c) {
    Elem_67a0c *r7;
    int r5;
    int r4 = FUN_020683d4();
    Sub_67a0c *r0 = DAT_02118400[a];
    if (b < 0) {
        b = r0->f0;
    }
    r7 = &r0->f10[b];
    r5 = c - 0x20;
    r7->f8 = FUN_02067834(r7->f8, r5);
    r7->f4 = FUN_0206785c(r7->f4, r5);
    FUN_020683e8(r4);
}
