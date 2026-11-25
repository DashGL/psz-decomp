// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x68, exact bytes and relocation targets.
// flags: -O4,p
typedef struct {
    unsigned char f0;
    char pad[0xb];
} Elem_e9140;
extern Elem_e9140 DAT_0211de84[];
extern void FUN_020d6724(void *, int);
void FUN_020e9140(int a, void *b) {
    int i;
    switch (a) {
    case 0:
        FUN_020d6724(b, 8);
        FUN_020d6724(b, 0xa);
        FUN_020d6724(b, 0x32);
        FUN_020d6724(b, 0x33);
        FUN_020d6724(b, 0x34);
        FUN_020d6724(b, 0x35);
        FUN_020d6724(b, 0x36);
        for (i = 0; i < 0x9a; i++) {
            if (DAT_0211de84[i].f0 != 0) {
                FUN_020d6724(b, DAT_0211de84[i].f0);
            }
        }
        break;
    case 1:
    case 2:
        break;
    }
}
