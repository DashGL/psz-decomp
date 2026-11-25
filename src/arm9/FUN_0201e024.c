// flags: -O4,p -noThumb
typedef unsigned int u32;
typedef unsigned char u8;
typedef int fx32;
typedef short fx16;
typedef long long s64;

void FUN_0201e024(fx32 *pVal, fx32 frame, const u32 *pData, const u8 *pAnm) {
    u32 frame_idx = (u32)(frame >> 12);
    const u8 *p = pAnm + pData[1];
    u32 flags = pData[0];
    u32 idx, idx_sub, last_interp;
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
                if (flags & 0x20000000u) {
                    fx32 t = ((const fx16 *)p)[idx_sub] * 3;
                    *pVal = (t + ((const fx16 *)p)[idx]) >> 2;
                } else {
                    s64 t = (s64)((const fx32 *)p)[idx_sub] * 3;
                    *pVal = (fx32)((t + ((const fx32 *)p)[idx]) >> 2);
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
interp_2:
    if (flags & 0x20000000u) {
        *pVal = (((const fx16 *)p)[idx] + *((const fx16 *)p + idx + 1)) >> 1;
    } else {
        *pVal = (((const fx32 *)p)[idx] >> 1) + (*((const fx32 *)p + idx + 1) >> 1);
    }
    return;
direct:
    if (flags & 0x20000000u) {
        *pVal = ((const fx16 *)p)[idx];
    } else {
        *pVal = ((const fx32 *)p)[idx];
    }
}
