// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xe4, exact bytes and relocation targets.
// flags: -O4,s
extern unsigned int FUN_overlay_12__02133150(void *, const void *);
extern int FUN_overlay_12__021331fc(void *, const void *, const void *);
extern void FUN_02039534(void *, const void *);
extern void FUN_overlay_12__02133110(void *, const void *);

void FUN_overlay_12__0213302c(char *self, const void *item, const void *aux)
{
    if (*(int *)(self + 0xfa0) < 100) {
        int ins = -1;
        int i;

        for (i = 0; i < *(int *)(self + 0xfa0); i++) {
            unsigned int k_existing = FUN_overlay_12__02133150(self, self + i * 0x28);
            unsigned int k_new = FUN_overlay_12__02133150(self, item);

            if (k_existing > k_new) {
                ins = i;
                break;
            }
            if (k_existing == k_new && FUN_overlay_12__021331fc(self, self + i * 0x28, item)) {
                ins = i;
                break;
            }
        }
        if (ins >= 0) {
            for (i = *(int *)(self + 0xfa0); i > ins; i--) {
                char *prev = self + (i - 1) * 0x28;
                char *curr = self + i * 0x28;

                FUN_02039534(curr, prev);
                FUN_overlay_12__02133110(curr + 0x10, prev + 0x10);
            }
            FUN_02039534(self + ins * 0x28, item);
            FUN_overlay_12__02133110(self + ins * 0x28 + 0x10, aux);
        } else {
            FUN_02039534(self + *(int *)(self + 0xfa0) * 0x28, item);
            FUN_overlay_12__02133110(self + *(int *)(self + 0xfa0) * 0x28 + 0x10, aux);
        }
        (*(int *)(self + 0xfa0))++;
    }
}
