// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x68, exact bytes and relocation targets.
// flags: -O4,s
typedef struct {
    int x;
    int y;
    int z;
} Vec3_94638;
extern int DAT_0211a5c4;
extern unsigned short FUN_02070810(char *, Vec3_94638 *);
extern void FUN_0208d5fc(int *, int, Vec3_94638 *, int, unsigned short, unsigned short);
extern void FUN_0206f150(char *, int, int);
void FUN_02094638(char *a, int b, Vec3_94638 *c) {
    if (a != 0) {
        Vec3_94638 sp8;
        int z = c->z;
        int y = c->y;
        int x = c->x;
        sp8.x = x;
        sp8.y = y;
        sp8.z = z;
        FUN_02070810(a, &sp8);
        if (*(unsigned short *)(a + 0x138) % 10 == 0) {
            FUN_0208d5fc(&DAT_0211a5c4, *(int *)(a + 0xfc), c, b, *(unsigned short *)(a + 0x13e), *(unsigned short *)(a + 0xc2));
        }
        FUN_0206f150(a, b, *(int *)(a + 0x10c));
    }
}
