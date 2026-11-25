//cpp
// flags: -O4,s
struct Vec_b87c {
    int x, y, z;
};
struct Mat43_b87c {
    int v[12];
};
struct Mat33_b87c {
    int v[9];
};
struct Fx {
    int v;
    inline Fx() {}
    inline Fx(const Fx &o) : v(o.v) {}
    inline int val() const { return v; }
};

extern "C" {
extern void *FUN_0204daa8(int);
extern int FUN_02037208(void *, int);
extern int FUN_02074f94(void *);
extern void FUN_0204260c(void *, int, Mat43_b87c *, Mat33_b87c *);
extern void FUN_02035408(Vec_b87c *, int, int, int);
extern void *FUN_020ba894(unsigned int);
extern void *FUN_overlay_31__0219bffc(void *, void *, Vec_b87c *, int *, int *, int);
extern int FUN_02074fc4(void *, void *, int, int);
extern short DAT_020ed83c[];
extern int DAT_0219cf18;
extern Fx DAT_0219cf20;
extern int DAT_0219cf0c[];
extern void FUN_02092654(Vec_b87c *, int *);
extern Fx FUN_020bc5cc(const Fx &, const int &);
extern void FUN_overlay_31__0219b9b0(void *, Vec_b87c *, Vec_b87c *, int);

void FUN_overlay_31__0219b87c(char *self, int *player)
{
    Mat43_b87c matrix;
    Mat33_b87c rotation;
    Vec_b87c position;
    Vec_b87c offset;
    Vec_b87c velocity;
    int identifier;
    int fixed, slot;
    char *entity = (char *)FUN_0204daa8(*player);
    void *model;
    int rate, angle;
    void *child;

    if (!entity || !(model = *(void **)(entity + 0x8c))) {
        return;
    }
    rate = FUN_02037208(self, 20);
    slot = FUN_02074f94(self);
    if (slot != -1) {
        FUN_0204260c(model, 0, &matrix, &rotation);
        FUN_02035408(&position, matrix.v[9], matrix.v[10], matrix.v[11]);
        child = FUN_020ba894(272);
        if (child) {
            identifier = *(int *)(self + 12);
            child = FUN_overlay_31__0219bffc(child, self, &position, &identifier, player, rate);
        }
        FUN_02074fc4(self, child, slot, 0);
    }
    angle = (unsigned short)(FUN_02037208(self, 0x6000) + 0x5000);
    angle >>= 4;
    offset.x = DAT_020ed83c[angle * 2];
    offset.y = 0;
    offset.z = DAT_020ed83c[angle * 2 + 1];
    FUN_02092654(&offset, &DAT_0219cf18);
    {
        Vec_b87c *sp_ = (Vec_b87c *)(self + 0x38);
        offset.x += sp_->x;
        offset.y += sp_->y;
        offset.z += sp_->z;
    }
    offset.y -= FUN_020bc5cc(DAT_0219cf20, (int)(rate > 0 ? (0.5f + (float)(rate << 12)) : ((float)(rate << 12) - 0.5f))).val();
    velocity.x = 0;
    velocity.y = DAT_0219cf0c[5];
    velocity.z = 0;
    FUN_overlay_31__0219b9b0(self, &offset, &velocity, 50);
}
}
