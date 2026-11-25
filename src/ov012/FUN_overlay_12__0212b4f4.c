// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xda, exact bytes and relocation targets.
// flags: -O4,s
extern char *FUN_02086e3c(void), *FUN_020870c4(void *);
extern void FUN_020b057c(void *), FUN_020b05f0(void *), FUN_020b0684(void *), FUN_020b0714(void *, unsigned char);
extern int FUN_020b0494(void *);
extern void FUN_020b0450(void *, int, int);
extern void *FUN_020b00d0(void *, int);
extern void FUN_020014d4(void *, const void *, unsigned int);
extern void FUN_020b054c(void *, int), FUN_020b05bc(void *, int), FUN_020b0648(void *, int), FUN_020b06d0(void *, int, unsigned char);

void FUN_overlay_12__0212b4f4(int *self)
{
    if (self[0x89]) {
        if (self[0x7e]) {
            char *inv = FUN_02086e3c() + 0x10;
            char *mgr = FUN_02086e3c();
            int i, n, cap;

            FUN_020b057c(mgr);
            FUN_020b05f0(mgr);
            FUN_020b0684(mgr);
            for (i = 0; i < 4; i++) {
                FUN_020b0714(mgr, (unsigned char)i);
            }
            n = FUN_020b0494(inv);
            for (i = 0; i < n; i++) {
                FUN_020b0450(inv, i, -1);
            }
            cap = self[0x87];
            if (*(short *)(inv + 8) >= cap) {
                FUN_020014d4(FUN_020b00d0(inv, 0), (const void *)self[0x7e], cap << 4);
            }
            FUN_020b054c(mgr, self[0x7f]);
            FUN_020b05bc(mgr, self[0x80]);
            FUN_020b0648(mgr, self[0x81]);
            for (i = 0; i < 4; i++) {
                FUN_020b06d0(mgr, self[0x82 + i], (unsigned char)i);
            }
        }
        *(int *)(FUN_020870c4(FUN_02086e3c()) + 0x34) = self[0x88];
    }
}
