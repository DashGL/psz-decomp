// flags: -O4,s
#pragma always_inline on
#pragma opt_propagation off

extern int DAT_020f8e18[];
extern int DAT_020f8e1c[];
extern int DAT_020f8e20[];
extern int DAT_020f8e24[];
extern int DAT_020f8e28[];
extern int DAT_020ed4a8[];
extern int DAT_020ed480[];
extern int DAT_020ed4bc[];
extern int DAT_020ed4d0[][5];

#pragma thumb off
extern int FUN_02000ed0(int);
extern int FUN_02000ec4(int);
#pragma thumb on

extern int FUN_02086d8c(int), FUN_020bc620(const int *);
extern void FUN_02086d60(int *, const int *, const int *), FUN_020bc5cc(int *, const int *, const int *);
extern int *FUN_020bc5e8(int *, const int *);
extern int FUN_0207f774(int, int), FUN_02043a24(unsigned int), FUN_02043a40(unsigned int);

typedef struct {
    int amount;
    int chance;
    int pad;
    int forced;
} Buff;

typedef struct {
    int f00;
    int kind;
    int elem;
    int attr[4];
    int f1c;
    int f20;
    unsigned int f24;
    unsigned int f28;
    int f2c;
    int f30;
    int f34;
    int f38;
    int f3c;
    int f40;
    int f44;
    int f48;
    int f4c;
    Buff buff[2];
    int f70;
    int f74;
    int f78;
    int f7c;
    int f80;
    int f84;
    int f88;
    int f8c;
    int f90;
    int f94;
    int f98;
    int f9c;
    int fa0;
    int fa4;
    int fa8;
    int fac;
    int fb0;
    int fb4;
    int fb8;
    int fbc;
    int fc0;
    int fc4;
    int fc8;
    int fcc;
    int fd0;
    int fd4;
    int fd8;
    int fdc;
    int fe0;
    int fe4;
    int fe8;
} Attack;

typedef struct {
    int f00;
    int f04;
    int f08;
    int f0c;
    int f10;
    int f14;
    int res[5];
    int f2c;
    unsigned int f30;
    unsigned int f34;
    unsigned int f38;
    unsigned int f3c;
    int f40;
    int f44;
    int f48;
    int f4c;
    int f50;
    int f54;
    int f58;
    int f5c;
    unsigned int f60;
    int f64;
    int f68;
    int f6c;
    int f70;
} Defense;

#define H(p,o) (*(short *)((char *)(p)+(o)))
#define A(a,b) ((int)((unsigned int)(a)+(unsigned int)(b)))
#define S(a,b) ((int)((unsigned int)(a)-(unsigned int)(b)))
#define N(a) ((int)(0u-(unsigned int)(a)))
#define Q(a,b) ((int)(((long long)(int)(a)*(int)(b)+2048)>>12))
#define FIX(out,value) do{int v=(int)(value);float f;if(v>0)f=0.5f+(float)(int)((unsigned int)v<<12);else f=(float)(int)((unsigned int)v<<12)-0.5f;(out)=(int)f;}while(0)
#define RESIST(out) do{int z;FIX(z,S(100,A(defense->f54,A(defense->f4c,defense->f50))));(out)=z/100;}while(0)

static inline int has_bit(unsigned int v, int b) {
    return (v & (1u << b)) ? 1 : 0;
}

static inline int has_mask(unsigned int v, unsigned int m) {
    return (v & m) ? 1 : 0;
}

static inline int has_hmask(short v, int m) {
    return (v & m) ? 1 : 0;
}

static inline int is_eq(int a, int b) {
    return (a == b) ? 1 : 0;
}
static inline int is_phys(int isTech, int kind) {
    if (!isTech && !is_eq(kind, 2)) return 1;
    return 0;
}

static inline int calc_subtype(Attack *attack) {
    int k2 = attack->kind;
    int f16 = has_mask(attack->f28, 16);
    int f64 = has_mask(attack->f28, 64);
    int idx2 = attack->elem;
    int subtype = 1;
    int f32 = has_mask(attack->f28, 32);
    if (f32) return f16 ? 5 : 2;
    else if (f64) return 6;
    else if (k2 == 0) return f16 ? 3 : 0;
    else if (k2 == 1) return f16 ? 4 : 1;
    else if (k2 == 2 && idx2 != -1) return DAT_020ed4bc[idx2];
    return subtype;
}

static inline int try_ik_tail(int enabled, int chance, int forced, char *defendOut, int *defendChanged, Defense *defense) {
    if (enabled && !has_bit(defense->f38, 0)) {
        int ratio, value;
        RESIST(ratio);
        value = Q(chance, ratio);
        if (forced || FUN_02086d8c(value)) {
            *defendChanged = 1;
            H(defendOut, 8) |= 1;
            return 1;
        }
    }
    return 0;
}

