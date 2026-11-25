// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets.
struct S260 { int a[65]; };
extern void FUN_02003c8c(struct S260 *, int);
extern void FUN_020d8e54(int, int, struct S260);

void FUN_020d8b48(int a, int b, int c, int d) {
    struct S260 s;
    s.a[64] = d;
    FUN_02003c8c(&s, c);
    FUN_020d8e54(a + 0x4c, b, s);
}
