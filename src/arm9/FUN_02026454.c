// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x74, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern int FUN_02026308(void *);
extern void FUN_02066f0c(void *, int, int);
extern void FUN_02067184(void *);
extern void FUN_020666f8(void *, void *, void *, int, int, int);
extern void FUN_02066a94(void *);
extern void FUN_020260c0(void);
int FUN_02026454(int a, char *b, unsigned char *c) {
    int r4 = FUN_02026308(c);
    FUN_02066f0c(b, a, c[3]);
    FUN_02067184(b + 0xe0);
    FUN_020666f8(b + 0x20, (void *)FUN_020260c0, b, a + r4, *(unsigned short *)c, c[2]);
    FUN_02066a94(b + 0x20);
    return a + r4;
}
