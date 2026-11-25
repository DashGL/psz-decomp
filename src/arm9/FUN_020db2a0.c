// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x58, exact bytes and relocation targets.
// flags: -O4,p
extern char *FUN_020dac74(int);
extern void FUN_020dae58(int);
typedef struct { short f0; short f2; int f4; int f8; } S_db2a0;
void FUN_020db2a0(S_db2a0 *a) {
    char *p = FUN_020dac74(0x10);
    if (a->f0 == 5) {
        if (a->f2 != 0) {
            switch (a->f8) {
            case 0xd:
                p[0xd14] = 1;
                return;
            case 0xf:
                p[0xd14] = 2;
                return;
            case 0x11:
                p[0xd14] = 3;
                return;
            default:
                p[0xd14] = 4;
                return;
            }
        }
    } else if (a->f0 == 7) {
        FUN_020dae58(a->f4);
    }
}
