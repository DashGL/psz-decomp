// flags: -O4,p -noThumb
typedef unsigned int u32;
typedef unsigned short u16;
typedef int fx32;
typedef short fx16;

typedef struct {
    u32 pad0;
    u16 numFrame;
    u16 pad6;
    u32 flag;
} AnmHdr;

void FUN_0201e17c(fx32 *pVal, fx32 frame, const u32 *pData, const AnmHdr *pAnm) {
    u32 p = (u32)pAnm + pData[1];
    u32 idx = (u32)(frame >> 12);
    u32 last = pAnm->numFrame - 1u;
    u32 flags = pData[0];

    if (last == idx) {
        if (flags & 0xc0000000u) {
            if (flags & 0x40000000u) {
                idx = (idx & 1) + (idx >> 1);
            } else {
                idx = (idx & 3) + (idx >> 2);
            }
        }
        if (pAnm->flag & 2) {
            fx32 remainder = frame & 0xfff;
            fx32 v0, v1;
            if (flags & 0x20000000u) {
                v0 = *(const fx16 *)(p + idx * 2);
                v1 = *(const fx16 *)p;
            } else {
                v0 = *(const fx32 *)(p + idx * 4);
                v1 = *(const fx32 *)p;
            }
            *pVal = v0 + ((remainder * (v1 - v0)) >> 12);
        } else {
            fx32 v0;
            if (flags & 0x20000000u) {
                v0 = *(const fx16 *)(p + idx * 2);
            } else {
                v0 = *(const fx32 *)(p + idx * 4);
            }
            *pVal = v0;
        }
        return;
    }

    {
        int step;
        int step_shift;
        fx32 v0, v1;

        if (!(flags & 0xc0000000u)) {
            goto normal;
        }
        {
            u32 last_interp = (flags & 0x1fff0000u) >> 16;
            if (flags & 0x40000000u) {
                if (idx >= last_interp) {
                    idx = last_interp >> 1;
                    goto normal;
                }
                idx >>= 1;
                frame &= 0x1fff;
                step = 2;
                step_shift = 1;
            } else {
                if (idx >= last_interp) {
                    idx = (idx & 3) + (idx >> 2);
                    goto normal;
                }
                idx >>= 2;
                frame &= 0x3fff;
                step = 4;
                step_shift = 2;
            }
            goto interp;
        }
normal:
        frame &= 0xfff;
        step = 1;
        step_shift = 0;
interp:
        if (flags & 0x20000000u) {
            v0 = *((const fx16 *)p + idx);
            v1 = *((const fx16 *)p + idx + 1);
        } else {
            v0 = *(const fx32 *)(p + idx * 4);
            v1 = *(const fx32 *)(p + idx * 4 + 4);
        }
        *pVal = (v0 * step + (((v1 - v0) * frame) >> 12)) >> step_shift;
    }
}
