// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x38, exact bytes and relocation targets.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// Global member widths and offsets follow the ROM accesses at its literal-pool base.
// FUN_overlay_31__02198700 @ 0x02198700 (code 0x32, pool extent 0x38, thumb)
// flags: -O4,s
/* USA overlay 31 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize state and two default vectors.
 * Field identities remain provisional.
 */
typedef struct {unsigned int x,y,z;} Vec;

extern struct { Vec field_0; } DAT_020fc958;
void *FUN_overlay_31__02198700(unsigned int *p) {p[0]=0;p[1]=0;p[2]=~0U;p[3]=0;p[4]=0;*(Vec *)(p+5)=DAT_020fc958.field_0;*(Vec *)(p+8)=DAT_020fc958.field_0;return p;}
