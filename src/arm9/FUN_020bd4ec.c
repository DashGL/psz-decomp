// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x90, exact bytes and relocation targets.
//cpp
// flags: -O4,s
struct S_020bd4ec {
    virtual void vf0();
    virtual void vf4();
    virtual void vf8();
    char pad[0x18];
    signed char f1c;
};

extern "C" {
extern void *FUN_020c0c0c(void);
extern void FUN_020c0b30(void *);
extern void *FUN_020c0724(void *);
extern int FUN_020dd740(void *);
extern void FUN_020bd57c(void *, void *);
extern void FUN_020e06c4(void *);
extern void FUN_020e06d4(void *);
extern void FUN_020e0708(void);

int FUN_020bd4ec(S_020bd4ec *r5, unsigned short *r4, void *r7, void *r6) {
    if (r5->f1c == 12) {
        r5->vf8();
    }
    if (r5->f1c != 0) {
        return 0;
    }
    FUN_020c0b30(FUN_020c0c0c());
    if (FUN_020dd740(FUN_020c0724(FUN_020c0c0c())) != 0) {
        unsigned short *dst = (unsigned short *)((char *)r5 + 0xecc);
        unsigned short *end = dst + 25;
        while (*r4 != 0 && dst < end) {
            *dst = *r4;
            r4++;
            dst++;
        }
        *dst = 0;
        FUN_020bd57c((char *)r5 + 0xf00, r7);
        *(void **)((char *)r5 + 0xf14) = r6;
        FUN_020e06c4((char *)r5 + 0xe64);
        FUN_020e06d4(r6);
        FUN_020e0708();
        r5->f1c = 1;
        return 1;
    }
    return 0;
}
}
