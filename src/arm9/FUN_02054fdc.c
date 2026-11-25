// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xd8, exact bytes and relocation targets.
// flags: -noThumb
extern void *FUN_02052f70(void);
extern int FUN_02053464(void);
extern void FUN_020550b4(void);
extern void FUN_020551e0(void);

void FUN_02054fdc(void *a0) {
    char *p = (char *)FUN_02052f70() + (*(unsigned short *)((char *)a0 + 0xa) << 2);
    void *r2 = *(void **)(p + 0xcc);
    void *r4 = *(void **)(p + 0x10c);
    int r0;
    unsigned short r1;
    if (r2 != (void *)FUN_020550b4 && r2 != (void *)FUN_020551e0) {
        return;
    }
    if (r4 == 0) {
        return;
    }
    if (r4 != *(void **)((char *)a0 + 0x20)) {
        return;
    }
    r0 = FUN_02053464();
    r1 = *(unsigned short *)((char *)a0 + 2);
    if (r1 == 0) {
        if (r0 != 0) {
            return;
        }
        *(unsigned short *)((char *)r4 + (*(unsigned short *)((char *)r4 + 0x80a) << 1) + 0x800) = *(unsigned short *)((char *)a0 + 0x1a) >> 1;
        *(unsigned short *)((char *)r4 + 0x80a) = (*(unsigned short *)((char *)r4 + 0x80a) + 1) & 3;
        return;
    }
    if (r1 == 10) {
        if (r0 != 0) {
            *(unsigned short *)((char *)r4 + 0x80a) = (*(unsigned short *)((char *)r4 + 0x80a) + 3) & 3;
        }
        *(unsigned short *)((char *)r4 + 0x81c) = 4;
        return;
    }
    *(unsigned short *)((char *)r4 + 0x81c) = 5;
}
