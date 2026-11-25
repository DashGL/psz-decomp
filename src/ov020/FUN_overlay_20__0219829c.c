// FUN_overlay_20__0219829c @ 0x0219829c (0x62, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch7.json; original draft retained for referenced provenance.
// FUN_overlay_20__0219829c @ 0x0219829c (code 0x5a, pool extent 0x62, thumb)
// check: vers=2.0/sp2p3 target=0x62 candidate=0x62 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 20 reconstruction from extracted module bytes, 2026-11-04.
 * Resolve height from selected model transform or current position with default unit offset.
 * Field identities remain provisional.
 */
extern void *FUN_02036c88(void *,int);
extern int FUN_0204260c(void *,int,void *,void *);
void FUN_overlay_20__0219829c(int *p,unsigned int mode,int *height) {int matrix[12];void *component;*height=4096;component=FUN_02036c88(p,0);switch(mode){case 0:*height+=p[15];break;case 1:case 2:if(FUN_0204260c(component,12,matrix,0))*height=matrix[10];break;case 3:if(FUN_0204260c(component,18,matrix,0))*height=matrix[10];break;}}
