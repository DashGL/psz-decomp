// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xd8, exact bytes and relocation targets.
// flags: -O4,s
extern void FUN_overlay_12__02131d80(void *, void *, int);
extern void *FUN_overlay_12__0212079c(void *);
extern void *FUN_overlay_12__0211f1b4(void *);
extern void *FUN_overlay_12__0211ee78(void *);
extern int FUN_02084ce8(const void *);
extern int *FUN_02078cb8(void);
extern void *FUN_0208f068(void);
extern int FUN_0208ef48(void *, const void *, int);
extern void FUN_overlay_12__0211f138(void *, void *);

int *FUN_overlay_12__02121524(int *self)
{
    void *mgr;

    FUN_overlay_12__02131d80(self, *(void **)0x0213f2fc, 0);
    self[0] = 0x0213d4b8;
    FUN_overlay_12__0212079c((char *)self + 0x40);
    FUN_overlay_12__0211f1b4((char *)self + 0x48);
    FUN_overlay_12__0211ee78((char *)self + 0xc34);
    self[803] = 0;
    self[804] = -1;
    self[805] = -1;
    self[806] = 0;
    self[807] = 0;
    self[808] = 0;
    self[809] = 0;
    self[810] = -1;
    self[811] = -1;
    self[812] = -1;
    self[813] = -1;
    self[814] = FUN_02084ce8((const void *)0x0211a51c);
    self[815] = (FUN_02078cb8()[2] >= 0) ? 1 : 0;
    mgr = FUN_0208f068();
    if (mgr) {
        self[813] = FUN_0208ef48(mgr, (const void *)0x0213d4f4, 16);
    }
    self[804] = 0;
    FUN_overlay_12__0211f138((char *)self + 0xc34, (char *)self + 0x48);
    return self;
}
