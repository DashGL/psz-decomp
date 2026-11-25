// flags: -O4,s
extern unsigned long long DAT_0211c844[3];
extern int DAT_0219c360[4];
extern int DAT_020fc988;
extern int DAT_020ed09c;
extern int DAT_020ed0a0;
extern void FUN_overlay_27__02199790(void *);
extern void FUN_overlay_27__021997bc(void *);
void FUN_overlay_27__02198e14(int *self) {
    unsigned long long next;
    void *owner = (void *)self[1];
    FUN_overlay_27__02199790(owner);
    FUN_overlay_27__021997bc(owner);
    next = DAT_0211c844[1] * DAT_0211c844[0] + DAT_0211c844[2];
    DAT_0211c844[0] = next;
    self[4] = DAT_0219c360[3] + (unsigned int)(((next >> 32) * 0x78000ull) >> 32);
    self[5] = DAT_020fc988;
    self[6] = DAT_020ed09c;
    self[7] = DAT_020ed0a0;
    self[3] = 0;
    self[8] = DAT_020fc988;
    self[9] = 0;
}
