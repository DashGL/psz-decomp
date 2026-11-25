// flags: -O4,s
typedef struct {
    unsigned char pad0[0xfc];
    int f_fc;
    unsigned char pad1[0x180 - 0x100];
    unsigned char equip[4];
    int f_184;
    unsigned char pad2[0x240 - 0x188];
    int f_240;
    unsigned char pad3[0x270 - 0x244];
    unsigned short cost[2][3];
    unsigned char pad4[0x7b8 - 0x27c];
    int range[2][4];
    unsigned short angle[2][4];
    unsigned char count[2][4];
    unsigned char enable[2][4];
} ObjAae80;

typedef struct {
    unsigned char pad0[8];
    unsigned char f_08;
    unsigned char f_09;
    unsigned char pad1[8];
    unsigned short f_12;
    unsigned short f_14;
    unsigned short f_16;
} ResAae80;

extern void *FUN_02077930(void);
extern int FUN_02077cc8(void *, int, int);
extern int FUN_02084684(int, void *, void *);
extern int FUN_0203a9d4(void *);
extern int FUN_0203c338(void *, int);
extern int FUN_0203c2c8(void *, int);
extern unsigned char *FUN_02084798(int, int);
extern unsigned char *FUN_02084778(int, int);
extern void FUN_020ab554(void *);

#define TOANGLE(v) ((unsigned short)((int)(182.04443359375f * (float)((int)(v) << 12)) >> 12))

