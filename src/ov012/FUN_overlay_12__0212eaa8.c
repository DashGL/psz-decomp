// FUN_overlay_12__0212eaa8 @ 0x0212eaa8 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch44.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212eaa8 @ 0x0212eaa8 (code 0x38, pool extent 0x38, thumb)
// check: vers=2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Confirm the active dialog selection or clear the auxiliary display and restart its selector.
 * Field identities remain provisional.
 */
extern void FUN_overlay_12__02131fd0(void *,int);extern void FUN_overlay_12__0212ca54(void);extern void FUN_overlay_12__0212e73c(void *);int FUN_overlay_12__0212eaa8(unsigned char *p) {if(*(int *)(p+64)!=1)return 0;if(*(int *)(p+68)==0){*(int *)(p+64)=2;FUN_overlay_12__02131fd0(p,1);}else{FUN_overlay_12__0212ca54();*(int *)(p+552)=-1;FUN_overlay_12__0212e73c(p);}return 1;}
