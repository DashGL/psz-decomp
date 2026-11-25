// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1c, exact bytes and relocation targets.
// FUN_overlay_15__02127e24 @ 0x02127e24
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern unsigned int D_0213e7ec[];
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Copy global pair into optional outputs.
 * Field identities remain provisional.
 */
void FUN_overlay_15__02127e24(unsigned int *a,unsigned int *b) {if(a)*a=D_0213e7ec[6];if(b)*b=D_0213e7ec[7];}
