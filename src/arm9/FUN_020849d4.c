// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x48, exact bytes and relocation targets.
// FUN_020849d4 @ 0x020849d4 (inventory code 0x44, thumb)
// check: 2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Return default one for unsupported item; otherwise whole quantity or unsigned packed upper ten bits.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address. Four-byte byte-aligned record assignment reproduces
 * ROM copy loop at 0x020849e2..0x020849f2, including its subs/bne edge.
 * See notes/sessions/matching-upper-resume-2026-11-12.md.
 */
typedef struct { unsigned char bytes[4]; } Key_020849d4;
extern int FUN_02084900(void *), FUN_0203a820(void *,int);
unsigned int FUN_020849d4(unsigned char *self) {
    if(FUN_02084900(self)) {
        Key_020849d4 key=*(Key_020849d4 *)self;
        if(FUN_0203a820(&key,4)) return *(unsigned int *)(self+4);
        return (unsigned int)((*(int *)(self+4)&(int)0xffc00000)>>22)&0x3ff;
    }
    return 1;
}
