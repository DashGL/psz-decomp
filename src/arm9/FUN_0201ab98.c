// flags: -O4,p -noThumb
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef void (*Hook)(void *);
typedef int (*Blend)(void *, void *, u32);
typedef void (*Scale)(void *, void *, void *, u32);
typedef struct {
    u32 flag;
    u32 scale[3];
    u32 scaleEx0[3];
    u32 scaleEx1[3];
    int rot[9];
    u32 trans[3];
} JntRes;
extern const u8 DAT_020ec064[9][4];
extern void FUN_0201c9d4(int, void *, int);
#pragma thumb on
extern void *FUN_020658f4(void *);
#pragma thumb off
#define W(a, o) (*(u32 *)((u32)(a) + (o)))
#define H(a, o) (*(u16 *)((u32)(a) + (o)))
#define S(a, o) (*(short *)((u32)(a) + (o)))
#define B(a, o) (*(u8 *)((u32)(a) + (o)))

static inline unsigned char *inner_get(unsigned char *ip, unsigned int idx) {
    if (ip != 0 && idx < ip[1]) {
        unsigned short off = *(unsigned short *)(ip + 6);
        unsigned short stride = *(unsigned short *)(ip + off);
        return ip + off + 4 + stride * idx;
    }
    return 0;
}

static inline unsigned char *outer_get(unsigned char *ip, unsigned int idx) {
    if (ip != 0) {
        unsigned char *p = inner_get(ip, idx);
        if (p != 0) {
            return ip + *(int *)p;
        }
    }
    return 0;
}

void FUN_0201ab98(char *self, u32 mode) {
    u32 size = 4;
    u32 index = ((u8 *)W(self, 0))[1];
    int stage, skip;

    B(self, 0xae) = (u8)index;
    W(self, 8) |= 0x10;
    if (W(self, 8) & 0x400) {
        if (mode == 0x40 || mode == 0x60) ++size;
        if (mode == 0x20 || mode == 0x60) {
            ++size;
            if (!(W(self, 8) & 0x100)) {
                u32 parameter = ((u8 *)W(self, 0))[4];
                FUN_0201c9d4(0x14, &parameter, 1);
            }
        }
        W(self, 0) += size;
        return;
    }

    if (mode == 0x40 || mode == 0x60) {
        u32 parameter;
        ++size;
        if (mode == 0x40) parameter = ((u8 *)W(self, 0))[4];
        else parameter = ((u8 *)W(self, 0))[5];
        if (!(W(self, 8) & 0x100)) FUN_0201c9d4(0x14, &parameter, 1);
    }

    W(self, 0xb4) = (u32)(self + 0x120);
    stage = W(self, 0x24) ? B(self, 0x92) : 0;
    if (stage == 1) {
        W(self, 8) &= ~0x40;
        ((Hook)W(self, 0x24))(self);
        stage = W(self, 0x24) ? B(self, 0x92) : 0;
        skip = W(self, 8) & 0x40;
    } else {
        skip = 0;
    }

    if (!skip) {
        JntRes *result;
        int cached;
        u32 model = W(self, 4);
        JntRes *table = (JntRes *)W(model, 0x34);
        if (table) {
            result = &table[index];
            cached = (W(self, 8) & 0x80) ? 0 : 1;
        } else {
            result = (JntRes *)((u32)self + 0x120);
            cached = 0;
        }
        if (!cached) {
            result->flag = 0;
            model = W(self, 4);
            if (!W(model, 0x10) || !((Blend)W(model, 0x14))(result, (void *)W(model, 0x10), index)) {
                u8 *record = outer_get((u8 *)W(self, 0xc8), index);
                u8 *data = record + 4;
                if (H(record, 0) & 1) {
                    result->flag |= 4;
                } else {
                    result->trans[0] = W(data, 0);
                    result->trans[1] = W(data, 4);
                    result->trans[2] = W(data, 8);
                    data += 12;
                }
                if (H(record, 0) & 2) {
                    result->flag |= 2;
                } else if (H(record, 0) & 8) {
                    int axis = (H(record, 0) & 0xf0) >> 4;
                    int a = S(data, 0);
                    int b = S(data, 2);
                    FUN_020658f4(result->rot);
                    result->rot[axis] = (H(record, 0) & 0x100) ? -0x1000 : 0x1000;
                    result->rot[DAT_020ec064[axis][0]] = a;
                    result->rot[DAT_020ec064[axis][1]] = b;
                    result->rot[DAT_020ec064[axis][2]] = (H(record, 0) & 0x200) ? -b : b;
                    result->rot[DAT_020ec064[axis][3]] = (H(record, 0) & 0x400) ? -a : a;
                    data += 4;
                } else {
                    result->rot[0] = S(record, 2);
                    result->rot[1] = S(data, 0);
                    result->rot[2] = S(data, 2);
                    result->rot[3] = S(data, 4);
                    result->rot[4] = S(data, 6);
                    result->rot[5] = S(data, 8);
                    result->rot[6] = S(data, 10);
                    result->rot[7] = S(data, 12);
                    result->rot[8] = S(data, 14);
                    data += 16;
                }
                ((Scale)W(self, 0xdc))(result, data, (void *)W(self, 0), H(record, 0));
            }
        }
        W(self, 0xb4) = (u32)result;
    }

    if (stage == 2) {
        W(self, 8) &= ~0x40;
        ((Hook)W(self, 0x24))(self);
        stage = W(self, 0x24) ? B(self, 0x92) : 0;
        skip = W(self, 8) & 0x40;
    } else {
        skip = 0;
    }

    if (!skip && !(W(self, 8) & 0x100)) {
        ((Hook)W(self, 0xe0))((void *)W(self, 0xb4));
    }
    W(self, 0xb4) = 0;

    if (stage == 3) {
        W(self, 8) &= ~0x40;
        ((Hook)W(self, 0x24))(self);
        skip = W(self, 8) & 0x40;
    } else {
        skip = 0;
    }

    if (mode == 0x20 || mode == 0x60) {
        ++size;
        if (!skip && !(W(self, 8) & 0x100)) {
            u32 parameter = ((u8 *)W(self, 0))[4];
            FUN_0201c9d4(0x13, &parameter, 1);
        }
    }
    W(self, 0) += size;
}
