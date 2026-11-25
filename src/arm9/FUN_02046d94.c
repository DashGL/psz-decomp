// flags: -O4,s
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef struct { u32 x, y, z; } V;

extern char *DAT_02108d04;
extern u8 DAT_020fc958[];
extern void FUN_02046d00(void *, void *);
extern void FUN_020472cc(void *, int);
extern void FUN_020456bc(void *, int);
extern void FUN_0203666c(void *);
extern char *FUN_02047314(void *, int);
extern char *FUN_020475ec(void *, int);
extern char *FUN_02047b10(void *, int);
extern char *FUN_02048008(void *, int);
extern char *FUN_0204886c(void *, int, int, int);
extern char *FUN_02048e2c(void *, void *);
extern char *FUN_020495e0(void *, int);
extern char *FUN_02049f0c(void *, int);
extern char *FUN_0204a000(void *);
extern char *FUN_0204a2f0(void *);
extern char *FUN_0204a3c4(void *, void *, int);
extern char *FUN_0207a670(void *, int);
extern char *FUN_0207a954(void *, int, int);
extern char *FUN_0207ae64(void *, int);
extern char *FUN_0207b168(void *, int);
extern char *FUN_0207b484(void *, int, int);
extern char *FUN_0207bf08(void *, int, int);
extern char *FUN_0207c764(void *, int);
extern char *FUN_0207cbf4(void *, int);
extern char *FUN_0207cf24(void *, int);
extern char *FUN_0207d2ac(void *, int);
extern char *FUN_0207d76c(void *, int);
extern char *FUN_0207d8dc(void *, int, int);
extern char *FUN_0207da00(void *, int, int);
extern char *FUN_0207dd58(void *, int);
extern char *FUN_0207e084(void *, int);
extern char *FUN_0207e444(void *, int);
extern char *FUN_0207e61c(void *, int);
extern char *FUN_0207e858(void *, int, int);
extern char *FUN_0207edbc(void *, int, void *, void *);
extern char *FUN_020877fc(void *, int, int);
extern char *FUN_020af5d8(void *, int);
extern char *FUN_020af794(void *);

