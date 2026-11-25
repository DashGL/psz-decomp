// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x84, exact bytes and relocation targets.
// flags: -O4,s
struct S8 { int a, b; };
struct S16 { int a, b, c, d; };
extern char DAT_020f2910[];
extern struct S16 DAT_020f2928;
extern char DAT_020fa388[];
extern char DAT_020fa390[];
void FUN_020038ec(char *buf, int max, const char *fmt, ...);

void FUN_020798d4(int *a, char *b) {
    struct S8 sp10 = *(struct S8 *)(DAT_020f2910 + 0x10);
    struct S16 sp18 = DAT_020f2928;
    char sp8[8];
    FUN_020038ec(sp8, 8, DAT_020fa388, *a);
    int r3 = (sp8[1] != 0x30);
    int r1;
    if (sp8[2] == 0x30) {
        r1 = 0;
    } else if (sp8[2] == 0x31) {
        r1 = 1;
    } else if (sp8[2] == 0x32) {
        r1 = 2;
    } else {
        r1 = 3;
    }
    FUN_020038ec(b, 0x40, DAT_020fa390, ((int *)&sp10)[r3], ((int *)&sp18)[r1], sp8);
}
