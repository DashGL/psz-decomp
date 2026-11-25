// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xc4, exact bytes and relocation targets.
// FUN_0208e79c: full 0xc4 bytes + relocation targets verified 2.0/sp2p3.
// Provenance: notes/sessions/resume-upper-cpp-provenance-2026-11-12.md

// flags: -O4,s

extern void FUN_0203020c(void *, void *, int);
extern int FUN_0203068c(void *);
extern void FUN_02076574(void *, int, int);
extern int FUN_02030dd0(void *);
extern void FUN_0208e78c(void *, void *, void *, int *);
extern void FUN_020bbfbc(void *, unsigned short);
extern void FUN_020302e8(void *, void *);
extern void FUN_0203647c(void *, void *, void *);
extern void FUN_020304c8(void *, void *, int);
extern void FUN_020b80ac(int, void *);

extern void *DAT_020faad0;
extern void *DAT_020faae4;
extern void *DAT_020fab0c;
extern void *DAT_020fab24;
extern void *DAT_020fc988;

void *FUN_0208e79c(unsigned char *self, void *p1) {
    int sp0;
    int sp1c[3];
    int sp10[3];
    int sp4[3];

    FUN_0203020c(self, p1, 0);
    FUN_02076574(self + 0x30, FUN_0203068c(self), 3);
    *(void **)(self + 0x44) = &DAT_020faad0;
    *(void **)self = &DAT_020faae4;
    *(void **)(self + 0x30) = &DAT_020fab0c;
    *(void **)(self + 0x44) = &DAT_020fab24;
    *(int *)(self + 0x48) = **(int **)(self + 4);
    *(int *)(self + 0x4c) = FUN_02030dd0(self);
    *(int *)(self + 0x50) = -1;
    *(int *)(self + 0x54) = 0;

    unsigned short r4 = *(unsigned short *)(self + 0x2c) + 0x4000;
    sp0 = 0x3000;
    FUN_0208e78c(sp1c, &DAT_020fc988, &DAT_020fc988, &sp0);
    FUN_020bbfbc(sp1c, r4);
    FUN_020302e8(sp4, self);
    FUN_0203647c(sp10, sp4, sp1c);
    FUN_020304c8(self, sp10, 0);
    *(short *)(self + 0x40) = 0;
    *(short *)(self + 0x42) = 6;
    unsigned char *b44 = self;
    if (self != 0) {
        b44 += 0x44;
    }
    FUN_020b80ac(((signed char *)(*(int *)(self + 0x48)))[2], b44);
    return self;
}

