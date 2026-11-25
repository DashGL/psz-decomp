// flags: -O4,s

struct Vec3AB5D8 {
    int x, y, z;
};

struct Vec2AB5D8 {
    int y, z;
};

struct SelfAB5D8 {
    unsigned char pad0[0xb4];
    int fb4;
    int fb8;
    int fbc;
    unsigned char padc0[0xfc - 0xc0];
    int ffc;
    unsigned char pad100[0xb48 - 0x100];
    int fb48;
    int fb4c;
    int fb50;
    unsigned char fb54[0x24];
    int fb78;
    unsigned int fb7c;
    int fb80;
    unsigned char fb84[0x28];
    void *fbac;
};

extern const struct Vec3AB5D8 DAT_020f5158;
extern const int DAT_020f514c[3];
extern void FUN_020bf680(void *, void *, int);
extern void FUN_020c0488(void *);
extern void FUN_020c0484(void *, int);
extern void FUN_02047798(void *, void *);
extern void *FUN_020be450(void);
extern void *FUN_020beccc(void *, void *, int, struct Vec3AB5D8 *, struct Vec2AB5D8 *);
extern void FUN_020be4f8(void *, void *, int);

void FUN_020ab5d8(struct SelfAB5D8 *self) {
    struct Vec3AB5D8 v3;
    struct Vec2AB5D8 v2;

    self->fb48 = self->fb4;
    self->fb4c = self->fbc;
    self->fb50 = 0x800;
    FUN_020bf680(self->fb54, &self->fb48, self->fb50);
    FUN_020c0488(&self->fb78);
    self->fb7c |= 1;
    self->fb78 = 0;
    FUN_020c0484(&self->fb78, 1);
    FUN_02047798(self->fb84, self->fb54);
    self->fb80 = 0x800;
    v3 = DAT_020f5158;
    v2.y = DAT_020f514c[1];
    v2.z = DAT_020f514c[2];
    v2.z = self->ffc;
    self->fbac = FUN_020beccc(FUN_020be450(), &self->fb78, 1, &v3, &v2);
    FUN_020be4f8(FUN_020be450(), self->fbac, 0);
}
