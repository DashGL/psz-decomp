// FUN_overlay_15__02135b44 @ 0x02135b44 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_overlay_15__02135b44 @ 0x02135b44 (code 0x1c, pool extent 0x1c, thumb)
// check: vers=2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Allocate zeroed circular queue with one spare entry and clear read/write indices.
 * Field identities remain provisional.
 */
extern void *FUN_overlay_15__021366c4(unsigned int,int);
void *FUN_overlay_15__02135b44(unsigned int capacity) {unsigned char *p=FUN_overlay_15__021366c4((capacity+1)*4+8,4);*(unsigned short *)p=capacity+1;p[2]=0;p[3]=0;return p;}
