// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x70, exact bytes and relocation targets.
// flags: -O4,p
struct S16 { int a, b, c, d; };
void FUN_020d52c8(void *a, int *b);
void *FUN_020c7bcc(int sz);
void FUN_020014d4(void *dst, const void *src, int sz);
void FUN_020d290c(void *s);
void FUN_020d29bc(int a, void *s);
void FUN_020d46e4(int a, void *s);

int FUN_020d31ac(int a, void *b, int c, struct S16 *d) {
    unsigned char sp0[0x20];
    FUN_020d52c8(&b, &c);
    if (c > 0) {
        void *p = FUN_020c7bcc(c);
        *(void **)(a + 0x38) = p;
        if (p == 0) {
            return 1;
        }
        FUN_020014d4(p, b, c);
        *(int *)(a + 0x3c) = c;
    }
    if (d != 0) {
        *(struct S16 *)(a + 0x28) = *d;
    }
    FUN_020d290c(sp0);
    FUN_020d29bc(a + 0x68, sp0);
    FUN_020d46e4(a, sp0);
    *(int *)(a + 0x0c) = 0;
    return 0;
}
