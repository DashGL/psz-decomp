// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x7c, exact bytes and relocation targets.
// flags: -O4,s
typedef struct {
    char pad[0x7c];
    unsigned int f7c;
} G_6e454;
extern void FUN_020197fc(void *);
extern void FUN_0206564c(void *, void *);
extern void FUN_0201982c(void *);
extern void FUN_02019784(void);
extern void FUN_0201c5fc(int, int, int, int);
extern char DAT_021057d8[];
extern G_6e454 DAT_0210579c;
void FUN_0206e454(char *a) {
    if (*(int *)(a + 0x1c) != 0 && (*(int *)(a + 0x18) & 1)) {
        FUN_020197fc(a + 0x6c);
        FUN_0206564c(a + 0x90, DAT_021057d8);
        DAT_0210579c.f7c &= ~0xa4u;
        FUN_0201982c(a + 0x78);
        FUN_02019784();
        if (*(void (**)(int))(a + 0xb8) != 0) {
            (*(void (**)(int))(a + 0xb8))(*(int *)(a + 0xc0));
        }
        FUN_0201c5fc(*(int *)(a + 0x1c), *(int *)(a + 0xcc), *(int *)(a + 0xd0), 1);
        if (*(void (**)(int))(a + 0xbc) != 0) {
            (*(void (**)(int))(a + 0xbc))(*(int *)(a + 0xc4));
        }
    }
}
