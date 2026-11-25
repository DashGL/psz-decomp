// flags: -O4,p -noThumb
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int BOOL;

typedef struct {
    u32 signature;
    u16 byteOrder;
    u16 version;
    u32 fileSize;
    u16 headerSize;
    u16 dataBlocks;
} NNSG2dBinaryFileHeader;

extern void FUN_02068728(void);
extern void FUN_0201879c(void *);
extern u8 *FUN_02012b70(void *, u32);

static inline BOOL IsSigValid(const NNSG2dBinaryFileHeader *pBinFile, u32 sig) {
    if (pBinFile != 0) {
        if (pBinFile->signature == sig) {
            return 1;
        }
    }
    return 0;
}

static inline BOOL IsVerValid(const NNSG2dBinaryFileHeader *pBinFile, u16 ver) {
    if (pBinFile != 0) {
        if (pBinFile->version >= ver) {
            return 1;
        }
    }
    return 0;
}

static inline BOOL IsBinFileValid(const NNSG2dBinaryFileHeader *pBinFile, u32 sig, u16 ver) {
    if (pBinFile != 0) {
        return IsSigValid(pBinFile, sig) && IsVerValid(pBinFile, ver);
    }
    return 0;
}

BOOL FUN_02018648(NNSG2dBinaryFileHeader *pNfr, u8 **ppFont) {
    BOOL bOldVer = 0;
    u8 *pBlock;

    if (!IsBinFileValid(pNfr, 0x4e465452, 0x0101)) {
        if (!IsBinFileValid(pNfr, 0x4e465452, 0x0100)) {
            FUN_02068728();
        }
        bOldVer = 1;
    }

    FUN_0201879c(pNfr);

    pBlock = FUN_02012b70(pNfr, 0x46494e46);
    if (pBlock == 0) {
        *ppFont = 0;
        return 0;
    }

    *ppFont = pBlock + 8;
    if (bOldVer) {
        (*(u8 **)(*ppFont + 8))[7] = 0;
    }
    return 1;
}
