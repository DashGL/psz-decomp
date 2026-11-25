// FUN_020ccd44 @ 0x020ccd44 (0x200, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch27-manifest.json; original draft retained for referenced provenance.
// Copy optional profile strings and scalar fields into the expanded record.
// check: 2.0/sp2p3 target=0x200 candidate=0x200 words=0 exact_bytes=0 bad_relocs=0
typedef unsigned int u32;
extern void FUN_020d183c(char *, const char *, int);
void FUN_020ccd44(unsigned char *input, unsigned char *output)
{
    if (*(const char **)(input + 0)) FUN_020d183c((char *)output + 8, *(const char **)(input + 0), 31);
    else output[8] = 0;
    if (*(const char **)(input + 4)) FUN_020d183c((char *)output + 39, *(const char **)(input + 4), 21);
    else output[39] = 0;
    if (*(const char **)(input + 8)) FUN_020d183c((char *)output + 60, *(const char **)(input + 8), 51);
    else output[60] = 0;
    if (*(const char **)(input + 12)) FUN_020d183c((char *)output + 111, *(const char **)(input + 12), 31);
    else output[111] = 0;
    if (*(const char **)(input + 16)) FUN_020d183c((char *)output + 142, *(const char **)(input + 16), 31);
    else output[142] = 0;
    if (*(const char **)(input + 20)) FUN_020d183c((char *)output + 173, *(const char **)(input + 20), 76);
    else output[173] = 0;
    *(u32 *)(output + 0xfc) = *(u32 *)(input + 0x18);
    FUN_020d183c((char *)output + 0x100, (char *)input + 0x1c, 11);
    FUN_020d183c((char *)output + 0x10b, (char *)input + 0x27, 3);
    *(u32 *)(output + 0x110) = *(u32 *)(input + 0x2c);
    *(u32 *)(output + 0x114) = *(u32 *)(input + 0x30);
    if ((u32)input + 0x34) FUN_020d183c((char *)output + 0x118, (char *)input + 0x34, 128);
    else output[0x118] = 0;
    *(u32 *)(output + 0x198) = *(u32 *)(input + 0xb4);
    *(u32 *)(output + 0x19c) = *(u32 *)(input + 0xb8);
    *(u32 *)(output + 0x1a0) = *(u32 *)(input + 0xbc);
    *(u32 *)(output + 0x1a4) = *(u32 *)(input + 0xc0);
    *(u32 *)(output + 0x1a8) = *(u32 *)(input + 0xc4);
    if (*(const char **)(input + 0xc8)) FUN_020d183c((char *)output + 0x1ac, *(const char **)(input + 0xc8), 51);
    else output[0x1ac] = 0;
    *(u32 *)(output + 0xfc) = *(u32 *)(input + 0x18);
    *(u32 *)(output + 0x110) = *(u32 *)(input + 0x2c);
    *(u32 *)(output + 0x114) = *(u32 *)(input + 0x30);
    *(u32 *)(output + 0x198) = *(u32 *)(input + 0xb4);
    *(u32 *)(output + 0x19c) = *(u32 *)(input + 0xb8);
    *(u32 *)(output + 0x1a0) = *(u32 *)(input + 0xbc);
    *(u32 *)(output + 0x1a4) = *(u32 *)(input + 0xc0);
    *(u32 *)(output + 0x1a8) = *(u32 *)(input + 0xc4);
    *(u32 *)(output + 0x1e0) = *(u32 *)(input + 0xcc);
    *(u32 *)(output + 0x1e4) = *(u32 *)(input + 0xd0);
    *(u32 *)(output + 0x1e8) = *(u32 *)(input + 0xd4);
    *(u32 *)(output + 0x1ec) = *(u32 *)(input + 0xd8);
    *(u32 *)(output + 0x1f0) = *(u32 *)(input + 0xdc);
    *(u32 *)(output + 0x1f4) = *(u32 *)(input + 0xe0);
    *(u32 *)(output + 0x1f8) = *(u32 *)(input + 0xe4);
    *(u32 *)(output + 0x1fc) = *(u32 *)(input + 0xe8);
    *(u32 *)(output + 0x200) = *(u32 *)(input + 0xec);
}
