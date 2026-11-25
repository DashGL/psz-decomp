// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x70, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern int DAT_02108c1c;
extern void FUN_020300e4(void);
extern char *FUN_0202e424(void);
extern int FUN_020300f8(void *);
extern int FUN_020548c0(void *, char *, char *, int);
extern void FUN_02030148(void *);
void FUN_0202fde8(void) {
    char *r4 = FUN_0202e424();
    if (r4 == 0) {
        return;
    }
    if (*(int *)(r4 + 0x2260) != 9) {
        return;
    }
    if ((unsigned char)r4[0x226b] == 1) {
        return;
    }
    if (FUN_020300f8(&DAT_02108c1c) == 0) {
        return;
    }
    if (FUN_020548c0((void *)FUN_020300e4, r4 + 0x2144, r4 + 0xf00, 0) == 2) {
        return;
    }
    FUN_02030148(&DAT_02108c1c);
}
