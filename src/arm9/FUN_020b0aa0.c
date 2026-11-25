// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xdc, exact bytes and relocation targets.
extern void *FUN_0208555c(int);
extern void *FUN_0203f1f0(void *, unsigned char);
extern void *FUN_02033d60(void *, unsigned short, int, int);
extern int FUN_0203b820(void *);
extern void FUN_02033dec(void *, void *, unsigned short);
extern void *FUN_020b0ee0(void *, int, void *, int);
extern void FUN_0204b3ac(void *, void *, void *, int);
extern void FUN_02033e0c(void *, void *, unsigned short, int);
extern void *DAT_02108c84;
extern void *DAT_02108d08;
extern void FUN_020b1cfc(void);

void FUN_020b0aa0(void *a0) {
    void *r4 = DAT_02108c84;
    void *r6 = DAT_02108d08;
    void *r7 = FUN_0208555c(*(int *)((char *)a0 + 0x2c));
    void *r0;
    if (r4 == 0 || r6 == 0 || r7 == 0) {
        return;
    }
    *(void **)((char *)a0 + 0x24) = FUN_0203f1f0(r6, *((unsigned char *)a0 + 0x30));
    if (*(void **)((char *)a0 + 0x24) == 0) {
        return;
    }
    r0 = FUN_02033d60(r4, **(unsigned short **)((char *)a0 + 0x24), 2, 0xffff);
    *(void **)((char *)a0 + 0x20) = r0;
    if (r0 == 0) {
        return;
    }
    *(unsigned int *)((char *)r0 + 0x18) &= ~1u;
    if (*(short *)((char *)a0 + 0x5c) == 4) {
        if (FUN_0203b820(r7) != 4) {
            FUN_02033dec(r4, *(void **)((char *)a0 + 0x20), *(unsigned short *)(*(int *)((char *)a0 + 0x24) + 4));
            *((unsigned char *)a0 + 0x31) = 1;
            return;
        }
        FUN_02033dec(r4, *(void **)((char *)a0 + 0x20), *(unsigned short *)(*(int *)((char *)a0 + 0x24) + 2));
        r0 = FUN_020b0ee0(a0, 0x84, (char *)a0 + 0x4c, 0x1000);
        *(void **)((char *)a0 + 0x7c) = r0;
        if (r0 != 0) {
            *(int *)((char *)r0 + 0x48) = 0xbb8000;
            FUN_0204b3ac(*(void **)((char *)a0 + 0x7c), (void *)FUN_020b1cfc, a0, 0);
        }
        *((unsigned char *)a0 + 0x31) = 0;
        return;
    }
    FUN_02033dec(r4, *(void **)((char *)a0 + 0x20), *(unsigned short *)(*(int *)((char *)a0 + 0x24) + 4));
    FUN_02033e0c(r4, *(void **)((char *)a0 + 0x20), *(unsigned short *)(*(int *)((char *)a0 + 0x24) + 2), 0xffff);
}
