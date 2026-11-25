// FUN_overlay_12__02120d98 @ 0x02120d98 (0x50, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch43.json; original draft retained for referenced provenance.
// FUN_overlay_12__02120d98 @ 0x02120d98 (code 0x44, pool extent 0x50, thumb)
// check: vers=2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Enable sub-screen background and initialize display resource holder.
 * Field identities remain provisional.
 */
extern void FUN_020c2b84(void *,void *,int,int,int);
void FUN_overlay_12__02120d98(char *p) {unsigned int bits=(*(volatile unsigned int *)0x04001000&0x1f00)>>8;*(volatile unsigned int *)0x04001000=(*(volatile unsigned int *)0x04001000&0xffffe0ff)|((bits|8)<<8);*(volatile unsigned short *)0x0400100e=(*(volatile unsigned short *)0x0400100e&0x43)|0x190;FUN_020c2b84(p+8,(void *)0x0213d418,7,1,4);}
