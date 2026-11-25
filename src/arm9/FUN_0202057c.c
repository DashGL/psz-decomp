// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x60, exact bytes and relocation targets.
// flags: -noThumb
typedef struct {
    int f0[3];
    int fc;
} Node_2057c;
typedef struct {
    int f0[4];
    int f10;
} G_2057c;
extern G_2057c DAT_02107010;
extern Node_2057c *FUN_020204fc(G_2057c *);
extern int FUN_0202051c(G_2057c *);
extern void FUN_02020478(Node_2057c *);
void FUN_0202057c(void) {
    G_2057c *r4 = &DAT_02107010;
    Node_2057c *r5 = FUN_020204fc(r4);
    if (FUN_0202051c(r4) == 0) {
        return;
    }
    do {
        FUN_02020478(r5);
        r4->f10 -= r5->fc;
        r5 = FUN_020204fc(r4);
    } while (FUN_0202051c(r4) != 0);
}
