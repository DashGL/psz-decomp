// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x5c, exact bytes and relocation targets.
// flags: -noThumb
typedef struct {
    unsigned short f0;
    unsigned short f2;
    unsigned int f4;
} S_2803c;
extern int FUN_02026538(void *, unsigned short, unsigned int);
int FUN_0202803c(void *a, S_2803c *b) {
    unsigned short v2 = b->f2;
    unsigned int v4 = b->f4;
    return FUN_02026538(a,
        (unsigned short)(((v2 >> 8) & 0xff) | ((v2 << 8) & 0xff00)),
        ((v4 >> 24) & 0xff) | ((v4 >> 8) & 0xff00) | ((v4 << 8) & 0xff0000) | ((v4 << 24) & 0xff000000u));
}
