// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x68, exact bytes and relocation targets.
// flags: -O4,p
typedef struct {
    char pad[0x14];
    unsigned char f14;
    char pad2[7];
    int f1c;
} Sub_d7e24;
typedef struct S_d7e24 {
    int f0[2];
    char f8[0x3c];
    void (*f44)(struct S_d7e24 *, int, Sub_d7e24 *, int);
    int f48;
} S_d7e24;
extern char DAT_020fff98[];
extern int FUN_02003fa8(void *, char *);
extern void FUN_020d8314(Sub_d7e24 *, void *);
extern int FUN_020c7824(void);
extern void FUN_020d7a08(void *, Sub_d7e24 *);
void FUN_020d7e24(S_d7e24 *a, Sub_d7e24 *b, void *c) {
    int r6 = FUN_02003fa8(c, DAT_020fff98) != 0;
    FUN_020d8314(b, c);
    if (r6 != 0) {
        unsigned char r1 = b->f14;
        b->f14 = ((r1 & 4) ? 0x41 : 0x42) | r1;
        b->f14 &= 0xf3;
        b->f1c = FUN_020c7824() - b->f1c;
        FUN_020d7a08(a->f8, b);
        a->f44(a, 0, b, a->f48);
    }
}
