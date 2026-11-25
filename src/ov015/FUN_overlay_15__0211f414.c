// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x22, exact bytes and relocation targets.
// FUN_overlay_15__0211f414 @ 0x0211f414 (code 0x22, pool extent 0x22, thumb)
// flags: -O4,p
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Reject byte sequence outside inclusive 0x20 through 0x7f.
 * Field identities remain provisional.
 */
int FUN_overlay_15__0211f414(const unsigned char *p,int count) {int i;for(i=0;i<count;i++){unsigned int value=*p++;if(value<32 || value>127)return -1;}return 0;}
