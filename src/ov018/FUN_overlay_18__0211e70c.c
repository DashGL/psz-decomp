// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x2c, exact bytes and relocation targets.
// FUN_overlay_18__0211e70c @ 0x0211e70c
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 18 reconstruction from extracted module bytes, 2026-11-04.
 * Increment cyclic selection and skip shared special slot.
 * Field identities remain provisional.
 */
extern signed char data_0211a208[];
void FUN_overlay_18__0211e70c(unsigned int *p) {++p[0];if(data_0211a208[1]==1 && p[0]==5)++p[0];if((int)p[0]>=(int)p[1])p[0]=0;}
