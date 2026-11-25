//cpp
// flags: -O4,s
#pragma always_inline on

typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed char s8;

struct ItemId {
    u8 b[4];
};

struct Weapon {
    u8 b0;
    u8 type;
    u8 b2;
    u8 b3;
    u32 w1;
    u32 w2;
    u32 w3;
};

struct Meta {
    u32 pad : 12;
    u32 flag12 : 1;
};

struct Self {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43();
    virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
    virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51();
    virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55();
    virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59();
    virtual void v60(); virtual void v61(); virtual void v62(); virtual void v63();
    virtual void v64();
    virtual int v65();
    virtual void v66(void *);
    virtual void v67(void *);
    virtual void v68();
    virtual void v69(void *);
};

extern "C" {
extern int FUN_0204dbc4(void *, int);
extern int FUN_0203a1fc(void *);
extern int FUN_020aa4b4(void *);
extern int FUN_0207f8dc(void *, int);
extern int FUN_020b60d8(void *, int);
extern int FUN_020b6100(void *, void *);
extern int FUN_020b611c(void *);
extern int FUN_020b6248(void *);
extern int FUN_020b6264(void *, void *, void *);
extern int FUN_020b62ac(void *, void *, int);
extern int FUN_020b6388(void *, void *);
extern int FUN_020b6568(void *, int);
extern int FUN_020b6590(void *, void *);
extern int FUN_020b6b24(void *);
extern int FUN_020b65ac(void *);
extern int FUN_020b65c8(void *, void *, void *);
extern int FUN_020b6610(void *, void *, int);
extern int FUN_020b66ec(void *, void *);
extern int FUN_02084684(int, void *, void *);
extern int FUN_02089928(void *, int);
extern int FUN_0203bcac(void *, int);
extern int FUN_020384c4(void *);
extern int FUN_020384a4(void *, int);
extern int FUN_020b6e34(void *, int, int, int);
extern u8 *FUN_02084798(int, int);
extern Meta *FUN_02084568(void *);
extern int FUN_020b63d0(void *);
extern int FUN_020b63e0(void *, void *);
extern int FUN_020b63fc(void *);
extern int FUN_020b6450(void *);
extern int FUN_020b646c(void *, void *, void *);
extern int FUN_020b64b4(void *, void *, int);
extern int FUN_020b7144(void *);
extern int FUN_020b71b0(void *);
extern int FUN_020b6dd4(void *);
extern void FUN_020b8dec(void *);

#define W(p, o) (*(int *)((char *)(p) + (o)))
#define U(p, o) (*(u32 *)((char *)(p) + (o)))
#define H(p, o) (*(u16 *)((char *)(p) + (o)))
#define FX_Mul(a, b) ((int)(((long long)(a) * (b) + 0x800) >> 12))

static inline bool IsTechWeapon(const Weapon *w) {
    if ((int)w->type >= 14 && (int)w->type <= 16) {
        return true;
    }
    return false;
}

static inline bool IsNonTechWeapon(const Weapon *w) {
    if (!IsTechWeapon(w)) {
        return true;
    }
    return false;
}

static inline bool IsGunWeapon(const Weapon *w) {
    if ((int)w->type >= 8 && (int)w->type <= 13) {
        return true;
    }
    return false;
}

void FUN_020b8704(Self *self, char *out, int action) {
    Weapon weapon;
    Weapon armor;
    Weapon accessory;

    self->v69(&weapon);
    self->v66(&armor);
    self->v67(&accessory);

    int hasTrait = FUN_0204dbc4(&weapon, 10);
    bool nonSpecial = false;
    bool special = false;
    if (hasTrait) {
        if (action == 16 || action == 17) {
            special = true;
        }
        nonSpecial = !special;
    }

    W(out, 0) = 0;
    W(out, 4) = 0;

    int isNotTech = !IsTechWeapon(&weapon);
    if (isNotTech) {
        int base = FUN_020aa4b4(self);
        if (base) {
            W(out, 0xb8) = FUN_020b60d8((char *)self + 0x20, base);
        } else {
            int factor = FUN_0207f8dc((char *)self + 0x158, 0);
            W(out, 0xb8) = (FUN_020b60d8((char *)self + 0x20, 0) * factor) >> 12;
        }
        W(out, 0xbc) = 0;
        W(out, 0xbc) += FUN_020b6100((char *)self + 0x20, &armor);
        W(out, 0xbc) += FUN_020b611c((char *)self + 0x20);
        W(out, 0xbc) += FUN_020b6248((char *)self + 0x20);
        W(out, 0xbc) += FUN_020b6264((char *)self + 0x20, &weapon, &accessory);
        W(out, 0xc0) = 0;
        if (!FUN_0203a1fc(&weapon)) {
            W(out, 0xc0) += FUN_020b62ac((char *)self + 0x20, &weapon, 1);
            W(out, 0xc0) += FUN_020b6388((char *)self + 0x20, &weapon);
            if (special) {
                W(out, 0xc0) = FX_Mul(W(out, 0xc0), 2048);
            }
        }
    } else {
        int base = FUN_020aa4b4(self);
        if (base) {
            W(out, 0xb8) = FUN_020b6568((char *)self + 0x20, base);
        } else {
            int factor = FUN_0207f8dc((char *)self + 0x158, 0);
            W(out, 0xb8) = (FUN_020b6568((char *)self + 0x20, 0) * factor) >> 12;
        }
        W(out, 0xbc) = 0;
        W(out, 0xbc) += FUN_020b6590((char *)self + 0x20, &armor);
        W(out, 0xbc) += FUN_020b6b24((char *)self + 0x20);
        W(out, 0xbc) += FUN_020b65ac((char *)self + 0x20);
        W(out, 0xbc) += FUN_020b65c8((char *)self + 0x20, &weapon, &accessory);
        W(out, 0xc0) = 0;
        if (!FUN_0203a1fc(&weapon)) {
            W(out, 0xc0) += FUN_020b6610((char *)self + 0x20, &weapon, 1);
            W(out, 0xc0) += FUN_020b66ec((char *)self + 0x20, &weapon);
        }
    }

    if (IsGunWeapon(&weapon) && !nonSpecial) {
        u8 info[24];
        ItemId copy;
        W(out, 4) = 1;
        copy = *(ItemId *)&weapon;
        if (FUN_02084684(W(self, 0xfc), &copy, info)) {
            W(out, 0x34) = info[8] << 9;
        }
        if (special) {
            W(out, 0x34) = FX_Mul(W(out, 0x34), 8192);
        }
    }

    if (!FUN_0203a1fc(&weapon)) {
        W(out, 0x0c) = FUN_02089928(&weapon, 1);
        W(out, 0x10) = FUN_02089928(&weapon, 2);
        W(out, 0x14) = FUN_02089928(&weapon, 3);
        W(out, 0x18) = FUN_02089928(&weapon, 4);
        W(out, 0x2c) = FUN_0203bcac(self, weapon.type);
    }

    if (action > 7 && action <= 15) {
        W(out, 0x1c) = FUN_020b6e34((char *)self + 0x20, action, FUN_020384c4(self), ((s8 *)self)[0x201]);
    } else {
        W(out, 0x1c) = FUN_020b6e34((char *)self + 0x20, action, FUN_020384a4(self, W(self, 0xd0)), ((s8 *)self)[0x201]);
    }

    if (action == 4 || action == 5 || action == 6 || action == 17) {
        W(out, 0xc4) = 0x1666;
    } else {
        W(out, 0xc4) = 4096;
    }

    W(out, 0xc8) = 4096;
    if (action >= 7 && action <= 15 && !FUN_0203a1fc(&weapon)) {
        W(out, 0xc8) = ((u32)FUN_02084798(weapon.type, weapon.w1 & 0xf)[0] << 12) / 100U;
    }

    if (W(self, 0x210) > 4096) {
        W(out, 0xc8) = FX_Mul(W(out, 0xc8), W(self, 0x210));
    }
    W(out, 0xc8) = FX_Mul(W(out, 0xc8), 0x51f);

    W(out, 0xcc) = FUN_020b63d0((char *)self + 0x20);
    W(out, 0xd0) = 0;
    W(out, 0xd0) += FUN_020b63e0((char *)self + 0x20, &armor);
    W(out, 0xd0) += FUN_020b63fc((char *)self + 0x20);
    W(out, 0xd0) += FUN_020b6450((char *)self + 0x20);
    W(out, 0xd0) += FUN_020b646c((char *)self + 0x20, &weapon, &accessory);

    if (!FUN_0203a1fc(&weapon)) {
        W(out, 0xd4) = FUN_020b64b4((char *)self + 0x20, &weapon, 0);
    } else {
        W(out, 0xd4) = 0;
    }

    switch (action) {
    case 1:
        W(out, 0xd8) = 4096;
        break;
    case 2:
        W(out, 0xd8) = 0x1266;
        break;
    case 3:
        W(out, 0xd8) = 0x14cc;
        break;
    case 4:
    case 17:
        W(out, 0xd8) = 3072;
        break;
    case 5:
        W(out, 0xd8) = 0xe14;
        break;
    case 6:
        W(out, 0xd8) = 0xfae;
        break;
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
        W(out, 0xd8) = ((u32)FUN_02084798(weapon.type, weapon.w1 & 0xf)[1] << 12) / 100U;
        break;
    default:
        W(out, 0xd8) = 4096;
        break;
    }

    W(out, 0xdc) = self->v65();
    W(out, 0xe0) = FUN_020b7144((char *)self + 0x20);
    W(out, 0xe4) = FUN_020b71b0((char *)self + 0x20);

    if (!FUN_0203a1fc(&weapon)) {
        u8 info[24];
        ItemId copy;
        copy = *(ItemId *)&weapon;
        if (FUN_02084684(W(self, 0xfc), &copy, info)) {
            int bits = (int)weapon.w2;
            int element = (bits & 0x3e000) >> 13;
            int level = ((bits & 0xe00) >> 9) + FUN_020b6dd4((char *)self + 0x20);
            if (level > 5) {
                level = 5;
            }
            if (element) {
                W(out, 0x8c) = element;
                W(out, 0x90) = level;
                W(out, 0x94) = ((s8 *)info)[11];
                if (element == 13) {
                    FUN_020b8dec(out + 0x8c);
                } else if (element == 9 && H(self, 0x14e) > FX_Mul(H(self, 0x5c), 0x555)) {
                    FUN_020b8dec(out + 0x8c);
                }
            }
        }
    }

    W(out, 0xe8) = H(self, 0x14e);
    if (((s8 *)self)[0x149]) {
        U(out, 0x28) |= 1;
    }
    if (W(self, 0x210) > 4096) {
        W(out, 0x38) = 2;
    }
    {
        ItemId copy = *(ItemId *)&weapon;
        Meta *metadata = FUN_02084568(&copy);
        if (metadata && (int)metadata->flag12 > 0) {
            U(out, 0x28) |= 16;
        }
    }
    if (FUN_0204dbc4(&weapon, 16)) {
        U(out, 0x28) |= 32;
    }
    if (FUN_0204dbc4(&weapon, 12)) {
        U(out, 0x28) |= 64;
    }
}
}
