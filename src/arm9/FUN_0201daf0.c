// flags: -O4,p -noThumb
#pragma opt_common_subs off
typedef unsigned char u8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;

struct PivotRow {
    u8 a, b, c, d;
};

struct Out {
    u32 flag;
    u32 pad[9];
    int rot[9];
};

struct Jnt {
    u16 flag;
    s16 m00;
};

extern u8 *DAT_02105980;
extern const struct PivotRow DAT_020ec088[];
extern void FUN_020658f4(void *);

static inline void *get_dict_data(u8 *dict, u32 idx) {
    if (dict != 0 && idx < dict[1]) {
        u16 off = *(u16 *)(dict + 6);
        u16 stride = *(u16 *)(dict + off);
        return dict + off + 4 + stride * idx;
    }
    return 0;
}

static inline struct Jnt *get_jnt(u8 *dict, u32 idx) {
    if (dict != 0) {
        u32 *e = (u32 *)get_dict_data(dict, idx);
        if (e != 0) {
            return (struct Jnt *)(dict + *e);
        }
    }
    return 0;
}

void FUN_0201daf0(struct Out *out) {
    u8 *state = DAT_02105980;
    u32 idx = (*(u8 **)state)[1];
    struct Jnt *p = get_jnt(*(u8 **)(state + 0xc8), idx);
    u16 flags = p->flag;
    s16 *q = (s16 *)((u8 *)p + 4);
    if ((flags & 1) == 0) {
        q = (s16 *)((u8 *)q + 0xc);
    }
    if ((flags & 2) == 0) {
        if ((flags & 8) != 0) {
            int k = (int)(flags & 0xf0) >> 4;
            int a = q[0];
            int b = q[1];
            FUN_020658f4(out->rot);
            out->rot[k] = (p->flag & 0x100) ? -0x1000 : 0x1000;
            out->rot[DAT_020ec088[k].a] = a;
            out->rot[DAT_020ec088[k].b] = b;
            out->rot[DAT_020ec088[k].c] = (p->flag & 0x200) ? -b : b;
            out->rot[DAT_020ec088[k].d] = (p->flag & 0x400) ? -a : a;
        } else {
            out->rot[0] = p->m00;
            out->rot[1] = q[0];
            out->rot[2] = q[1];
            out->rot[3] = q[2];
            out->rot[4] = q[3];
            out->rot[5] = q[4];
            out->rot[6] = q[5];
            out->rot[7] = q[6];
            out->rot[8] = q[7];
        }
    } else {
        out->flag |= 2;
    }
}
