// flags: -O4,p -noThumb
extern void FUN_0205f7e4(void);
extern void FUN_0205f840(void *, unsigned int, unsigned int);
extern void FUN_0205f980(void);
typedef struct {
    unsigned int pad0[2];
    unsigned int texVramKey;
    unsigned short texSize;
    unsigned short padE;
    unsigned short texFlag;
    unsigned short pad12;
    unsigned int texOffset;
    unsigned int tex4x4VramKey;
    unsigned short tex4x4Size;
    unsigned short pad1E;
    unsigned short tex4x4Flag;
    unsigned short pad22;
    unsigned int tex4x4Offset;
    unsigned int tex4x4PlttIdxOffset;
} TexRes;

void FUN_02018d7c(TexRes *pTex, int exec_begin_end) {
    if (exec_begin_end) FUN_0205f7e4();
    {
        unsigned int sz = (unsigned int)pTex->texSize << 3;
        if (sz != 0) {
            FUN_0205f840((unsigned char *)pTex + pTex->texOffset, (pTex->texVramKey & 0xFFFF) << 3, sz);
            pTex->texFlag |= 1;
        }
    }
    {
        unsigned int plttOfs;
        unsigned int sz = (unsigned int)pTex->tex4x4Size << 3;
        if (sz != 0) {
            unsigned int addr = (pTex->tex4x4VramKey & 0xFFFF) << 3;
            plttOfs = pTex->tex4x4PlttIdxOffset;
            FUN_0205f840((unsigned char *)pTex + pTex->tex4x4Offset, addr, sz);
            FUN_0205f840((unsigned char *)pTex + plttOfs, 0x20000 + ((addr & 0x1ffff) >> 1) + ((addr & 0x40000) >> 2), sz >> 1);
            pTex->tex4x4Flag |= 1;
        }
    }
    if (exec_begin_end) FUN_0205f980();
}
