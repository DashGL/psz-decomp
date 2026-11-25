// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x44, exact bytes and relocation targets.
// FUN_02084a1c @ 0x02084a1c (inventory code 0x3e, thumb)
// check: 2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * If item supports quantity, inspect copied 4-byte key and store whole quantity or packed upper ten bits.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address. Aligned record assignment matches the ROM copy loop.
 * See notes/sessions/matching-upper-resume-2026-11-12.md.
 */
typedef struct { unsigned char bytes[4]; } Key_02084a1c;
extern int FUN_02084900(void *), FUN_0203a820(void *,int);
void FUN_02084a1c(unsigned char *self,unsigned int value) {
    if(FUN_02084900(self)) {
        Key_02084a1c key=*(Key_02084a1c *)self;
        if(FUN_0203a820(&key,4)) *(unsigned int *)(self+4)=value;
        else *(unsigned int *)(self+4)=(*(unsigned int *)(self+4)&0x3fffff)|(value<<22);
    }
}
