// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// Global member widths and offsets follow the ROM accesses at its literal-pool base.
// FUN_overlay_20__0219df38 @ 0x0219df38 (code 0x34, pool extent 0x3c, thumb)
// flags: -O4,s
/* USA overlay 20 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize vector, scalar defaults and cleared state.
 * Field identities remain provisional.
 */
typedef struct {unsigned int x,y,z;} Vec;

extern struct { Vec field_0; } DAT_020fc958;
extern struct { unsigned int field_0; } DAT_020fc988;
void FUN_overlay_20__0219df38(unsigned int *p) {*(Vec *)p=DAT_020fc958.field_0;((unsigned short *)p)[6]=0;p[4]=~0U;p[5]=DAT_020fc988.field_0;p[6]=DAT_020fc988.field_0;p[7]=0;p[8]=0;p[9]=DAT_020fc988.field_0;p[10]=0;p[11]=DAT_020fc988.field_0;((unsigned short *)p)[24]=0;}
