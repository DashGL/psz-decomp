//cpp
// flags: -O4,s
typedef unsigned int u32;
typedef unsigned char u8;
typedef unsigned short u16;
struct Item { u8 b[4]; };
struct Meta {
    u32 lo : 12;
    u32 bit12 : 1;
    u32 hi : 19;
};
struct Equip {
    virtual void v0();
    virtual void v1();
    virtual void get1(void *);
    virtual void get2(void *);
    virtual void get3(void *);
};
struct Actor {
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
    virtual void v64(); virtual void v65();
    virtual int query();
};
extern "C" {
int FUN_0204dbc4(void *, int);
int FUN_0203a1fc(void *);
int FUN_020aa4b4(void *);
int FUN_0207f8dc(void *, int);
int FUN_020b60d8(void *, int);
int FUN_020b6100(void *, void *);
int FUN_020b611c(void *);
int FUN_020b6248(void *);
int FUN_020b6264(void *, void *, void *);
int FUN_020b62ac(void *, void *, int);
int FUN_020b6388(void *, void *);
int FUN_020b6568(void *, int);
int FUN_020b6590(void *, void *);
int FUN_020b6b24(void *);
int FUN_020b65ac(void *);
int FUN_020b65c8(void *, void *, void *);
int FUN_020b6610(void *, void *, int);
int FUN_020b66ec(void *, void *);
int FUN_02084684(int, void *, void *);
int FUN_02089928(void *, int);
int FUN_0203bcac(void *, int);
int FUN_020384c4(void *);
int FUN_020384a4(void *, int);
int FUN_020b6e34(void *, int, int, int);
u8 *FUN_02084798(int, int);
Meta *FUN_02084568(void *);
int FUN_020b63d0(void *);
int FUN_020b63e0(void *, void *);
int FUN_020b63fc(void *);
int FUN_020b6450(void *);
int FUN_020b646c(void *, void *, void *);
int FUN_020b64b4(void *, void *, int);
int FUN_020b7144(void *);
int FUN_020b71b0(void *);
int FUN_020b6dd4(void *);
void FUN_020aa4d8(void *);
int FUN_02086e3c(void);
int FUN_020870c4(int);
int FUN_02043a24(int);
}

#define W(p, o) (*(int *)((char *)(p) + (o)))
#define U(p, o) (*(u32 *)((char *)(p) + (o)))
#define H(p, o) (*(u16 *)((char *)(p) + (o)))
#define ROUND(a, b) ((int)(((long long)(a) * (long long)(b) + 2048) >> 12))

