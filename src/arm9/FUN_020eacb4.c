// FUN_020eacb4 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_020eacb4 @ 0x020eacb4 (0x2e, thumb)
// check: 2.0/sp2p3 target=0x2e candidate=0x2e words=0 exact_bytes=0 bad_relocs=0
extern int FUN_020eab5c(void *);
extern int FUN_020e9f4c(void *, int);

int FUN_020eacb4(int a) {
    int buf[5];
    if (FUN_020eab5c(buf) == 0) {
        return 0;
    }
    if (FUN_020e9f4c(buf, a) != 0) {
        return 1;
    }
    return 0;
}
