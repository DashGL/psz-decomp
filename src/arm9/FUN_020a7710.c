// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x20, exact bytes and relocation targets.
// FUN_020a7710 @ 0x020a7710
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04.
 * After coordinate validation, clear cell byte at +4+x+128*y.
 * Object/field identities remain provisional.
 * Evidence: extracted/arm9/arm9.bin at the named address; PC-relative
 * literal values read directly from that image.
 */
extern int FUN_020a76e8(int,int);
void FUN_020a7710(char *self,int x,int y) {
    if(FUN_020a76e8(x,y)) (self+(x+128*y))[4]=0;
}
