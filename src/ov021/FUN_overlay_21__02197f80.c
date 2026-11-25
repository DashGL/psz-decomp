// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x44, exact bytes and relocation targets.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// Global member widths and offsets follow the ROM accesses at its literal-pool base.
// FUN_overlay_21__02197f80 @ 0x02197f80 (code 0x3e, pool extent 0x44, thumb)
// flags: -O4,s
/* USA overlay 21 reconstruction from extracted module bytes, 2026-11-04.
 * Reset three vectors and sentinel/state words, returning receiver.
 * Field identities remain provisional.
 */
typedef struct {unsigned int x,y,z;} Vec;

extern struct { Vec field_0; } DAT_020fc958;
void *FUN_overlay_21__02197f80(unsigned int *p) {*(Vec *)p=DAT_020fc958.field_0;*(Vec *)(p+3)=DAT_020fc958.field_0;*(Vec *)(p+6)=DAT_020fc958.field_0;p[9]=~0U;p[10]=~0U;p[11]=0;p[12]=0;return p;}
