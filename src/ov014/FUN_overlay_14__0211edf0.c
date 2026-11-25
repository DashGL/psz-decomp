// flags: -O4,p
extern void FUN_overlay_14__0211fde0(void *, int, int);
extern void FUN_overlay_14__0211fde8(void *);
#pragma thumb off
extern void FUN_0200c594(void *, void (*)(void *), void *);
#pragma thumb on

struct Group_edf0 {
    int pad;
    void *items[4];
    int cur;
};
struct Self_edf0 {
    int f00[3];
    struct Group_edf0 groups[2];
    unsigned char pad[0x94 - 0x3c];
    int disabled;
    int active;
};
struct Guard_edf0 {
    unsigned int pad;
    unsigned int flag;
};
extern struct Guard_edf0 DAT_02122160;
extern unsigned char DAT_02121a04[];
extern unsigned char DAT_02122178[];

void *FUN_overlay_14__0211edf0(struct Self_edf0 *self, int selection) {
    void *result = 0;
    if (self->disabled == 0 && self->active >= 0 && self->active < 2) {
        struct Group_edf0 *group = &self->groups[self->active];
        if (selection >= 0 && selection < 4) result = group->items[selection];
        else if (group->cur >= 0 && group->cur < 4) result = group->items[group->cur];
        else result = 0;
    }
    if (result) return result;
    if (!(DAT_02122160.flag & 1)) {
        FUN_overlay_14__0211fde0(DAT_02121a04, 0, 0);
        FUN_0200c594(DAT_02121a04, FUN_overlay_14__0211fde8, DAT_02122178);
        DAT_02122160.flag |= 1;
    }
    return DAT_02121a04;
}
