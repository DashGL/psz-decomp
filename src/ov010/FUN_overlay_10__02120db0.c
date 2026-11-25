// FUN_overlay_10__02120db0 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_10__02120db0 @ 0x02120db0 (code 0x144, thumb)
// check: vers=2.0/sp2p3 target=0x144 candidate=0x144 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
struct Ov10State {
    int unk0;
    int state;
    int mode;
    int param;
    int init_flag;
};
extern void *FUN_overlay_10__0211ec64(void);
extern int FUN_020bbf6c(int);
extern void FUN_overlay_10__0211f2b4(void *, int);
extern void FUN_020c193c(int, int, int, int, int);
extern void FUN_overlay_10__0211f3c4(void *);
extern void FUN_overlay_10__0211ee28(void *);
extern int FUN_overlay_10__0211ef10(void *);
extern int FUN_overlay_10__0211eda4(void *, void *, int);
extern void FUN_overlay_10__02120f88(void *);
extern void FUN_overlay_10__02121010(void *, int);
extern long long FUN_overlay_10__0212106c(void);
extern void FUN_020dd468(void *, int, int);
extern void FUN_020c0cc0(void *, int);
extern void FUN_overlay_10__02120fd4(void *, int);
extern void FUN_overlay_10__02120ef4(struct Ov10State *);
extern void FUN_overlay_10__0211ec8c(void *, int);
extern void FUN_overlay_10__02120f78(void);
extern void FUN_overlay_10__02120f68(void);

int FUN_overlay_10__02120db0(struct Ov10State *self, short *out_cmd)
{
    short buf[10];
    int sub_obj[3];
    void *mgr = FUN_overlay_10__0211ec64();

    if (self->state == 0) {
        if (self->init_flag == 0) {
            if (FUN_020bbf6c(0x100) != 0) {
                FUN_overlay_10__0211f2b4(mgr, 1);
                FUN_020c193c(0, 0, 0, 0, -1);
            } else if (FUN_020bbf6c(0x200) != 0) {
                FUN_overlay_10__0211f2b4(mgr, 0);
                FUN_020c193c(0, 0, 0, 0, -1);
            } else if (FUN_020bbf6c(8) != 0) {
                FUN_overlay_10__0211f3c4(mgr);
                FUN_020c193c(0, 2, 0, 0, -1);
            }
        }

        FUN_overlay_10__0211ee28(mgr);
        self->init_flag = 0;

        switch (FUN_overlay_10__0211ef10(mgr)) {
        case 1:
            if (FUN_overlay_10__0211eda4(mgr, &buf[1], 9) > 0) {
                if (self->mode == 0) {
                    FUN_overlay_10__02120f88(&buf[1]);
                } else if (self->mode == 1) {
                    FUN_overlay_10__02121010(&buf[1], self->param);
                } else if (self->mode == 2) {
                    long long pair = FUN_overlay_10__0212106c();
                    FUN_020dd468(sub_obj, (int)pair, (int)(pair >> 32));
                    FUN_020c0cc0(sub_obj, 1);
                    FUN_overlay_10__02120fd4(&buf[1], self->param);
                }
                self->state = 1;
                FUN_overlay_10__02120ef4(self);
            } else {
                FUN_overlay_10__0211ec8c(mgr, 0);
            }
            break;
        case 2:
            out_cmd[0] = 5;
            if (self->mode == 1) {
                out_cmd[1] = 2;
                *(int *)(out_cmd + 2) = self->param;
                FUN_overlay_10__02120f78();
            } else {
                out_cmd[1] = 0;
                FUN_overlay_10__02120f68();
            }
            return self->state = 1;
        }
    } else {
        FUN_overlay_10__0211ee28(mgr);
    }

    return 0;
}
