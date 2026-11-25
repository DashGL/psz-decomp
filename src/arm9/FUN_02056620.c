// flags: -O4,p -noThumb
typedef unsigned int u32;
typedef unsigned char u8;

struct D_021116a0_t {
    u8 pad00[0x1c];
    u32 f1c;
    u32 f20;
    u32 f24;
    u32 f28;
    u8 pad2c[0xec];
    u32 f118;
    u32 f11c;
};

extern struct D_021116a0_t DAT_021116a0;
extern u8 *DAT_020f93ec;
extern void FUN_02056550(void);

extern u32 FUN_02067a74(void);
extern int FUN_020683d4(void);
extern void FUN_02067448(u32, u32);
extern void FUN_0206743c(void);
extern void FUN_020673f0(u32, u32);
extern void FUN_020673d4(u32, u32);
extern void FUN_02067430(void);
extern void FUN_020673a0(void);
extern void FUN_02065c30(u32, void *);
extern void FUN_02065e60(u32);
extern void FUN_02065e00(u32);
extern void FUN_020683e8(int);
extern void FUN_020564fc(void);

int FUN_02056620(u32 *fp) {
    struct D_021116a0_t *r4 = &DAT_021116a0;
    u32 r5;
    int r6 = 0;
    int r7 = 0;
    int r8 = 0;
    u32 sb = r4->f20;
    u32 sl;
    int r1 = 0;
    sl = sb & 0x1f;
    r5 = r4->f24;
    if (sl == 0 && r4->f28 <= 3) {
        r1 = 1;
    }
    if (r1 != 0) {
        u32 sp_val = FUN_02067a74();
        int chk = 1;
        int out_of_itcm = 0;
        u32 end = sb + r5;
        if (!(end <= 0x01ff8000u || sb >= 0x02000000u)) {
            out_of_itcm = 1;
        }
        if (out_of_itcm == 0 && (sp_val >= end || sp_val + 0x4000u <= sb)) {
            chk = 0;
        }
        if (chk == 0) {
            r8 = 1;
        }
    }
    if (r8 != 0 && ((r4->f1c | r5) & 0x1ffu) == 0) {
        r7 = 1;
    }
    if (r7 != 0 && r5 != 0) {
        r6 = 1;
    }
    fp[1] = (*(u32 *)(DAT_020f93ec + 0x60) & ~0x07000000u) | 0xa1000000u;
    if (r6 != 0) {
        int irq = FUN_020683d4();
        if (r5 < r4->f118) {
            FUN_02067448(sb, r5);
        } else {
            FUN_0206743c();
        }
        if (r5 < r4->f11c) {
            if (sl != 0) {
                sb -= sl;
                FUN_020673f0(sb, 0x20);
                FUN_020673f0(sb + r5, 0x20);
                r5 += 0x20;
            }
            FUN_020673d4(sb, r5);
            FUN_02067430();
        } else {
            FUN_020673a0();
        }
        FUN_02065c30(0x80000, (void *)FUN_02056550);
        FUN_02065e60(0x80000);
        FUN_02065e00(0x80000);
        FUN_020683e8(irq);
        FUN_020564fc();
    }
    return r6;
}
