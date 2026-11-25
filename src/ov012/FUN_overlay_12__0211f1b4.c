// flags: -O4,s
extern void FUN_020b3044(void *);
extern void FUN_overlay_12__0211f13c(void *);
extern void FUN_overlay_12__0211f14c(void *);
extern void FUN_overlay_12__0211f17c(void *);
extern void FUN_overlay_12__0211f188(void *);
extern void FUN_0200c938(void *, unsigned int);
extern void FUN_overlay_12__0212c824(int);
extern void FUN_overlay_12__02131b70(int);
extern void FUN_overlay_12__02120530(void *);
extern void *DAT_overlay_12__0213ec84;
void *FUN_overlay_12__0211f1b4(int *self) {
    char *p;
    int i;
    self[0] = -1; self[1] = 0; self[2] = 0; self[3] = 0; self[4] = 0;
    self[5] = 0; self[6] = 0; self[7] = 0; self[8] = 0; self[9] = 0;
    FUN_020b3044(self + 10);
    self[12] = -1;
    p = (char *)self + 0x34;
    do {
        FUN_overlay_12__0211f13c(p);
        p += 12;
    } while (p < (char *)self + 0x1b4);
    self[0x6d] = 0;
    p = (char *)self + 0x1b8;
    do {
        ((int *)p)[0] = -1;
        ((int *)p)[1] = -1;
        p += 8;
    } while (p < (char *)self + 0x2b8);
    self[0xae] = 0;
    FUN_0200c938(self + 0xaf, 12);
    p = (char *)self + 0x2c8;
    do {
        FUN_overlay_12__0211f14c(p);
        p += 0x120;
    } while (p < (char *)self + 0xbc8);
    self[0xbc8 / 4] = 0;
    FUN_overlay_12__0211f17c((char *)self + 0xbcc);
    self[0xbdc / 4] = 0;
    self[0xbe0 / 4] = 0;
    self[0xbe4 / 4] = 0;
    self[0xbe8 / 4] = 0;
    for (i = 0; i < 8; i++) FUN_overlay_12__0211f188((char *)self + 0x2c8 + i * 0x120);
    for (i = 0; i < 3; i++) self[0xaf + i] = 0;
    FUN_overlay_12__0212c824(0);
    FUN_overlay_12__02131b70(0);
    FUN_overlay_12__02120530(self);
    if (!DAT_overlay_12__0213ec84) DAT_overlay_12__0213ec84 = self;
    return self;
}
