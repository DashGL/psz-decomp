// FUN_overlay_27__0219a270 @ 0x0219a270 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch9.json; original draft retained for referenced provenance.
// FUN_overlay_27__0219a270 @ 0x0219a270 (code 0x34, pool extent 0x34, thumb)
// check: vers=2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 27 reconstruction from extracted module bytes, 2026-11-04.
 * Resolve target vector, advance parent on failure and start animation two with transition ten.
 * Field identities remain provisional.
 */
extern int FUN_overlay_27__0219a1f0(void *,void *);
extern void FUN_02037924(void *);
extern void FUN_02040c0c(void *,int,int,int,int);
void FUN_overlay_27__0219a270(int *p) {int *parent=(int *)p[2];p[7]=FUN_overlay_27__0219a1f0(parent,p+4);if(!p[7]){parent[21]=1;FUN_02037924((void *)p[2]);}p[3]=0;FUN_02040c0c((void *)p[1],0,2,4096,10);}
