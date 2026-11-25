// flags: -O4,s
extern void FUN_02075068(void *, int);
extern void FUN_02072724(void *, int);
extern void *FUN_02035518(void *);
extern void FUN_020ba8ac(void *);
extern int DAT_0219be9c;
struct Obj {
    int vtbl;
    int pad[53];
    int entries[3][6];
    int f72, f73, f74;
};
void *FUN_overlay_29__0219a61c(struct Obj *self) {
    int i;
    self->vtbl = (int)&DAT_0219be9c;
    for (i = 0; i < 3; i++) {
        if (self->entries[i][0] != -1) { FUN_02075068(self, self->entries[i][0]); self->entries[i][0] = -1; }
        if (self->entries[i][1] != -1) { FUN_02072724(self, self->entries[i][1]); self->entries[i][1] = -1; }
    }
    if (self->f72 != -1) { FUN_02072724(self, self->f72); self->f72 = -1; }
    if (self->f73 != -1) { FUN_02072724(self, self->f73); self->f73 = -1; }
    if (self->f74 != -1) { FUN_02075068(self, self->f74); self->f74 = -1; }
    FUN_02035518(self);
    FUN_020ba8ac(self);
    return self;
}
