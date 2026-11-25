// FUN_overlay_12__02136854 @ 0x02136854 (0x48, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch28.json; original draft retained for referenced provenance.
// FUN_overlay_12__02136854 @ 0x02136854 (code 0x44, pool extent 0x48, thumb)
// check: vers=2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Construct the text panel, initialize parameters and clear its text buffer.
 * Field identities remain provisional.
 */
typedef struct {int v[9];} Params;
extern void *FUN_overlay_12__02131d80(void *,void *,int);extern void FUN_0200c938(void *,unsigned int);extern void FUN_overlay_12__0213689c(void *,const Params *);
void *FUN_overlay_12__02136854(unsigned char *self,void *owner,const Params *params){FUN_overlay_12__02131d80(self,owner,0);*(int *)self=0x0213ebd0;*(int *)(self+64)=params->v[3];*(int *)(self+68)=0;*(Params *)(self+72)=*params;FUN_0200c938(self+108,256);FUN_overlay_12__0213689c(self,params);return self;}
