// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x38, exact bytes and relocation targets.
// FUN_overlay_10__0212020c @ 0x0212020c, verified extent 0x38.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_02122ba4[];
extern unsigned char DAT_02122bb8[];
extern unsigned char DAT_02122bcc[];
// FUN_overlay_10__0212020c @ 0x0212020c (code 0x2a, pool extent 0x38, thumb)
// flags: -O4,s
/* USA overlay 10 reconstruction from extracted module bytes, 2026-11-04.
 * Construct base and install derived class and embedded interface tables.
 * Field identities remain provisional.
 */
extern void *FUN_overlay_10__0211fc88(void *,int);
void *FUN_overlay_10__0212020c(unsigned int *p) {FUN_overlay_10__0211fc88(p,1);p[36]=((unsigned int)DAT_02122ba4 + 0u);p[0]=((unsigned int)DAT_02122bb8 + 0u);p[36]=((unsigned int)DAT_02122bcc + 0u);p[37]=1;return p;}
