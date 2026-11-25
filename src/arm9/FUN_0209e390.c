// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1c, exact bytes and relocation targets.
// FUN_0209e390 @ 0x0209e390
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern unsigned int D_020f4b04[];
/* USA ROM disassembly reconstruction, 2026-11-04.
 * Subtract selected table word; signed selector outside [0,3) returns zero.
 * Object/field identities remain provisional.
 * Evidence: extracted/arm9/arm9.bin at the named address; PC-relative
 * literal values read directly from that image.
 */
unsigned int FUN_0209e390(unsigned int value,int selector) {
    if(selector>=0 && selector<3) return value-D_020f4b04[selector];
    return 0;
}