void FUN_02042a4c(char *attackOut, int *attackChanged, Attack *attack, char *defendOut, int *defendChanged, Defense *defense, int distance) {
    int ik_forced;
    int crit_value, critical, third, multiplier, base;
    int eff_value, eff_forced, eff_chance, eff_level;
    int buff_success, buff_forced, buff_chance;
    int se_extra, se_forced, se_level, se_chance;
    int power, kind, isTech, damage;

    {
        int enabled = 0, chance = 0;
        ik_forced = 0;
        if (!attack->f80) {
            enabled = 1;
            chance = attack->f84;
            ik_forced = attack->f88;
        } else if (attack->f8c == 8) {
            enabled = 1;
            chance = attack->f94;
        }
        if (try_ik_tail(enabled, chance, ik_forced, defendOut, defendChanged, defense)) return;
    }

    damage = 0;
    kind = attack->kind;
    isTech = is_eq(kind, 3);
    if (isTech) {
        int rand1, rand2, temp8k, mulOut, addOut, powOut, valFix, factor;
        int level, third, idx, mode;
        level = attack->fa4;
        mode = attack->f98;
        factor = 4096;
        if (mode == 1) {
            FUN_02086d60(&rand1, DAT_020f8e18, DAT_020f8e24);
            FUN_020bc5e8(&factor, &rand1);
        } else if (mode == 2) {
            FUN_02086d60(&rand2, DAT_020f8e20, DAT_020f8e1c);
            FUN_020bc5e8(&factor, &rand2);
        }
        idx = S(level, 1);
        if (idx >= 0 && idx < 4) FUN_020bc5e8(&factor, DAT_020f8e28 + idx);
        FIX(valFix, attack->f9c);
        FIX(third, attack->fa0);
        temp8k = 8192;
        FUN_020bc5cc(&mulOut, &valFix, &temp8k);
        addOut = A(mulOut, third);
        FUN_020bc5cc(&powOut, &addOut, &factor);
        damage = FUN_020bc620(&powOut);
    } else if (has_mask(attack->f28, 8)) {
        H(defendOut, 8) |= 32;
    } else if (has_mask(attack->f28, 2)) {
        damage = Q(defense->f64, attack->f30);
    } else {
        int factor, idx, value, defenseValue, ratio;
        power = attack->fb8;
        if (power <= 0) goto effects;
        factor = 4096;
        idx = defense->f58;
        if (idx != -1) {
            FIX(value, A(attack->attr[idx], 100));
            factor = Q(4096, value / 100);
        }
        if (attack->f8c == 9) factor = Q(factor, DAT_020ed4a8[S(attack->f90, 1)]);
        base = A(A(power, attack->fbc), Q(attack->fc0, factor));
        multiplier = attack->fc4;
        third = attack->fc8;
        defenseValue = has_mask(attack->f24, 2) ? 0 : A(defense->f0c, A(defense->f04, defense->f08));
        factor = 4096;
        {
            if (is_phys(isTech, kind)) {
                value = 0;
                switch (kind) {
                case 0: value = defense->f10; break;
                case 1: value = defense->f14; break;
                }
                FIX(ratio, S(100, value));
                factor = Q(4096, ratio / 100);
            } else {
                if (attack->elem != -1) {
                    FIX(ratio, S(100, defense->res[attack->elem]));
                    factor = Q(4096, ratio / 100);
                }
                if (has_bit(defense->f60, 0)) factor = Q(factor, 3277);
            }
        }
        damage = S(Q(base, multiplier), defenseValue) / 5;
        damage = Q(damage, third);
        damage = Q(damage, factor);
        if (damage < 0) damage = 0;
        critical = A(attack->fe4, A(attack->fdc, attack->fe0)) / 10;
        if (kind == 1) {
            crit_value = attack->f34;
            if (Q(crit_value, 3277) <= distance && distance <= crit_value) critical = A(critical, 5);
        }
        if (FUN_02086d8c(critical)) H(defendOut, 8) |= 8;
        if (has_hmask(H(defendOut, 8), 8)) damage = A(damage, damage / 2);
        damage = Q(damage, FUN_0207f774(defense->f6c, defense->f70));
        if (attack->f8c == 13) {
            damage = Q(damage, DAT_020ed480[S(attack->f90, 1)]);
            *attackChanged = 1;
            H(attackOut, 4) = N(FUN_02043a24(attack->f90));
            attackOut[21] = 0;
        } else if (attack->f8c == 12 || attack->f8c == 16) {
            int enabled = 1;
            if (attack->f8c == 16) {
                if (FUN_02086d8c(attack->f94)) {
                    H(attackOut, 8) |= 2048;
                    enabled = 1;
                } else {
                    enabled = 0;
                }
            }
            if (enabled) damage = Q(damage, 6144);
            if (attack->f8c == 12) {
                *attackChanged = 1;
                value = FUN_02043a40(attack->f90);
                H(attackOut, 0) = N(Q(attack->fe8, value));
                if (H(attackOut, 0) >= 0) H(attackOut, 0) = -1;
                attackOut[21] = 0;
                H(attackOut, 8) |= 1024;
            }
        }
        damage = Q(damage, defense->f2c);
    }
    {
        int k2, f16, f64, f32, idx2, subtype;
        *defendChanged = 1;
        H(defendOut, 0) = N(damage);
        defendOut[10] = attack->f1c;
        defendOut[11] = attack->f2c;
        if (has_mask(attack->f28, 4)) H(defendOut, 8) |= 16;
        defendOut[19] = has_hmask(H(defendOut, 8), 8) ? 1 : attack->f38;
        H(defendOut, 8) |= 512;
        H(defendOut, 8) |= 1024;
        defendOut[21] = attack->f20;
        defendOut[20] = calc_subtype(attack);
    }
effects:
    {
        int status = -1;
        eff_level = 0; eff_chance = 0; eff_forced = 0;
        if (has_hmask(H(attackOut, 8), 2048)) { status = 4; eff_level = attack->f90; eff_forced = 1; }
        else if (attack->f70 != -1) { status = attack->f70; eff_level = attack->f74; eff_chance = attack->f78; eff_forced = attack->f7c; }
        else {
            switch (attack->f8c) {
            case 6: status = 0; break;
            case 7: status = 1; break;
            case 10: status = 2; break;
            case 11: status = 3; break;
            }
            if (status != -1) { eff_level = attack->f90; eff_chance = attack->f94; }
        }
        eff_value = H(defendOut, 0);
        if (status != -1 && !has_bit(defense->f3c, status)) {
            int ratio, temp;
            RESIST(ratio);
            temp = Q(eff_chance, ratio);
            if (eff_forced || FUN_02086d8c(temp)) {
                int i = S(eff_level, 1);
                int amount;
                if (i < 0) i = 0;
                else if (i >= 5) i = 4;
                amount = DAT_020ed4d0[status][i];
                if (status != 2) {
                    amount = Q(eff_value, amount);
                    amount = FUN_02000ed0(amount);
                }
                switch (status) {
                case 0: H(attackOut, 0) = amount; break;
                case 1: H(attackOut, 2) = amount; break;
                case 2: H(attackOut, 4) = amount; break;
                case 3: H(attackOut, 6) = amount; break;
                case 4: H(attackOut, 0) = N(amount); attackOut[21] = 0; H(attackOut, 8) |= 1024; break;
                default: goto status_effect;
                }
                *attackChanged = 1;
            }
        }
    }
status_effect:
    {
        int status = -1;
        se_level = 0; se_chance = 0; se_forced = 0; se_extra = 0;
        if (attack->f3c != -1) { status = attack->f3c; se_level = attack->f40; se_chance = attack->f44; se_forced = attack->f4c; se_extra = attack->f48; }
        else {
            switch (attack->f8c) {
            case 1: status = 0; break;
            case 2: status = 1; break;
            case 3: status = 2; break;
            case 4: status = 3; break;
            case 5: status = 4; break;
            case 14: status = 5; break;
            }
            if (status != -1) { se_level = attack->f90; se_chance = attack->f94; }
        }
        if (status != -1 && !has_bit(defense->f30, status)) {
            int ratio, value;
            RESIST(ratio);
            value = Q(se_chance, ratio);
            if (se_forced || FUN_02086d8c(value)) {
                *defendChanged = 1;
                defendOut[12] = status;
                defendOut[13] = se_level;
                defendOut[14] = se_extra;
            }
        }
    }
    {
        int i = 0;
        do {
            int amount = 0; buff_chance = 0; buff_forced = 0;
            if (attack->buff[i].amount) {
                amount = attack->buff[i].amount;
                buff_chance = attack->buff[i].chance;
                buff_forced = attack->buff[i].forced;
            } else {
                int sp = attack->f8c;
                if ((i == 0 && sp == 17) || (i == 1 && sp == 18)) {
                    int value = FUN_02000ec4(attack->f90);
                    amount = N(value);
                    buff_chance = attack->f94;
                }
            }
            if (amount) {
                buff_success = 0;
                if (amount < 0) {
                    if (!has_bit(defense->f34, i)) {
                        int ratio, value;
                        RESIST(ratio);
                        value = Q(buff_chance, ratio);
                        if (buff_forced || FUN_02086d8c(value)) buff_success = 1;
                    }
                } else if (amount > 0) {
                    buff_success = 1;
                }
                if (buff_success) {
                    *defendChanged = 1;
                    defendOut[15 + i] = amount;
                }
            }
            i++;
        } while (i < 2);
    }
}
