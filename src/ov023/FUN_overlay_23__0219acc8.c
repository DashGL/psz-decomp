// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x2c, exact bytes and relocation targets.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// Global member widths and offsets follow the ROM accesses at its literal-pool base.
extern struct { unsigned int field_0; } DAT_020fc988;
// FUN_overlay_23__0219acc8 @ 0x0219acc8 (code 0x28, pool extent 0x2c, thumb)
// flags: -O4,s
/* USA overlay 23 reconstruction from extracted module bytes, 2026-11-04.
 * Start animation thirteen, reset counter and copy two shared timing values.
 * Field identities remain provisional.
 */
extern void FUN_02040c0c(void *,int,int,int,int);
void FUN_overlay_23__0219acc8(unsigned int *p) {FUN_02040c0c((void *)p[1],0,13,4096,0);p[3]=0;p[4]=DAT_020fc988.field_0;p[5]=DAT_020fc988.field_0;}
