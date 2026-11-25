// flags: -O4,p -noThumb
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;

typedef struct {
    u32 texImageParam;
    u32 extraParam;
} TexData;

extern TexData *FUN_0201d43c(void *, u32);
extern s32 FUN_0205c520(s32, s32);

void FUN_0201f834(u32 *self, u32 key, u32 *out) {
    TexData *p;
    u32 addr;
    u32 origW, origH;

    if (self != 0) {
        p = FUN_0201d43c((char *)self + 0x3c, key);
    } else {
        p = 0;
    }

    if ((p->texImageParam & 0x1c000000) != 0x14000000) {
        addr = ((u32)(u16)self[2] << 3) >> 3;
    } else {
        addr = ((u32)(u16)self[6] << 3) >> 3;
    }

    out[4] &= 0xc00f0000;
    out[4] |= (p->texImageParam + addr);

    ((u16 *)out)[0x16] = (u16)(p->extraParam & 0x7ff);
    ((u16 *)out)[0x17] = (u16)((p->extraParam & (0x7ff << 11)) >> 11);

    origW = p->extraParam & 0x7ff;
    origH = (p->extraParam & (0x7ff << 11)) >> 11;

    out[0xc] = (origW != ((u16 *)out)[0x16])
        ? FUN_0205c520((s32)(origW << 12), (s32)(((u16 *)out)[0x16] << 12))
        : 0x1000;

    out[0xd] = (origH != ((u16 *)out)[0x17])
        ? FUN_0205c520((s32)(origH << 12), (s32)(((u16 *)out)[0x17] << 12))
        : 0x1000;
}
