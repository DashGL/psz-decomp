// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x70, exact bytes and relocation targets.
// flags: -O4,p
typedef struct {
    char pad[0x7c];
    unsigned int f7c;
} G_6e5d8;
typedef struct {
    char pad[0x18];
    unsigned int f18;
    int f1c;
    int f20;
    char f24[0x48];
    char f6c[0xc];
    char f78[0x18];
    char f90[0x28];
    void (*fb8)(int);
    void (*fbc)(int);
    int fc0;
    int fc4;
} S_6e5d8;
extern int DAT_021057d8;
extern G_6e5d8 DAT_0210579c;
extern void FUN_020197fc(char *);
extern void FUN_0206564c(char *, int *);
extern void FUN_0201982c(char *);
extern void FUN_02019784(void);
extern void FUN_0201a178(char *);
void FUN_0206e5d8(S_6e5d8 *a) {
    if (a->f1c != 0 && (a->f18 & 1) != 0) {
        FUN_020197fc(a->f6c);
        FUN_0206564c(a->f90, &DAT_021057d8);
        DAT_0210579c.f7c &= ~0xa4u;
        FUN_0201982c(a->f78);
        FUN_02019784();
        if (a->fb8 != 0) {
            a->fb8(a->fc0);
        }
        FUN_0201a178(a->f24);
        if (a->fbc != 0) {
            a->fbc(a->fc4);
        }
    }
}
