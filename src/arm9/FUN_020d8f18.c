// FUN_020d8f18 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_020d8f18 @ 0x020d8f18 (0x2c, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
extern void FUN_020c6e28(int, int *);

void FUN_020d8f18(int *p, int b, ...) {
    FUN_020c6e28(p[1], &b);
    (*(void (**)(int *, int, int, int))((char *)p + 0x488))(p, 0, b, *(int *)((char *)p + 0x494));
}
