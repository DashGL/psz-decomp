// FUN_020870e8 @ 0x020870e8 (0x4e, thumb) - ported from FUN_0209f158 [banked], verified via tools/match.py (word compare + verify_relocs).
/* FUN_020870e8 @ 0x0209f158 (0x4e, Thumb) — MATCHED dsi/1.1.
 * Check source via0209f1a8 (word+34 zero and signed+38 in0..2). On success copy18
 * halfwords from+3c,8 bytes from+60,and14 words from+68 into a100-byte output; return1,
 * otherwise0. Typed aggregate copies reproduce halfword,byte,and paired-word loops.
 * True extent4e excludes alignment padding. Evidence: Mini ROM instructions and callee
 * contracts; full words/relocs match. Goal50 2026-10-14.
 */
typedef unsigned int u32;
typedef struct {
    unsigned short x[18];
} Shorts;
typedef struct {
    unsigned char x[8];
} Bytes;
typedef struct {
    u32 x[14];
} Words;
typedef struct {
    Shorts shorts;
    Bytes bytes;
    Words words;
} Record;
extern int FUN_02087138(u32);
int FUN_020870e8(u32 source, Record *output) {
    if (FUN_02087138(source)) {
        output->shorts = *(Shorts *)(source + 0x3c);
        output->bytes = *(Bytes *)(source + 0x60);
        output->words = *(Words *)(source + 0x68);
        return 1;
    }
    return 0;
}