void FUN_020aae80(ObjAae80 *s, int row, int slot) {
    int action;
    if (row >= 2 || slot >= 3) {
        return;
    }
    action = FUN_02077cc8(FUN_02077930(), row, slot);
    switch (action) {
    case 0:
        break;
    case 1:
    case 2: {
        ResAae80 res;
        if (FUN_02084684(s->f_fc, s->equip, &res) == 1) {
            int number;
            unsigned char *rule;
            s->range[row][slot] = res.f_08 << 9;
            switch (s->f_240) {
            case 12: {
                unsigned char a = s->equip[1];
                int b = FUN_0203a9d4(s);
                rule = FUN_02084798(a, b);
                number = res.f_09 + (signed char)rule[3];
                s->range[row][slot] = rule[5] << 9;
                s->angle[row][slot] = TOANGLE(rule[6]);
                break;
            }
            case 10:
                s->angle[row][slot] = res.f_14;
                number = res.f_09;
                break;
            case 11:
                s->angle[row][slot] = res.f_12;
                number = res.f_09;
                break;
            default:
                s->angle[row][slot] = res.f_16;
                number = res.f_09;
                break;
            }
            if (number <= 0) {
                number = 1;
            } else if (number >= 7) {
                number = 6;
            }
            if (s->range[row][slot] <= 0) {
                s->range[row][slot] = 1;
                s->enable[row][slot] = 0;
            }
            s->count[row][slot] = (unsigned char)number;
            s->enable[row][slot] = 1;
            {
                unsigned char a = s->equip[1];
                int b = FUN_0203a9d4(s);
                rule = FUN_02084798(a, b);
            }
            if (s->f_184 & 15) {
                s->cost[row][slot] = 10 * rule[4];
            } else {
                s->cost[row][slot] = 0;
            }
        } else {
            unsigned char *rule;
            s->range[row][slot] = 8192;
            s->angle[row][slot] = 12288;
            s->count[row][slot] = 1;
            s->enable[row][slot] = 1;
            rule = FUN_02084798(0, 1);
            s->cost[row][slot] = 10 * rule[4];
        }
        break;
    }
    case 3: {
        ResAae80 res;
        if (FUN_02084684(s->f_fc, s->equip, &res) == 1) {
            unsigned char a = s->equip[1];
            int b = FUN_0203a9d4(s);
            unsigned char *rule = FUN_02084798(a, b);
            int number;
            s->range[row][slot] = rule[5] << 9;
            if (s->range[row][slot] <= 0) {
                s->range[row][slot] = 1;
                s->enable[row][slot] = 0;
            }
            s->angle[row][slot] = TOANGLE(rule[6]);
            if (s->f_184 & 15) {
                s->cost[row][slot] = 10 * rule[4];
            } else {
                s->cost[row][slot] = 0;
            }
            number = res.f_09 + (signed char)rule[3];
            if (number <= 0) {
                number = 1;
            } else if (number >= 7) {
                number = 6;
            }
            s->count[row][slot] = (unsigned char)number;
            s->enable[row][slot] = 1;
        } else {
            unsigned char *rule = FUN_02084798(0, 1);
            s->count[row][slot] = (signed char)rule[3] + 1;
            s->enable[row][slot] = 1;
            s->range[row][slot] = rule[5] << 9;
            if (s->range[row][slot] <= 0) {
                s->range[row][slot] = 1;
                s->enable[row][slot] = 0;
            }
            s->angle[row][slot] = TOANGLE(rule[6]);
            s->cost[row][slot] = 10 * rule[4];
        }
        break;
    }
    case 15:
    case 17:
    case 19:
    case 21: {
        int level = FUN_0203c338(s, action);
        if (level > 0 && level <= 15) {
            unsigned char *rule = FUN_02084778(FUN_0203c2c8(s, action), level);
            s->range[row][slot] = rule[2] << 12;
            s->angle[row][slot] = 0;
            s->count[row][slot] = 0;
            s->enable[row][slot] = 0;
            s->cost[row][slot] = 10 * rule[13];
        }
        break;
    }
    case 5:
    case 7:
    case 9:
    case 11:
    case 13:
    case 23:
    case 25: {
        int level = FUN_0203c338(s, action);
        if (level > 0 && level <= 15) {
            unsigned char *rule = FUN_02084778(FUN_0203c2c8(s, action), level);
            s->range[row][slot] = rule[2] << 12;
            s->enable[row][slot] = 1;
            if (action == 5) {
                s->angle[row][slot] = 0x1c71;
                s->count[row][slot] = 1;
            } else if (action == 7) {
                s->angle[row][slot] = 0x0aaa;
                s->count[row][slot] = 7;
            } else if (action == 9) {
                s->angle[row][slot] = 0x5772;
                s->count[row][slot] = 1;
            } else if (action == 11) {
                s->angle[row][slot] = 0x4000;
                s->count[row][slot] = 1;
            } else if (action == 13) {
                s->angle[row][slot] = 0x1c71;
                s->count[row][slot] = 1;
            } else {
                s->angle[row][slot] = 0x2aaa;
                s->count[row][slot] = 1;
            }
            if (s->range[row][slot] <= 0) {
                s->range[row][slot] = 0;
                s->enable[row][slot] = 0;
            }
            s->cost[row][slot] = 10 * rule[13];
        }
        break;
    }
    case 6:
    case 8:
    case 10:
    case 12:
    case 14:
    case 16:
    case 18:
    case 20:
    case 22:
    case 24:
    case 26: {
        int level = FUN_0203c338(s, action);
        if (level > 0 && level <= 15) {
            unsigned char *rule = FUN_02084778(FUN_0203c2c8(s, action), level);
            s->range[row][slot] = rule[8] << 12;
            s->enable[row][slot] = 1;
            if (action == 6) {
                s->angle[row][slot] = 0x0e38;
                s->count[row][slot] = 7;
            } else if (action == 8) {
                s->angle[row][slot] = 0x04bd;
                s->count[row][slot] = 7;
            } else if (action == 10) {
                s->angle[row][slot] = 0x4000;
                s->count[row][slot] = 7;
            } else if (action == 12) {
                s->angle[row][slot] = 0x8000;
                s->count[row][slot] = 7;
            } else if (action == 14) {
                s->angle[row][slot] = 0x0e38;
                s->count[row][slot] = 7;
            } else {
                s->angle[row][slot] = 0x8000;
                s->count[row][slot] = 7;
            }
            if (s->range[row][slot] <= 0) {
                s->range[row][slot] = 4096;
                s->enable[row][slot] = 0;
            }
            s->cost[0][slot] = 10 * rule[13];
        }
        break;
    }
    default:
        s->range[row][slot] = 4096;
        s->angle[row][slot] = 0;
        s->count[row][slot] = 0;
        s->enable[row][slot] = 0;
        s->cost[row][slot] = 0;
        break;
    }
    FUN_020ab554(s);
}
