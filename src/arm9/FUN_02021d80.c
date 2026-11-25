// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xd0, exact bytes and relocation targets.
// flags: -noThumb
extern int FUN_0202159c(int);
extern void *FUN_0202153c(int);
extern void *FUN_02021a08(void *);
extern void *FUN_02021bd4(void *);
extern void FUN_02065774(void *, void *, int);
extern void FUN_0202165c(void *, int, int, int);
extern unsigned char DAT_0210753c[];

void FUN_02021d80(void *a0, int a1, int a2, int a3, int a4, unsigned short a5) {
    *(unsigned short *)((char *)a0 - 2) = (unsigned short)((a5 >> 8) | (a5 << 8));
    if (FUN_0202159c(a4) == 0) {
        void *r4 = FUN_0202153c(a4);
        void *r0;
        if (r4 == 0) {
            return;
        }
        r0 = FUN_02021a08(r4);
        if (r0 == 0) {
            r0 = FUN_02021bd4(r4);
        }
        if (r0 == 0) {
            return;
        }
        FUN_02065774(r0, (char *)a0 - 0xe, 6);
    } else {
        *((unsigned char *)a0 - 0xe) = 1;
        *((unsigned char *)a0 - 0xd) = 0;
        *((unsigned char *)a0 - 0xc) = 0x5e;
        *((unsigned char *)a0 - 0xb) = (unsigned char)(((unsigned int)a4 >> 16) & 0x7f);
        *((unsigned char *)a0 - 0xa) = (unsigned char)((unsigned int)a4 >> 8);
        *((unsigned char *)a0 - 9) = (unsigned char)a4;
    }
    FUN_02065774(DAT_0210753c, (char *)a0 - 8, 6);
    FUN_0202165c((char *)a0 - 0xe, a1 + 0xe, a2, a3);
}
