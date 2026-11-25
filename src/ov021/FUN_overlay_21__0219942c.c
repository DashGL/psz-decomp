// FUN_overlay_21__0219942c @ 0x0219942c (0xc8, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch3.json; original draft retained for referenced provenance.
// FUN_overlay_21__0219942c @ 0x0219942c (code 0xaa, pool extent 0xc8, thumb)
// check: vers=2.0/sp2p3 target=0xc8 candidate=0xc8 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 21 reconstruction from extracted module bytes, 2026-11-04.
 * Resolve height from mode-specific component and transform indices.
 * Field identities remain provisional.
 */
extern void *FUN_02036c88(void *,int);
extern int FUN_0204260c(void *,int,void *,void *);
void FUN_overlay_21__0219942c(int *p,unsigned int mode,int *height) {int matrix[12];*height=4096;switch(mode){case 0:*height+=p[15];break;case 1:if(FUN_0204260c(FUN_02036c88(p,0),11,matrix,0))*height=matrix[10];break;case 3:case 4:case 5:case 6:if(FUN_0204260c(FUN_02036c88(p,mode-2),8,matrix,0))*height=matrix[10];break;case 7:case 8:case 9:case 10:if(FUN_0204260c(FUN_02036c88(p,mode-6),4,matrix,0))*height=matrix[10];break;case 11:case 12:if(FUN_0204260c(FUN_02036c88(p,mode-6),8,matrix,0))*height=matrix[10];break;case 13:case 14:if(FUN_0204260c(FUN_02036c88(p,mode-8),4,matrix,0))*height=matrix[10];break;}}
