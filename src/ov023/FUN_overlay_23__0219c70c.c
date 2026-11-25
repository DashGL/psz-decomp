// FUN_overlay_23__0219c70c @ 0x0219c70c (0x15c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch1.json; original draft retained for referenced provenance.
// FUN_overlay_23__0219c70c.c
// check: vers=2.0/sp2p3 target=0x15c candidate=0x15c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern int DAT_020fc988;
extern int DAT_0219db5c;
extern int DAT_0219db58;
extern int DAT_0219db54;
extern int DAT_0219db50;
extern int DAT_0219db40;
extern int DAT_0219db3c;
extern int DAT_0219db24;
extern int DAT_0219db20;
extern int DAT_0219db38;
extern int DAT_0219db34;
extern int DAT_0219db1c;
extern int DAT_0219db18;
extern int DAT_0219db14;
extern int DAT_0219db10;

extern int FUN_02036c34(void *owner);
extern int FUN_overlay_23__0219bd88(void *state);
extern void FUN_02037924(void *state);
extern int FUN_020866b4(int target_id, void *out_pos);
extern void FUN_02086d60(int *out_val, const int *min_val, const int *max_val);
extern int FUN_02035b60(int range);
extern void FUN_overlay_23__0219c6d4(void *self);

void FUN_overlay_23__0219c70c(char *self) {
    int dt = FUN_02036c34(*(void **)(self + 4));
    char *state = *(char **)(self + 8);
    int flag;

    if (FUN_overlay_23__0219bd88(state) != 0) {
        *(int *)(self + 0x2c) = 1;
    }

    if (*(int *)(self + 0x2c) != 0) {
        *(int *)(self + 0x40) = DAT_020fc988;
        *(int *)(self + 0x58) = DAT_020fc988;
        *(int *)(self + 0x24) -= dt;
        flag = !(*(int *)(self + 0x24) >= DAT_020fc988);
        if (flag != 0 && *(int *)(self + 0x30) == 0) {
            FUN_02037924(state);
        }
    } else {
        *(int *)(self + 0x18) += dt;
        if (*(int *)(self + 0x4c) == 0 || (flag = !(*(int *)(self + 0x18) < *(int *)(self + 0x1c))) != 0) {
            int tmp0;
            int tmp1;

            FUN_020866b4(*(int *)(state + 0x64), self + 0xc);
            FUN_02086d60(&tmp0, &DAT_0219db5c, &DAT_0219db58);
            *(int *)(self + 0x34) = tmp0;
            FUN_02086d60(&tmp1, &DAT_0219db54, &DAT_0219db50);
            *(int *)(self + 0x40) = tmp1;
            *(int *)(self + 0x4c) = (FUN_02035b60(2) == 0) ? 1 : 2;
            if ((unsigned int)FUN_02035b60(100) < 75u) {
                int tmp2;
                int tmp3;
                FUN_02086d60(&tmp2, &DAT_0219db40, &DAT_0219db3c);
                *(int *)(self + 0x58) = tmp2;
                FUN_02086d60(&tmp3, &DAT_0219db24, &DAT_0219db20);
                *(int *)(self + 0x1c) = tmp3;
            } else {
                int tmp4;
                int tmp5;
                FUN_02086d60(&tmp4, &DAT_0219db38, &DAT_0219db34);
                *(int *)(self + 0x58) = tmp4;
                FUN_02086d60(&tmp5, &DAT_0219db1c, &DAT_0219db18);
                *(int *)(self + 0x1c) = tmp5;
            }
            *(int *)(self + 0x18) = DAT_020fc988;
        }

        *(int *)(self + 0x20) -= dt;
        flag = !(*(int *)(self + 0x20) > DAT_020fc988);
        if (flag != 0) {
            int tmp6;
            FUN_overlay_23__0219c6d4(self);
            FUN_02086d60(&tmp6, &DAT_0219db14, &DAT_0219db10);
            *(int *)(self + 0x20) = tmp6;
        }
    }
}
