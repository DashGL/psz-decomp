// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x68, exact bytes and relocation targets.
// FUN_02080130: full 0x68 bytes + relocation targets verified 2.0/sp2p3.
// Provenance: notes/sessions/resume-upper-cpp-provenance-2026-11-12.md

// flags: -O4,s
typedef struct {
    char pad[0x7c];
    unsigned int f7c;
} G_80130;

extern int DAT_021057d8[];
extern G_80130 DAT_0210579c;
void FUN_02080330(void *);
void FUN_020197fc(void *);
void FUN_0206564c(void *, void *);
void FUN_0201982c(void *);
void FUN_02019784(void);
void FUN_0204c048(void *);
void FUN_0206e728(int, void *);
void FUN_02080130(char *a) {
    FUN_02080330(a);
    FUN_020197fc(a + 0x5c);
    FUN_0206564c(a + 0x70, DAT_021057d8);
    DAT_0210579c.f7c &= ~0xa4u;
    FUN_0201982c(a + 0x50);
    FUN_02019784();
    FUN_0204c048(a);
    if ((((unsigned char)a[0xfd] & 1) ? 1 : 0) == 0) {
        int *p = *(int **)(a + 0x30);
        p[6] &= ~0x10u;
        FUN_0206e728((int)p, (void *)FUN_0204c048);
    }
}

