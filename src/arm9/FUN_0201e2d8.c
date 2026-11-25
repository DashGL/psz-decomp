// flags: -O4,p -noThumb
typedef unsigned int u32;
typedef unsigned char u8;
typedef int fx32;
typedef short fx16;
typedef long long s64;

typedef struct {
    fx16 a, b;
} Fx16Pair;

typedef struct {
    fx32 a, b;
} Fx32Pair;

void FUN_0201e2d8(fx32 *pVal, fx32 frame, const u32 *pData, const u8 *pAnm) {
    u32 frame_idx = (u32)(frame >> 12);
    const u8 *p = pAnm + pData[1];
    u32 flags = pData[0];
    u32 idx_sub, idx, last_interp;
    if (!(flags & 0xc0000000u)) {
        idx = frame_idx;
        goto direct;
    }
    last_interp = (flags & 0x1fff0000u) >> 16;
    if (flags & 0x40000000u) {
        if (frame_idx & 1) {
            if (frame_idx > last_interp) {
                idx = (last_interp >> 1) + 1;
                goto direct;
            }
            idx = frame_idx >> 1;
            goto interp_2;
        } else {
            idx = frame_idx >> 1;
            goto direct;
        }
    } else {
        if (frame_idx & 3) {
            if (frame_idx > last_interp) {
                idx = (last_interp >> 2) + (frame_idx & 3);
                goto direct;
            }
            if (frame_idx & 1) {
                if (frame_idx & 2) {
                    idx = frame_idx >> 2;
                    idx_sub = idx + 1;
                } else {
                    idx_sub = frame_idx >> 2;
                    idx = idx_sub + 1;
                }
                {
                    fx32 v0, v1;
                    if (flags & 0x20000000u) {
                        const Fx16Pair *q = (const Fx16Pair *)p;
                        v0 = q[idx_sub].a;
                        v1 = q[idx].a;
                        pVal[0] = (v0 + (v0 << 1) + v1) >> 2;
                        v0 = q[idx_sub].b;
                        v1 = q[idx].b;
                        pVal[1] = (v0 + (v0 << 1) + v1) >> 2;
                    } else {
                        const Fx32Pair *q = (const Fx32Pair *)p;
                        s64 t;
                        v0 = q[idx_sub].a;
                        v1 = q[idx].a;
                        t = (s64)v0 * 3;
                        pVal[0] = (fx32)((t + v1) >> 2);
                        v0 = q[idx_sub].b;
                        v1 = q[idx].b;
                        t = (s64)v0 * 3;
                        pVal[1] = (fx32)((t + v1) >> 2);
                    }
                }
                return;
            } else {
                idx = frame_idx >> 2;
                goto interp_2;
            }
        } else {
            idx = frame_idx >> 2;
            goto direct;
        }
    }
direct:
    if (flags & 0x20000000u) {
        const Fx16Pair *q = (const Fx16Pair *)p;
        pVal[0] = q[idx].a;
        pVal[1] = q[idx].b;
    } else {
        const Fx32Pair *q = (const Fx32Pair *)p;
        pVal[0] = q[idx].a;
        pVal[1] = q[idx].b;
    }
    return;
interp_2:
    if (flags & 0x20000000u) {
        const Fx16Pair *q = (const Fx16Pair *)p;
        pVal[0] = (q[idx].a + (q + idx)[1].a) >> 1;
        pVal[1] = (q[idx].b + (q + idx)[1].b) >> 1;
    } else {
        const Fx32Pair *q = (const Fx32Pair *)p;
        pVal[0] = (q[idx].a + (q + idx)[1].a) >> 1;
        pVal[1] = (q[idx].b + (q + idx)[1].b) >> 1;
    }
}
