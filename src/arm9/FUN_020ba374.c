// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xca, exact bytes and relocation targets.
// FUN_020ba374 @ 0x020ba374 (complete body0xca; trailing halfword is alignment).
// check: 2.0/sp2p3 target=0xca candidate=0xca words=0 exact_bytes=0 bad_relocs=0
// Read an opened resource, recognize ZPR header, allocate output and expand
// when encoded; otherwise seek/read the raw contents. Report output count.
// The allocator veneer preserves two words(size,alignment) and returns pointer;
// a generic banked tailcall prototype alone is not its complete ABI proof.
extern void FUN_02059cd4(void *);
extern int FUN_02059fb4(void *, const char *);
extern int FUN_0205a150(void *, void *, unsigned int);
extern int FUN_020c5138(void *);
extern void *FUN_020ba8bc(unsigned int, int);
extern void FUN_020c5158(void *);
extern int FUN_020c5168(void *, void *, void *, unsigned int, int);
extern void FUN_0206740c(void *, int);
extern void FUN_0205a160(void *, int, int);
extern void FUN_02059ffc(void *);

void *FUN_020ba374(const char *a0, int *a1, int a2) {
    unsigned char sp28[0x48];
    int sp18[4];
    unsigned char sp04[0x14];
    void *r6;
    *a1 = -1;
    r6 = 0;
    FUN_02059cd4(sp28);
    if (FUN_02059fb4(sp28, a0) != 0) {
        unsigned int r4 = *(int *)(sp28 + 0x28) - *(int *)(sp28 + 0x24);
        if (r4 > 0x10) {
            FUN_0205a150(sp28, sp18, 0x10);
            if (FUN_020c5138(sp18) != 0) {
                r6 = FUN_020ba8bc((unsigned int)sp18[2], a2);
                if (r6 != 0) {
                    void *r7;
                    r4 -= 0x10;
                    r7 = (char *)r6 + sp18[2] - r4;
                    FUN_0205a150(sp28, r7, r4);
                    FUN_020c5158(sp04);
                    *a1 = FUN_020c5168(sp04, r6, r7, (unsigned int)sp18[2], sp18[3]);
                    FUN_0206740c(r6, *a1);
                }
            } else {
                FUN_0205a160(sp28, (int)r6, (int)r6);
                r6 = FUN_020ba8bc(r4, a2);
                if (r6 != 0) {
                    *a1 = FUN_0205a150(sp28, r6, r4);
                }
            }
        } else {
            r6 = FUN_020ba8bc(r4, a2);
            if (r6 != 0) {
                *a1 = FUN_0205a150(sp28, r6, r4);
            }
        }
        FUN_02059ffc(sp28);
    }
    return r6;
}
