// flags: -noThumb
typedef unsigned int u32;
typedef unsigned char u8;
extern u32 (*UNK_020f6934)(u32, u32, u32), (*UNK_020f693c)(u32, u32, u32);
extern int (*UNK_020f6938)(u32), (*UNK_020f6940)(u32);
extern void *FUN_0201d774(void *), *FUN_0201d764(void *);
extern u32 FUN_02018d40(void *), FUN_02018d54(void *), FUN_02018e80(void *);
extern void FUN_02018d68(void *, u32, u32), FUN_02018e94(void *, u32), FUN_02018d7c(void *, int), FUN_02018e9c(void *, int), FUN_020194ec(void *, void *);
int FUN_0201cc18(u32 *resource) {
    void *texture, *model;
    int ordinaryOK, compressedOK, paletteOK;
    u32 ordinarySize, compressedSize, paletteSize, ordinary, compressed, palette;
    switch (resource[0]) {
    case 0x30444d42:
    case 0x30585442:
        ordinaryOK = 1;
        compressedOK = 1;
        paletteOK = 1;
        texture = FUN_0201d774(resource);
        if (texture) {
            ordinarySize = FUN_02018d40(texture);
            compressedSize = FUN_02018d54(texture);
            paletteSize = FUN_02018e80(texture);
            if (ordinarySize) {
                ordinary = UNK_020f6934(ordinarySize, 0, 0);
                if (!ordinary) ordinaryOK = 0;
            } else ordinary = 0;
            if (compressedSize) {
                compressed = UNK_020f6934(compressedSize, 1, 0);
                if (!compressed) compressedOK = 0;
            } else compressed = 0;
            if (paletteSize) {
                palette = UNK_020f693c(paletteSize, *(unsigned short *)((u8 *)texture + 32) & 0x8000, 0);
                if (!palette) paletteOK = 0;
            } else palette = 0;
            if (!ordinaryOK || !compressedOK || !paletteOK) {
                if (paletteOK) UNK_020f6940(palette);
                if (compressedOK) UNK_020f6938(compressed);
                if (ordinaryOK) UNK_020f6938(ordinary);
                return 0;
            }
            FUN_02018d68(texture, ordinary, compressed);
            FUN_02018e94(texture, palette);
            FUN_02018d7c(texture, 1);
            FUN_02018e9c(texture, 1);
        }
        if (resource[0] == 0x30444d42) {
            model = FUN_0201d764(resource);
            if (texture) FUN_020194ec(model, texture);
        }
        return 1;
    case 0x30414342:
    case 0x30414d42:
    case 0x30415442:
    case 0x30415642:
    case 0x30505442:
        return 1;
    default:
        return 0;
    }
}
