// flags: -O4,p -noThumb
typedef unsigned int u32;
typedef unsigned short u16;
typedef int fx32;

typedef struct {
    u32 pad0;
    u32 pad4;
    u32 flag;
    u32 ofsArrayRot3;
    u32 ofsArrayRot5;
    u16 ofsTag[1];
} ResJntAnm;

typedef struct {
    u32 flag;
    u32 pad[9];
    fx32 _00, _01, _02;
    fx32 _10, _11, _12;
    fx32 _20, _21, _22;
    fx32 tx, ty, tz;
} JntAnmResult;

typedef struct {
    void *c;
    u32 pad[54];
    void (*funcJntScale)(void *, void *, void *, u32);
} RS;

extern void FUN_0201e17c(void *, int, void *, void *);
extern void FUN_0201e024(void *, int, void *, void *);
extern void FUN_0201ea6c(void *, int, void *, void *);
extern void FUN_0201e654(void *, int, void *, void *);
extern void FUN_0201e4c0(void *, int, void *, void *);
extern void FUN_0201e2d8(void *, int, void *, void *);
extern void FUN_0201d9c8(void *);
extern void FUN_0201daf0(void *);
extern void FUN_0201da60(void *);
extern int FUN_0201edb0(void *, void *, void *, u32);
extern RS *DAT_02105980;

static inline void getTransData(fx32 *pVal, int frame, u32 *pData, ResJntAnm *pJntAnm, int interpolate) {
    if (interpolate) {
        FUN_0201e17c(pVal, frame, pData, pJntAnm);
    } else {
        FUN_0201e024(pVal, frame, pData, pJntAnm);
    }
}

static inline void getScaleData(fx32 *pVal, fx32 *pInvVal, int frame, u32 *pData, ResJntAnm *pJntAnm, int interpolate) {
    fx32 s_invs[2];
    if (interpolate) {
        FUN_0201e4c0(s_invs, frame, pData, pJntAnm);
    } else {
        FUN_0201e2d8(s_invs, frame, pData, pJntAnm);
    }
    *pVal = s_invs[0];
    *pInvVal = s_invs[1];
}

void FUN_0201dc70(ResJntAnm *base, u32 node, int time, JntAnmResult *out) {
    u32 *p = (u32 *)((char *)base + base->ofsTag[node]);
    u32 flags = *p;
    int interpolate;
    fx32 scale[6];

    if (flags & 1) {
        out->flag = 7;
        goto END;
    }

    p++;
    interpolate = ((time & 0xfff) && (base->flag & 1)) ? 1 : 0;
    out->flag = 0;

    if (!(flags & 6)) {
        if (!(flags & 8)) {
            getTransData(&out->tx, time, p, base, interpolate);
            p += 2;
        } else {
            out->tx = (fx32)*p++;
        }
        if (!(flags & 16)) {
            getTransData(&out->ty, time, p, base, interpolate);
            p += 2;
        } else {
            out->ty = (fx32)*p++;
        }
        if (!(flags & 32)) {
            getTransData(&out->tz, time, p, base, interpolate);
            p += 2;
        } else {
            out->tz = (fx32)*p++;
        }
    } else if (flags & 2) {
        out->flag |= 4;
    } else {
        FUN_0201d9c8(out);
    }

    if (!(flags & 0xc0)) {
        if (!(flags & 0x100)) {
            if (interpolate) {
                FUN_0201ea6c(&out->_00, time, p, base);
            } else {
                FUN_0201e654(&out->_00, time, p, base);
            }
            p += 2;
        } else {
            if (FUN_0201edb0(&out->_00, (char *)base + base->ofsArrayRot3, (char *)base + base->ofsArrayRot5, *p)) {
                fx32 x = (out->_01 * out->_12 - out->_02 * out->_11) >> 12;
                fx32 y = (out->_02 * out->_10 - out->_00 * out->_12) >> 12;
                fx32 z = (out->_00 * out->_11 - out->_01 * out->_10) >> 12;
                out->_20 = x;
                out->_21 = y;
                out->_22 = z;
            }
            p++;
        }
    } else if (flags & 0x40) {
        out->flag |= 2;
    } else {
        FUN_0201daf0(out);
    }

    if (!(flags & 0x600)) {
        if (!(flags & 0x800)) {
            getScaleData(&scale[0], &scale[3], time, p, base, interpolate);
        } else {
            scale[0] = (fx32)p[0];
            scale[3] = (fx32)p[1];
        }
        if (!(flags & 0x1000)) {
            getScaleData(&scale[1], &scale[4], time, p + 2, base, interpolate);
        } else {
            scale[1] = (fx32)p[2];
            scale[4] = (fx32)p[3];
        }
        if (!(flags & 0x2000)) {
            getScaleData(&scale[2], &scale[5], time, p + 4, base, interpolate);
        } else {
            scale[2] = (fx32)p[4];
            scale[5] = (fx32)p[5];
        }
    } else if (flags & 0x200) {
        out->flag |= 1;
    } else {
        FUN_0201da60(out);
        return;
    }

END:
    (*DAT_02105980->funcJntScale)(out, scale, DAT_02105980->c, (out->flag & 1) ? 4 : 0);
}
