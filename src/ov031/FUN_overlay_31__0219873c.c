// FUN_overlay_31__0219873c @ 0x0219873c (0x2e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_overlay_31__0219873c @ 0x0219873c (code 0x2e, pool extent 0x2e, thumb)
// check: vers=2.0/sp2p3 target=0x2e candidate=0x2e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 31 reconstruction from extracted module bytes, 2026-11-04.
 * Bind child and component index, compute component vector and enable component.
 * Field identities remain provisional.
 */
extern void FUN_overlay_31__02198968(int *,void *);
extern void FUN_02043f30(void *,int,const void *);
extern void FUN_02043ea4(void *,int,int);
void FUN_overlay_31__0219873c(unsigned int *p,void *child,int index) {int v[3];p[1]=(unsigned int)child;p[2]=index;FUN_overlay_31__02198968(v,p);FUN_02043f30(child,index,v);FUN_02043ea4(child,index,1);}
