// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x5c, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern char *D_02108c0c;
extern void FUN_0202f5c8(void);
extern int FUN_02053d84(void *);
extern void FUN_0202e834(int);
extern void FUN_0202e79c(int, int, int, int);
void FUN_0202e984(void) {
    char *p = D_02108c0c;
    if (*(unsigned char *)(p + 0x226b) != 0) {
        return;
    }
    *(unsigned char *)(p + 0x226b) = 1;
    if (FUN_02053d84((void *)FUN_0202f5c8) == 2) {
        return;
    }
    FUN_0202e834(0xb);
    FUN_0202e79c(7, 0, 0, 0x610);
}
