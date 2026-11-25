// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x18, exact bytes and relocation targets.
// FUN_02052de4 @ 0x02052de4 (inventory code 0x14, arm)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04.
 * Match recovery 2026-11-12: retain relocatable DAT_02110b00 base and
 * load its second pointer before indexing. Absolute-address spelling let
 * the compiler fold the global load address and alter the store lowering.
 * Store indexed word at global context +18; caller supplies valid index.
 * Object/field identities remain provisional.
 * Evidence: extracted/arm9/arm9.bin at the named address; inventory code
 * extent above, literal pools resolved directly from PC-relative loads.
 */
extern unsigned int *DAT_02110b00[];
void FUN_02052de4(unsigned int index, unsigned int value) {
    unsigned int *context=DAT_02110b00[1];
    (context+index)[6]=value;
}
