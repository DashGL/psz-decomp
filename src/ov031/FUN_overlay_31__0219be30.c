// FUN_overlay_31__0219be30 @ 0x0219be30 (0x13c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch1.json; original draft retained for referenced provenance.
// FUN_overlay_31__0219be30.c
// check: vers=2.0/sp2p3 target=0x13c candidate=0x13c words=0 exact_bytes=0 bad_relocs=0
typedef unsigned long long u64;

extern char *DAT_0210e24c;
extern int DAT_0211a51c;
extern u64 DAT_0211c844[3];

extern int FUN_02072a70(void *mgr, int flag);
extern int FUN_02084d00(void *net_mgr);
extern u64 FUN_0200a380(u64 a, u64 b);
extern unsigned short FUN_overlay_31__0219b6bc(void *owner);
extern void FUN_overlay_31__0219a9d8(void *owner, int cmd, int arg, unsigned short rot);
extern int FUN_020868f0(void *pos);
extern void FUN_02037910(void *self, void *next_state);

void FUN_overlay_31__0219be30(char *self) {
    char *owner = *(char **)(self + 4);
    int flag = !!(*(int *)(owner + 0xd4) & 2);

    if (flag == 0) {
        int count = FUN_02072a70(DAT_0210e24c + 0x74, 1);
        if (count < *(int *)(self + 0x6c)) {
            *(int *)(self + 0x6c) = count;
            if (count <= 1 && (flag = !!(*(int *)(owner + 0xd4) & 1)) == 0) {
                *(int *)(self + 0x58) = 4;
            } else {
                *(int *)(self + 0x58) = 3;
            }
        }
        *(int *)(self + 0x6c) = count;
    }

    if (FUN_02084d00(&DAT_0211a51c) == 1 && *(int *)(self + 0x58) != 0) {
        if (*(int *)(self + 0x58) == 8) {
            u64 *q = DAT_0211c844;
            u64 acc = q[2] + FUN_0200a380(q[1], q[0]);
            q[0] = acc;
            *(int *)(self + 0x68) = (int)(FUN_0200a380(acc >> 32, 3) >> 32) + 2;
            *(unsigned short *)(self + 0x66) = FUN_overlay_31__0219b6bc(owner);
        } else {
            *(int *)(self + 0x68) = 0;
            *(unsigned short *)(self + 0x66) = 0;
        }
        FUN_overlay_31__0219a9d8(owner, *(int *)(self + 0x58), *(int *)(self + 0x68), *(unsigned short *)(self + 0x66));
        *(int *)(self + 0x58) = 0;
    }

    flag = !(*(int *)(self + 8) != *(int *)(self + 0x10));
    if (flag != 0) {
        void *next = 0;
        switch (*(int *)(self + 0x5c)) {
        case 1:
            next = *(void **)(self + 0x38);
            break;
        case 2:
            *(int *)(self + 0x60) = FUN_020868f0(*(char **)(self + 4) + 0x38);
            next = *(void **)(self + 0x3c);
            break;
        case 3:
            next = *(void **)(self + 0x40);
            break;
        case 4:
            next = *(void **)(self + 0x44);
            break;
        case 5:
            next = *(void **)(self + 0x48);
            break;
        case 6:
            next = *(void **)(self + 0x4c);
            break;
        case 7:
            next = *(void **)(self + 0x50);
            break;
        case 8:
            next = *(void **)(self + 0x54);
            break;
        case 0:
            break;
        }
        if (next != 0) {
            FUN_02037910(self, next);
            *(int *)(self + 0x58) = 0;
            *(int *)(self + 0x5c) = 0;
        }
    }
}