extern "C" void FUN_020a9da0(char *self, char *out, int action) {
    u32 weapon[4], armor[4], accessory[4];

    ((Equip *)(self + 32))->get1(weapon);
    ((Equip *)(self + 32))->get2(armor);
    ((Equip *)(self + 32))->get3(accessory);

    int has10 = FUN_0204dbc4(weapon, 10);
    int nonSpecial = 0;
    int special = 0;
    if (has10) {
        if (action == 16 || action == 17) {
            special = 1;
        }
        nonSpecial = !special;
    }

    W(out, 0) = 0;
    W(out, 4) = 0;

    int is_r; if ((int)((u8 *)weapon)[1] >= 14 && (int)((u8 *)weapon)[1] <= 16) is_r = 1; else is_r = 0;
    int not_rod = !is_r;
    if (not_rod) {
        int base = FUN_020aa4b4(self);
        if (base) {
            W(out, 0xb8) = FUN_020b60d8(self + 32, base);
        } else {
            int factor = FUN_0207f8dc(self + 0x158, 0);
            W(out, 0xb8) = (FUN_020b60d8(self + 32, 0) * factor) >> 12;
        }
        W(out, 0xbc) = 0;
        W(out, 0xbc) += FUN_020b6100(self + 32, armor);
        W(out, 0xbc) += FUN_020b611c(self + 32);
        W(out, 0xbc) += FUN_020b6248(self + 32);
        W(out, 0xbc) += FUN_020b6264(self + 32, weapon, accessory);
        W(out, 0xc0) = 0;
        if (!FUN_0203a1fc(weapon)) {
            W(out, 0xc0) += FUN_020b62ac(self + 32, weapon, 1);
            W(out, 0xc0) += FUN_020b6388(self + 32, weapon);
            if (special) {
                W(out, 0xc0) = ROUND(W(out, 0xc0), 2048);
            }
        }
    } else {
        int base = FUN_020aa4b4(self);
        if (base) {
            W(out, 0xb8) = FUN_020b6568(self + 32, base);
        } else {
            int factor = FUN_0207f8dc(self + 0x158, 0);
            W(out, 0xb8) = (FUN_020b6568(self + 32, 0) * factor) >> 12;
        }
        W(out, 0xbc) = 0;
        W(out, 0xbc) += FUN_020b6590(self + 32, armor);
        W(out, 0xbc) += FUN_020b6b24(self + 32);
        W(out, 0xbc) += FUN_020b65ac(self + 32);
        W(out, 0xbc) += FUN_020b65c8(self + 32, weapon, accessory);
        W(out, 0xc0) = 0;
        if (!FUN_0203a1fc(weapon)) {
            W(out, 0xc0) += FUN_020b6610(self + 32, weapon, 1);
            W(out, 0xc0) += FUN_020b66ec(self + 32, weapon);
        }
    }

    int is_g; if ((int)((u8 *)weapon)[1] >= 8 && (int)((u8 *)weapon)[1] <= 13) is_g = 1; else is_g = 0;
    if (is_g && !nonSpecial) {
        W(out, 4) = 1;
        u32 info[6];
        Item copy = *(Item *)weapon;
        if (FUN_02084684(W(self, 0xfc), &copy, info)) {
            W(out, 0x34) = ((u8 *)info)[8] << 9;
        }
        if (special) {
            W(out, 0x34) = ROUND(W(out, 0x34), 8192);
        }
    }

    if (!FUN_0203a1fc(weapon)) {
        W(out, 0x0c) = FUN_02089928(weapon, 1);
        W(out, 0x10) = FUN_02089928(weapon, 2);
        W(out, 0x14) = FUN_02089928(weapon, 3);
        W(out, 0x18) = FUN_02089928(weapon, 4);
        int base = ((u8 *)weapon)[1];
        int factor = weapon[1] & 15;
        if (action != 16 && action != 17 &&
            !(base == 10 && action >= 7 && action <= 15 && factor == 1) &&
            !(base == 12 && action >= 1 && action <= 3) &&
            !(base == 12 && action >= 7 && action <= 15 && (factor == 1 || factor == 3)) &&
            !(base == 12 && action == 11 && factor == 2)) {
            W(out, 0x2c) = FUN_0203bcac(self, base);
        }
    }

    if (action > 7 && action <= 15) {
        W(out, 0x1c) = FUN_020b6e34(self + 32, action, FUN_020384c4(self), (signed char)self[0x201]);
    } else {
        W(out, 0x1c) = FUN_020b6e34(self + 32, action, FUN_020384a4(self, W(self, 0xd0)), (signed char)self[0x201]);
    }

    if (action == 4 || action == 5 || action == 6 || action == 17) {
        W(out, 0xc4) = 0x1666;
    } else {
        W(out, 0xc4) = 4096;
    }
    W(out, 0xc8) = 4096;
    if (action >= 7 && action <= 15 && !FUN_0203a1fc(weapon)) {
        W(out, 0xc8) = ((u32)FUN_02084798(((u8 *)weapon)[1], weapon[1] & 15)[0] << 12) / 100U;
    }
    if (W(self, 0x210) > 4096) {
        W(out, 0xc8) = ROUND(W(out, 0xc8), W(self, 0x210));
    }

    W(out, 0xcc) = FUN_020b63d0(self + 32);
    W(out, 0xd0) = 0;
    W(out, 0xd0) += FUN_020b63e0(self + 32, armor);
    W(out, 0xd0) += FUN_020b63fc(self + 32);
    W(out, 0xd0) += FUN_020b6450(self + 32);
    W(out, 0xd0) += FUN_020b646c(self + 32, weapon, accessory);
    if (!FUN_0203a1fc(weapon)) {
        W(out, 0xd4) = FUN_020b64b4(self + 32, weapon, 0);
    } else {
        W(out, 0xd4) = 0;
    }

    switch (action) {
    case 1: W(out, 0xd8) = 4096; break;
    case 2: W(out, 0xd8) = 0x1266; break;
    case 3: W(out, 0xd8) = 0x14cc; break;
    case 4: case 17: W(out, 0xd8) = 3072; break;
    case 5: W(out, 0xd8) = 0xe14; break;
    case 6: W(out, 0xd8) = 0xfae; break;
    case 7: case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15:
        W(out, 0xd8) = ((u32)FUN_02084798(((u8 *)weapon)[1], weapon[1] & 15)[1] << 12) / 100U;
        break;
    default: W(out, 0xd8) = 4096; break;
    }

    W(out, 0xdc) = ((Actor *)self)->query();
    W(out, 0xe0) = FUN_020b7144(self + 32);
    W(out, 0xe4) = FUN_020b71b0(self + 32);

    if (!FUN_0203a1fc(weapon)) {
        u32 info[6];
        Item copy = *(Item *)weapon;
        if (FUN_02084684(W(self, 0xfc), &copy, info)) {
            int bits = (int)weapon[2];
            int element = (bits & 0x3e000) >> 13;
            int base = FUN_020b6dd4(self + 32);
            int level = ((bits & 0xe00) >> 9) + base;
            if (level > 5) level = 5;
            if (element) {
                W(out, 0x8c) = element;
                W(out, 0x90) = level;
                W(out, 0x94) = ((signed char *)info)[11];
                if (element == 13) {
                    int cur = W((void *)FUN_020870c4(FUN_02086e3c()), 0x34);
                    if (cur < FUN_02043a24(level)) {
                        FUN_020aa4d8(out + 0x8c);
                    }
                } else if (element == 9 && H(self, 0x14e) > ROUND(H(self, 0x5c), 0x555)) {
                    FUN_020aa4d8(out + 0x8c);
                }
            }
        }
    }

    W(out, 0xe8) = H(self, 0x14e);
    if (*(signed char *)(self + 0x149)) U(out, 0x28) |= 1;
    if (W(self, 0x210) > 4096) W(out, 0x38) = 2;
    Item copy3 = *(Item *)weapon;
    Meta *metadata = FUN_02084568(&copy3);
    if (metadata && (int)metadata->bit12 > 0) U(out, 0x28) |= 16;
    if (FUN_0204dbc4(weapon, 16)) U(out, 0x28) |= 32;
    if (FUN_0204dbc4(weapon, 12)) U(out, 0x28) |= 64;
}
