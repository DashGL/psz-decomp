// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x78, exact bytes and relocation targets.
// flags: -O4,p
typedef struct {
    char pad[0x444];
    unsigned char f444;
    char pad2[0xcb0 - 0x445];
    unsigned long long fcb0;
    char pad3[0xd0c - 0xcb8];
    unsigned char b0 : 4;
    unsigned char b4 : 2;
    unsigned char b6 : 2;
    char pad4[0xd13 - 0xd0d];
    unsigned char fd13;
} S_dc414;
extern int FUN_02028360(void);
extern void FUN_020dc648(S_dc414 *);
extern unsigned long long FUN_02067e0c(void);
int FUN_020dc414(S_dc414 *a) {
    if (FUN_02028360() != 0) {
        FUN_020dc648(a);
        if (a->b4 == 1) {
            return 15;
        }
        return 13;
    }
    unsigned long long now = FUN_02067e0c();
    if (((now - a->fcb0) << 6) / 0x01ff6210ULL >= 10) {
        ((S_dc414 *)((char *)a + a->fd13 * 4))->f444 = 1;
        return 11;
    }
    return 12;
}
