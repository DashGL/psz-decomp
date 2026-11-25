// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x2c, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// FUN_020380a8 @ 0x020380a8 (inventory code 0x22, thumb)
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04.
 * Store truncated angle at +b4, index paired signed halfword table by angle/16, and tail-call helper on +90.
 * Object/field identities remain provisional.
 * Evidence: extracted/arm9/arm9.bin at the named address; PC-relative
 * literal values read directly from that image.
 */
extern short D_020ed83c[];
extern void FUN_0205abac(void *,int,int);
void FUN_020380a8(char *self,unsigned int angle) {
    unsigned int index;
    *(unsigned short *)(self+0xb4)=angle;
    index=*(unsigned short *)(self+0xb4)>>4;
    FUN_0205abac(self+0x90,D_020ed83c[2*index],D_020ed83c[2*index+1]);
}
