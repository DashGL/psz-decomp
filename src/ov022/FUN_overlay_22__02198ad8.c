// FUN_overlay_22__02198ad8 @ 0x02198ad8 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch9.json; original draft retained for referenced provenance.
// FUN_overlay_22__02198ad8 @ 0x02198ad8 (code 0x34, pool extent 0x38, thumb)
// check: vers=2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Turn toward resolved target with bounded angular step or preserve current heading.
 * Field identities remain provisional.
 */
extern int *FUN_overlay_22__0219a638(int,int);
extern unsigned short FUN_0205c9e4(int,int);
extern unsigned short FUN_overlay_22__0219a3c4(unsigned short,unsigned short,int);
unsigned short FUN_overlay_22__02198ad8(int *p,int index) {unsigned short angle=((unsigned short *)p)[21];int *target=FUN_overlay_22__0219a638(index,0);if(target)angle=FUN_0205c9e4(target[45]-p[4],target[47]-p[6]);return FUN_overlay_22__0219a3c4(((unsigned short *)p)[21],angle,273);}
