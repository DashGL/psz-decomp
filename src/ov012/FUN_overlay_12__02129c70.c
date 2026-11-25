// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x26, exact bytes and relocation targets.
// FUN_overlay_12__02129c70 @ 0x02129c70
// check: 2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Return five times nullable string length bounded at 256.
 * Field identities remain provisional.
 */
int FUN_overlay_12__02129c70(const signed char *p) {int width=0,i;if(p)for(i=0;i<256;){if(!*p)break;width+=5;i++;p++;}return width;}
