// FUN_overlay_28__0219a5a0 @ 0x0219a5a0 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_overlay_28__0219a5a0 @ 0x0219a5a0 (code 0x24, pool extent 0x24, thumb)
// check: vers=2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 28 reconstruction from extracted module bytes, 2026-11-04.
 * Copy child position and store target selector result.
 * Field identities remain provisional.
 */
typedef struct {int x,y,z;} Vector;
extern int FUN_02037294(void *,const Vector *);
void FUN_overlay_28__0219a5a0(unsigned int *p) {Vector position=*(Vector *)((char *)p[1]+56);p[18]=FUN_02037294((void *)p[1],&position);}
