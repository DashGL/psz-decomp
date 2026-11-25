// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x60, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern const void *D_020f6a18;
extern const void *D_020f6a1c;
extern const void *D_020f6a20;
extern void FUN_02029c48(char *, const void *, void *);
extern void FUN_02065774(char *, void *, int);
void FUN_02029ce4(void *a) {
    char buf[0x30];
    FUN_02029c48(buf, &D_020f6a18, a);
    FUN_02029c48(buf + 0x10, &D_020f6a1c, a);
    FUN_02029c48(buf + 0x20, &D_020f6a20, a);
    FUN_02065774(buf, a, 0x30);
}
