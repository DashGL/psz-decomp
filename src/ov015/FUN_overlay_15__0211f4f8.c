// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x30, exact bytes and relocation targets.
// FUN_overlay_15__0211f4f8 @ 0x0211f4f8 (code 0x30, pool extent 0x30, thumb)
// flags: -O4,p
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Populate records with six-byte prefix and network-order random halfword.
 * Field identities remain provisional.
 */
extern void FUN_overlay_15__021206c0(void *,const void *,int);
extern unsigned short FUN_overlay_15__02120808(void);
extern unsigned short FUN_overlay_15__0212079c(unsigned short);
void FUN_overlay_15__0211f4f8(int count,unsigned char *out,const void *prefix) {int i;for(i=0;i<count;i++,out+=8){FUN_overlay_15__021206c0(out,prefix,6);*(unsigned short *)(out+6)=FUN_overlay_15__02120808();*(unsigned short *)(out+6)=FUN_overlay_15__0212079c(*(unsigned short *)(out+6));}}
