// FUN_overlay_24__021990ec @ 0x021990ec (0x4c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch7.json; original draft retained for referenced provenance.
// FUN_overlay_24__021990ec @ 0x021990ec (code 0x4c, pool extent 0x4c, thumb)
// check: vers=2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 24 reconstruction from extracted module bytes, 2026-11-04.
 * Scale saved movement by remaining timer and apply position delta.
 * Field identities remain provisional.
 */
typedef struct {int v[3];} Vec;
extern void FUN_02092654(void *,int *);
extern void FUN_overlay_24__021990a0(void *,void *);
void FUN_overlay_24__021990ec(int *p) {Vec v;int scale;if(p[53]>0){v=*(Vec *)(p+54);scale=(p[53]<<12)/15;FUN_02092654(&v,&scale);FUN_overlay_24__021990a0(p,&v);p[53]--;}}
