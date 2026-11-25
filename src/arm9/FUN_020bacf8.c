// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x56, exact bytes and relocation targets.
//cpp
// flags: -O4,s
struct VObj_020bacf8 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    char pad[0x9];
    signed char fd[3];
    char pad2[0x30];
    int f40[3];
    int f4c;
};
extern "C" {
void FUN_020baea8(VObj_020bacf8 *);
void FUN_020bacdc(VObj_020bacf8 *);
void FUN_020badc8(VObj_020bacf8 *, int);
void FUN_020bae04(VObj_020bacf8 *);
void FUN_020bacf8(VObj_020bacf8 *a) {
    if (a->f4c == 3) {
        a->m2();
        return;
    }
    FUN_020baea8(a);
    switch (a->f4c) {
    case 1: {
        int i;
        FUN_020bacdc(a);
        for (i = 0; i < 3; i++) {
            if (a->fd[i] == 1) {
                FUN_020badc8(a, a->f40[i]);
            }
        }
        break;
    }
    case 2:
        FUN_020bacdc(a);
        FUN_020bae04(a);
        break;
    }
}
}
