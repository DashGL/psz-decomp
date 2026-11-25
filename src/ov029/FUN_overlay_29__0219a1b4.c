// FUN_overlay_29__0219a1b4 @ 0x0219a1b4 (0x46, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch8.json; original draft retained for referenced provenance.
// FUN_overlay_29__0219a1b4 @ 0x0219a1b4 (code 0x46, pool extent 0x46, thumb)
// check: vers=2.0/sp2p3 target=0x46 candidate=0x46 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 29 reconstruction from extracted module bytes, 2026-11-04.
 * Start animation and initialize randomized signed offset and heading.
 * Field identities remain provisional.
 */
extern void FUN_02040c0c(void *,int,int,int,int);
extern int FUN_02037208(void *,unsigned int);
void FUN_overlay_29__0219a1b4(int *p) {char *c=(char *)p[1];int offset;FUN_02040c0c(c,0,4,4096,0);p[3]=0;p[5]=0;offset=FUN_02037208(c,512);if(offset%2)offset=-offset;((short *)p)[8]=offset;*(unsigned short *)(c+68)=FUN_02037208(c,65536);}
