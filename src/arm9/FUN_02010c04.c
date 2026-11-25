// flags: -O4,p -noThumb
struct Item10c04 {
    int f00;
    int f04;
    void *f08;
    int f0c;
    int f10;
    void *f14[6];
    int f2c;
};
struct Player10c04 {
    char pad[0x11c];
    int num;
};
struct Thread10c04 {
    char pad[0x4c0];
    char lock[0x20];
    char list[0x20];
};

extern int DAT_02103160[];
extern struct Thread10c04 DAT_02102c80;
extern struct Thread10c04 *DAT_021028b4[];

extern struct Item10c04 *FUN_02011b20(void *, struct Item10c04 *);
extern void FUN_020656b8(void *, int, int);
extern void FUN_02011ac0(void *, struct Item10c04 *);
extern void FUN_02010b3c(struct Item10c04 *);
extern struct Item10c04 *FUN_02010afc(void);
extern void FUN_020119b8(void *, struct Item10c04 *);
extern void FUN_02066a2c(void *);

void FUN_02010c04(int a0, int a1, void **a2, int a3, int a4, void *arg) {
    struct Player10c04 *player = (struct Player10c04 *)arg;
    struct Item10c04 *item; struct Thread10c04 *target; int i;
    (void)a4;
    if (player->num >= 2) {
        struct Item10c04 *old;
        int ch;
        for (old = FUN_02011b20(DAT_02103160, 0); old != 0; old = FUN_02011b20(DAT_02103160, old)) {
            if (old->f08 == player) break;
        }
        for (ch = 0; ch < old->f10; ch++) {
            FUN_020656b8(old->f14[ch], 0, old->f2c);
        }
        FUN_02011ac0(DAT_02103160, old);
        player->num--;
        FUN_02010b3c(old);
    }
    item = FUN_02010afc();
    item->f08 = player;
    item->f0c = a0;
    item->f10 = a1;
    for (i = 0; i < a1; i++) {
        item->f14[i] = a2[i];
    }
    item->f2c = a3;
    target = &DAT_02102c80; if (a0 == 0 && DAT_021028b4[1] != 0) target = DAT_021028b4[1];
    player->num++;
    FUN_020119b8(target->list, item);
    FUN_02066a2c(target->lock);
}
