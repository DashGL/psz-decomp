// FUN_overlay_14__02120654 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_14__02120654 @ 0x02120654 (code 0xac, thumb)
// check: vers=2.0/sp2p3 target=0xac candidate=0xac words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern void FUN_overlay_14__0212026c(void *, void *);
extern void FUN_overlay_14__0212072c(void *);
extern void FUN_020c4434(void *);
extern void FUN_overlay_14__02120810(void *, void *);
extern void FUN_overlay_14__02120584(void *, int, void *);
extern void FUN_overlay_14__021205ec(void *, int, int);

void FUN_overlay_14__02120654(unsigned char *self)
{
    unsigned char buf[0x64];
    int v50;

    if (*(int *)(self + 0x90) != 0) {
        FUN_overlay_14__0212026c(self, self + 0x54);
        FUN_overlay_14__0212072c(self + 0x54);
        *(int *)(self + 0x90) = 0;
    }

    v50 = *(int *)(self + 0x50);
    if (v50 != *(int *)(self + 0x4c)) {
        int flag;
        *(int *)(self + 0x4c) = v50;
        flag = !self[0x57];
        if (flag == 0) {
            int i;
            FUN_020c4434(buf);
            FUN_020c4434(buf + 0x10);
            FUN_overlay_14__02120810(self + 0x54, buf);
            FUN_overlay_14__02120584(self, *(int *)(self + 0x4c), buf);
            for (i = 0; i < 3; i++) {
                FUN_overlay_14__021205ec(self, i, i == *(int *)(self + 0x4c) ? 1 : 0);
            }
            *(int *)(self + 0x90) = 1;
        } else {
            int i;
            for (i = 0; i < 3; i++) {
                FUN_overlay_14__021205ec(self, i, 0);
            }
            *(int *)(self + 0x90) = 1;
        }
    }
}
