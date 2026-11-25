// flags: -O4,s
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;

extern char *FUN_02086e3c(void);
extern void *FUN_020870c4(void *);
extern int FUN_02087138(void *);
extern int FUN_020b028c(void *, void *, int);
extern void FUN_overlay_11__02122fc8(void *);
extern void FUN_overlay_11__02122ff4(void *, void *);
extern void FUN_02087254(void *);
extern void FUN_0206e7a0(void *);
extern int FUN_0206e8e8(void *, void *);
extern int FUN_0206e8c0(void);
extern void FUN_020b0648(void *, int);
extern void FUN_020b054c(void *, int);
extern void FUN_020b05bc(void *, int);

extern s8 DAT_0211a208[];
extern void *DAT_0211a1f4;
extern u8 DAT_02123a50[][16];
extern u8 DAT_021239d8[];
extern u8 DAT_021239e8[][16];
extern u32 DAT_02123a08[3][2][3];

struct Name {
    u16 ch[8];
};

struct CharData {
    struct Name a; /* 0x00 */
    struct Name b; /* 0x10 */
    s8 s[4];       /* 0x20 */
    u8 u[8];       /* 0x24 */
    u8 pad2c[8];   /* 0x2c */
    u32 f34;       /* 0x34 */
    u8 pad38[0x1f];/* 0x38 */
    u8 f57;        /* 0x57 */
    u8 pad58[0xc]; /* 0x58 */
    u8 f64;        /* 0x64 */
    u8 pad65[0xc93];
    struct {
        u32 flag;
        u32 val;
    } slots[2][3]; /* 0xcf8 */
};

void FUN_overlay_11__02123084(struct CharData *self)
{
    u32 item[4];
    struct CharData *player;
    int i, j, k;
    int index;

    if (!FUN_02087138(FUN_02086e3c())) {
        return;
    }
    player = (struct CharData *)FUN_020870c4(FUN_02086e3c());
    FUN_overlay_11__02122fc8(self);

    player->u[0] = self->u[0];
    player->u[1] = self->u[1];
    player->u[2] = self->u[2];
    player->u[3] = self->u[3];
    player->u[4] = self->u[4];
    player->u[5] = self->u[5];
    player->u[6] = self->u[6];
    player->u[7] = self->u[7];

    player->a = self->a;
    player->b = self->b;

    player->s[0] = self->s[0];
    player->s[1] = self->s[1];
    player->s[2] = self->s[2];
    player->s[3] = self->s[3];

    if (DAT_0211a208[1] == 1) {
        player->f64 = 1;
        FUN_02087254(FUN_02086e3c());
        return;
    }
    if (DAT_0211a1f4) {
        FUN_0206e7a0(player);
        FUN_0206e8e8(player, player->pad2c);
        FUN_0206e8c0();
    }

    FUN_overlay_11__02122ff4(self, item);
    index = FUN_020b028c(FUN_02086e3c() + 16, item, 0);
    if (index != -1) {
        FUN_020b0648(FUN_02086e3c(), index);
    }

    if (self->u[0] < 14) {
        index = FUN_020b028c(FUN_02086e3c() + 16, DAT_02123a50[self->u[0]], 0);
        if (index != -1) {
            FUN_020b054c(FUN_02086e3c(), index);
        }
        index = FUN_020b028c(FUN_02086e3c() + 16, DAT_021239d8, 0);
        if (index != -1) {
            FUN_020b05bc(FUN_02086e3c(), index);
        }
    }

    for (i = 0; i < 2; i++) {
        FUN_020b028c(FUN_02086e3c() + 16, DAT_021239e8[i], 0);
    }

    player->f34 = 300;
    if (self->s[2] == 2) {
        player->f57 = 1;
    }
    if (self->s[2] >= 0 && self->s[2] < 3) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 3; k++) {
                player->slots[j][k].val = DAT_02123a08[self->s[2]][j][k];
                player->slots[j][k].flag = 1;
            }
        }
    }
    player->f64 = 1;
    FUN_02087254(FUN_02086e3c());
}
