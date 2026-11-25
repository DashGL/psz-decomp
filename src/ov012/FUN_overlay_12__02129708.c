// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xe0, exact bytes and relocation targets.
// flags: -O4,s
extern unsigned int FUN_overlay_12__0212947c(void *);
extern void *FUN_02086e3c(void);
extern int FUN_0208728c(void *), FUN_02087254(void *), FUN_020872c4(void *);
extern void FUN_overlay_12__021295e8(void *, int);
extern int FUN_overlay_12__02125fd8(void *);

int FUN_overlay_12__02129708(int *self)
{
    int ready = (*(int *)0x0213f2e0 == 0) ? 1 : 0;

    switch (self[3]) {
    case 0:
        if (ready && FUN_overlay_12__0212947c(self)) {
            ready = 0;
            self[3] = 1;
        }
        break;
    case 1:
        if ((self[1] == 0) ? FUN_0208728c(FUN_02086e3c()) : FUN_02087254(FUN_02086e3c())) {
            FUN_overlay_12__021295e8(self, 1);
            self[3] = 2;
        } else {
            FUN_overlay_12__021295e8(self, 3);
            self[3] = 3;
        }
        return 0;
    case 2:
        if (self[8]) {
            ((int *)self[8])[24] |= 4;
            if (!FUN_020872c4(FUN_02086e3c())) {
                self[6] = 0;
                FUN_overlay_12__021295e8(self, 4);
                return 1;
            }
        }
        return 0;
    case 3:
        if (self[8] && FUN_overlay_12__02125fd8((void *)self[8]) >= 0) {
            return 1;
        }
        return 0;
    case 4:
        if (self[8] && FUN_overlay_12__02125fd8((void *)self[8]) >= 0) {
            return 1;
        }
        return 0;
    }
    return ready;
}
