// FUN_overlay_4__0212864c @ 0x0212864c (0x44, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch42.json; original draft retained for referenced provenance.
// FUN_overlay_4__0212864c @ 0x0212864c (code 0x44, pool extent 0x44, thumb)
// check: vers=2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Position indexed descriptors in a vertically spaced list.
 * Field identities remain provisional.
 */
extern void FUN_020c331c(int,int,int,int);
void FUN_overlay_4__0212864c(int *p,int mode,char *records,int count,int x) {int y,i;if(count>=0&&records){y=0xf3000;if(mode==1)y=0x108000;for(i=0;i<count;i++){FUN_020c331c(*(unsigned short *)(records+i*20),x,y,p[9]);y+=0xd000;}}}
