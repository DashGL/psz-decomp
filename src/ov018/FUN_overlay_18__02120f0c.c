// FUN_overlay_18__02120f0c @ 0x02120f0c (0x2a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_overlay_18__02120f0c @ 0x02120f0c (code 0x2a, pool extent 0x2a, thumb)
// check: vers=2.0/sp2p3 target=0x2a candidate=0x2a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 18 reconstruction from extracted module bytes, 2026-11-04.
 * Write halfword using inclusive signed dimension checks and truncated flat index.
 * Field identities remain provisional.
 */
void FUN_overlay_18__02120f0c(unsigned int *p,int x,int y,unsigned int value) {unsigned short *data=(unsigned short *)p[0];unsigned int width;if(!data || x<0)return;width=p[1];if(x>(int)width || y<0 || y>(int)p[2])return;data[(unsigned short)((unsigned int)y*width+(unsigned int)x)]=value;}
