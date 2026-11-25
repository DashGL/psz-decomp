// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x2c, exact bytes and relocation targets.
// FUN_overlay_12__021331fc @ 0x021331fc
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * For matching packet type compare eight-bit fields at bit fourteen.
 * Field identities remain provisional.
 */
int FUN_overlay_12__021331fc(void *unused,unsigned char *a,unsigned char *b) {if(a[0]==3 && a[1]==1)return ((*(int *)(a+4)&0x3fc000)>>14)>((*(int *)(b+4)&0x3fc000)>>14);return 0;}
