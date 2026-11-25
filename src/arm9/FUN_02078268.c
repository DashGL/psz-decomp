// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x2c, exact bytes and relocation targets.
typedef struct {unsigned char bytes[4];} Copy_02078268;
// FUN_02078268 @ 0x02078268 (inventory code 0x2c, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy four bytes, sixteen-byte word block and trailing halfword.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address. Byte-aligned four-byte aggregate copy matches the ROM.
 * See notes/sessions/matching-upper-resume-2026-11-12.md.
 */
typedef struct { unsigned int a,b,c,d; } Words; void *FUN_02078268(unsigned char *dest,unsigned char *source) { int i; *(Copy_02078268 *)dest=*(const Copy_02078268 *)source; *(Words *)(dest+4)=*(Words *)(source+4); *(unsigned short *)(dest+20)=*(unsigned short *)(source+20); return dest; }
