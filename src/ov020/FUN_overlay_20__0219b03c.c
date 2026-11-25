// FUN_overlay_20__0219b03c @ 0x0219b03c (0x4c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch7.json; original draft retained for referenced provenance.
// FUN_overlay_20__0219b03c @ 0x0219b03c (code 0x48, pool extent 0x4c, thumb)
// check: vers=2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 20 reconstruction from extracted module bytes, 2026-11-04.
 * Snapshot child vector, initialize timer and start configured animation.
 * Field identities remain provisional.
 */
typedef struct {int v[3];} Vec;
extern void *FUN_overlay_20__02199068(void *);
extern void FUN_overlay_20__02198ff0(void *,int);
extern void FUN_overlay_20__02199030(void *,int);
extern void FUN_02040c0c(void *,int,int,int,int);
void FUN_overlay_20__0219b03c(int *p) {void *child=(void *)p[1];*(Vec *)(p+6)=*(Vec *)FUN_overlay_20__02199068(child);p[9]=*(int *)0x020fc988;*(short *)(p+10)=0;*((short *)(p+10)+1)=0;FUN_02040c0c(child,0,20,4096,10);FUN_overlay_20__02198ff0(child,0);FUN_overlay_20__02199030(child,0);}