char *FUN_02046d94(u32 *input, int a, int b) {
    u32 d[25];
    int tag = 9;
    char *p = 0;
    char *local = DAT_02108d04;

    if (local && input[22] == *(u32 *)(local + 252)) {
        tag = 8;
    }

    if ((int)input[21] < 149) {
        FUN_02046d00(d, input);
        FUN_020472cc(d, input[21]);
        FUN_020456bc(d, input[21]);
        switch (input[21]) {
        case 2:
        case 3:
        case 4:
            p = FUN_020877fc(d, 0, a);
            tag = 12;
            break;
        case 6:
            tag = 7;
        case 5: {
            u16 value = 0;
            if (a >= 0) {
                value = (u16)a;
            }
            p = FUN_0204a3c4(d, &value, 2);
            if (p) {
                *(int *)(p + 172) = 2;
            }
            break;
        }
        case 14:
        case 15:
            p = FUN_020475ec(d, a - 1);
            break;
        case 16:
            p = FUN_0207a670(d, a);
            break;
        case 17: {
            u32 other[25];
            FUN_0203666c(other);
            other[4] = d[4];
            *(V *)(other + 8) = *(V *)(d + 8);
            *(u16 *)((char *)other + 58) = *(u16 *)((char *)d + 58);
            other[22] = d[22];
            other[24] = d[24];
            other[21] = 16;
            FUN_020472cc(other, 16);
            FUN_020456bc(other, other[21]);
            p = FUN_0207a954(other, a, b);
            break;
        }
        case 18:
            p = FUN_0207ae64(d, a);
            break;
        case 19:
            p = FUN_0207b168(d, a);
            break;
        case 20:
            p = FUN_0207b484(d, a, 0);
            break;
        case 140:
            p = FUN_0207b484(d, a, 1);
            break;
        case 21:
            p = FUN_0207bf08(d, a, b);
            break;
        case 22: {
            u32 other[25];
            int group = (a - 1) / 5;
            FUN_0203666c(other);
            other[4] = d[4];
            *(V *)(other + 8) = *(V *)(d + 8);
            *(u16 *)((char *)other + 58) = *(u16 *)((char *)d + 58);
            other[22] = d[22];
            other[24] = d[24];
            if (group < 1) {
                other[21] = 35;
            } else if (group < 2) {
                other[21] = 134;
            } else {
                other[21] = 135;
            }
            FUN_020472cc(other, other[21]);
            FUN_020456bc(other, other[21]);
            p = FUN_0207c764(other, a);
            break;
        }
        case 23: {
            u32 other[25];
            int group = (a - 1) / 5;
            FUN_02046d00(other, d);
            other[4] = d[4];
            if (group < 1) {
                other[21] = 23;
            } else if (group < 2) {
                other[21] = 136;
            } else {
                other[21] = 137;
            }
            FUN_020472cc(other, other[21]);
            FUN_020456bc(other, other[21]);
            p = FUN_0207cbf4(other, a);
            break;
        }
        case 24:
            p = FUN_0207cf24(d, a);
            break;
        case 25: {
            u32 other[25];
            int group = (a - 1) / 5;
            FUN_02046d00(other, d);
            other[4] = d[4];
            if (group < 1) {
                other[21] = 25;
            } else if (group < 2) {
                other[21] = 138;
            } else {
                other[21] = 139;
            }
            FUN_020472cc(other, other[21]);
            FUN_020456bc(other, other[21]);
            p = FUN_0207d2ac(other, a);
            break;
        }
        case 11:
            p = FUN_02047314(d, 0);
            break;
        case 95:
            d[17] = 3;
            d[18] = 21;
            d[19] = (u32)-1;
            p = FUN_02047314(d, 0);
            break;
        case 28:
            d[17] = 72;
            d[18] = 2;
            d[19] = (u32)-1;
            p = FUN_02047314(d, 0);
            break;
        case 29:
        case 30:
            p = FUN_0207d76c(d, b);
            break;
        case 12:
        case 13:
            p = FUN_0207d8dc(d, a, b);
            break;
        case 0:
            p = FUN_02047314(d, 0);
            break;
        case 9:
            p = FUN_02047314(d, 0);
            break;
        case 1:
        case 8:
        case 10:
        case 26:
        case 27:
        case 35:
        case 36:
        case 39:
        case 40:
        case 45:
        case 46:
        case 47:
        case 48:
        case 52:
        case 53:
        case 55:
        case 66:
        case 67:
        case 68:
        case 69:
        case 72:
        case 73:
        case 74:
        case 75:
        case 76:
        case 77:
        case 78:
        case 79:
        case 80:
        case 81:
        case 82:
        case 83:
        case 84:
        case 85:
        case 86:
        case 87:
        case 88:
        case 89:
        case 90:
        case 91:
        case 92:
        case 93:
        case 94:
        case 96:
        case 97:
        case 98:
        case 99:
        case 100:
        case 101:
        case 103:
        case 104:
        case 105:
        case 106:
        case 107:
        case 108:
        case 109:
        case 110:
        case 111:
        case 112:
        case 113:
        case 114:
        case 115:
        case 116:
        case 117:
        case 118:
        case 119:
        case 120:
        case 121:
        case 122:
        case 124:
        case 125:
        case 126:
        case 127:
        case 128:
        case 129:
        case 130:
        case 131:
        case 132:
        case 133:
        case 134:
        case 135:
        case 136:
        case 137:
        case 138:
        case 139:
        case 141:
        case 142:
        case 143:
        case 144:
        default:
            p = FUN_02047314(d, 0);
            break;
        case 38:
            p = FUN_0207e858(d, 0, 0);
            break;
        case 37: {
            u32 other[25];
            FUN_02046d00(other, input);
            d[17] = (u32)-1;
            d[18] = (u32)-1;
            d[19] = (u32)-1;
            other[21] = 36;
            FUN_020472cc(other, 36);
            FUN_020456bc(other, other[21]);
            p = FUN_02048e2c(d, other);
            break;
        }
        case 41:
        case 42:
        case 44:
            p = FUN_02047b10(d, a);
            break;
        case 43:
            p = FUN_02048008(d, a);
            break;
        case 49:
        case 50:
        case 51:
        case 145: {
            u32 old = d[16];
            d[16] = (u32)-1;
            p = FUN_0204886c(d, old, a, b);
            break;
        }
        case 31:
            p = FUN_0207da00(d, a, b);
            break;
        case 32:
            if (b == 0) {
                p = FUN_0207dd58(d, a);
            } else if (b == 1) {
                p = FUN_0207e084(d, a);
            }
            break;
        case 102:
            p = FUN_0207e61c(d, a);
            break;
        case 33:
            p = FUN_0207e444(d, a);
            break;
        case 34:
            p = FUN_0207edbc(d, 0, DAT_020fc958, DAT_020fc958);
            break;
        case 56:
        case 57:
        case 58:
            if (a == 13) {
                p = FUN_020495e0(d, b);
            } else {
                p = FUN_02049f0c(d, b);
            }
            break;
        case 59:
        case 60:
        case 61:
        case 62:
        case 63:
        case 64:
        case 65:
            p = FUN_0204a000(d);
            break;
        case 70:
            p = FUN_020af5d8(d, a);
            break;
        case 71:
            p = FUN_020af794(d);
            break;
        case 146:
            p = FUN_0204a2f0(d);
            break;
        case 123:
            d[7] |= 0x08000000;
            d[17] = 1;
            d[18] = 25;
            d[19] = (u32)-1;
            p = FUN_02047314(d, 0);
            break;
        case 7:
        case 54:
            break;
        }
    } else {
        p = FUN_02047314(input, 0);
    }

    if (p) {
        p[252] = (char)tag;
    }
    return p;
}
