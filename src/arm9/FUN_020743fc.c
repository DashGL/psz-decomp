// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1e, exact bytes and relocation targets.
// FUN_020743fc @ 0x020743fc (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy two bytes and seven halfwords; destination retained as return value.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address. Halfword-aligned subrecord assignment matches the ROM.
 * See notes/sessions/matching-upper-resume-2026-11-12.md.
 */
typedef struct { unsigned short h[7]; } Block_020743fc;
void *FUN_020743fc(unsigned char *dst,const unsigned char *src) {
    
    dst[0]=src[0]; dst[1]=src[1]; *(Block_020743fc *)(dst+2)=*(const Block_020743fc *)(src+2);
    return dst;
}
