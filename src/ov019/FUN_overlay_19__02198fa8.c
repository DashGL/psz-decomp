// FUN_overlay_19__02198fa8 @ 0x02198fa8 (0x50, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch30.json; original draft retained for referenced provenance.
// FUN_overlay_19__02198fa8 @ 0x02198fa8 (code 0x50, pool extent 0x50, thumb)
// check: vers=2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 19 reconstruction from extracted module bytes, 2026-11-04.
 * Acquire effect handle if absent and copy position or flag lookup failure.
 * Field identities remain provisional.
 */
extern int FUN_02074e9c(void *,int,int,int);
extern void *FUN_02075040(void *,int);
void FUN_overlay_19__02198fa8(int *p,void *owner) {int *effect;struct V {int x,y,z;};if(p[12]==-1)p[12]=FUN_02074e9c(owner,8,0,0);effect=(int *)FUN_02075040(owner,p[12]);if(effect){*(struct V *)(effect+23)=*(struct V *)(p+3);effect[57]|=65536;}else p[7]=1;}
