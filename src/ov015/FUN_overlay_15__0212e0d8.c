// FUN_overlay_15__0212e0d8 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_15__0212e0d8 @ 0x0212e0d8
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15: store selector, compute mapped position, refresh display. */
extern unsigned char D_0213e86c[];
extern unsigned char D_0213a4b8[];
extern int FUN_overlay_15__0212de6c(unsigned int);
extern void FUN_overlay_15__0212dfe0(void);
void FUN_overlay_15__0212e0d8(unsigned int selector) {D_0213e86c[0]=selector;D_0213e86c[2]=FUN_overlay_15__0212de6c(D_0213a4b8[selector]);FUN_overlay_15__0212dfe0();}
