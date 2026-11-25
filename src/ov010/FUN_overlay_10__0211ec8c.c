// FUN_overlay_10__0211ec8c @ 0x0211ec8c (0x8e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch31.json; original draft retained for referenced provenance.
// FUN_overlay_10__0211ec8c @ 0x0211ec8c (code 0x8e, pool extent 0x8e, thumb)
// check: vers=2.0/sp2p3 target=0x8e candidate=0x8e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 10 reconstruction from extracted module bytes, 2026-11-04.
 * Reset counters and optionally clear byte or halfword text storage before display reset.
 * Field identities remain provisional.
 */
extern void FUN_020c38f0(void *,int);
void FUN_overlay_10__0211ec8c(int *p,int clear) {int wide=0,i;p[41]=0;p[42]=0;if(clear){((short *)p)[81]=0;((short *)p)[80]=0;if((unsigned int)p[0]<=3&&(11&(1<<p[0])))wide=1;if(!wide){if(p[35])for(i=0;i<p[36];i++)((char *)p[35])[i]=0;}else{if(p[34])for(i=0;i<p[36];i++)((short *)p[34])[i]=0;}FUN_020c38f0(p+44,0);}}
