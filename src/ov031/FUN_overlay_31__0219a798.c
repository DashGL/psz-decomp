// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x14, exact bytes and relocation targets.
// FUN_overlay_31__0219a798 @ 0x0219a798 (code 0x14, pool extent 0x14, thumb)
// flags: -O4,s
/* USA overlay 31 reconstruction from extracted module bytes, 2026-11-04.
 * Validate signed byte index in range zero through twenty-four.
 * Field identities remain provisional.
 */
int FUN_overlay_31__0219a798(void *unused,signed char *p) { int i=p[0]; if(i<0 || i>=25)return 0; return 1; }
