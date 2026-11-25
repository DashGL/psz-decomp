// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets.
// FUN_overlay_20__0219d43c @ 0x0219d43c, verified extent 0x3c.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_020ed09c[];
extern unsigned char DAT_020ed0a0[];
extern unsigned char DAT_020fc958[];
extern unsigned char DAT_020fc988[];
// FUN_overlay_20__0219d43c @ 0x0219d43c (code 0x2a, pool extent 0x3c, thumb)
// flags: -O4,s
/* USA overlay 20 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize record from global defaults and vector.
 * Field identities remain provisional.
 */
typedef struct {unsigned int x,y,z;} Vec;
void FUN_overlay_20__0219d43c(unsigned int *p) {p[0]=*(unsigned int *)((unsigned int)DAT_020ed0a0 + 0u);p[1]=*(unsigned int *)((unsigned int)DAT_020ed09c + 0u);p[2]=*(unsigned int *)((unsigned int)DAT_020fc988 + 0u);*(Vec *)(p+3)=*(Vec *)((unsigned int)DAT_020fc958 + 0u);p[6]=0;}
