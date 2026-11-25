// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1a, exact bytes and relocation targets.
// FUN_02074504 @ 0x02074504 (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy nine halfwords in loop, then tenth separately; return destination.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address. Halfword-aligned subrecord assignment matches the ROM.
 * See notes/sessions/matching-upper-resume-2026-11-12.md.
 */
typedef struct { unsigned short h[9]; } Block_02074504;
void *FUN_02074504(unsigned short *dst,const unsigned short *src) {
    
    *(Block_02074504 *)dst=*(const Block_02074504 *)src; dst[9]=src[9]; return dst;
}
