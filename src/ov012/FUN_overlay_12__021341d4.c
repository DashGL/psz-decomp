// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1c, exact bytes and relocation targets.
// FUN_overlay_12__021341d4 @ 0x021341d4
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Set global enable byte and incoming option bytes in observed order.
 * Field identities remain provisional.
 */
extern unsigned char data_0211a500[];
extern unsigned char data_0211a502[];
extern unsigned char data_0211a501[];
void FUN_overlay_12__021341d4(unsigned int a,unsigned int b) {*data_0211a500=1;*data_0211a502=a;*data_0211a501=b;}
