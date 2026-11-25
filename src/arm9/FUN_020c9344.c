// FUN_020c9344 @ 0x020c9344 (0x1bc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch27-manifest.json; original draft retained for referenced provenance.
// Reset protocol session buffers, rebuild its collection and clear pending operations.
// check: 2.0/sp2p3 target=0x1bc candidate=0x1bc words=0 exact_bytes=0 bad_relocs=0
typedef unsigned int u32;
extern void FUN_020c7bec(void *);
extern void FUN_020ce110(unsigned char **);
extern int FUN_020ce0dc(unsigned char **);
extern void FUN_020c92e4(unsigned char **);
extern void FUN_020ce7d0(unsigned char **, void *);
extern int FUN_020c9334(unsigned char **, void *, void *);
extern int FUN_020cf928(unsigned char **, int (*)(unsigned char **, void *, void *), void *);
#define WORD(off) (*(u32 *)(state + (off)))
int FUN_020c9344(unsigned char **self)
{
    unsigned char *state = *self;
    int result;
    state[0x110] = 0;
    state[0x12f] = 0;
    state[0x144] = 0;
    WORD(0x1f0) = -1;
    WORD(0x1f4) = 0;
    WORD(0x200) = 0;
    WORD(0x204) = 0;
    WORD(0x1fc) = 0;
    FUN_020c7bec((void *)WORD(0x1f8));
    WORD(0x1f8) = 0; WORD(0x1f8) = 0;
    WORD(0x20c) = 0;
    FUN_020c7bec((void *)WORD(0x208));
    WORD(0x208) = 0; WORD(0x208) = 0;
    WORD(0x218) = 0;
    WORD(0x21c) = 0;
    WORD(0x214) = 0;
    FUN_020c7bec((void *)WORD(0x210));
    WORD(0x210) = 0; WORD(0x210) = 0;
    WORD(0x5e8) = 0;
    WORD(0x5ec) = 0;
    WORD(0x5e4) = 0;
    FUN_020c7bec((void *)WORD(0x5e0));
    WORD(0x5e0) = 0; WORD(0x5e0) = 0;
    WORD(0x5f8) = 0;
    WORD(0x5fc) = 0;
    WORD(0x5f4) = 0;
    FUN_020c7bec((void *)WORD(0x5f0));
    WORD(0x5f0) = 0; WORD(0x5f0) = 0;
    FUN_020ce110(self);
    result = FUN_020ce0dc(&state);
    if (result) { FUN_020c92e4(&state); return result; }
    WORD(0x234) = 2;
    while (WORD(0x5c4)) FUN_020ce7d0(self, (void *)WORD(0x5c4));
    WORD(0x5c4) = 0;
    WORD(0x5d0) = 0;
    FUN_020cf928(self, FUN_020c9334, 0);
    WORD(0x19c) = 0;
    WORD(0x1a0) = 0;
    WORD(0x198) = 0;
    WORD(0x238) = 0;
    WORD(0x5bc) = 0;
    WORD(0x5d4) = 0;
    WORD(0x23c) = -1;
    state[0x3b8] = 0;
    state[0x4b8] = 0;
    WORD(0x630) = 0;
    return 0;
}
